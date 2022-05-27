// ** open loop - cmd_vel only

#include "ros.h"
#include <std_msgs/String.h>
#include <geometry_msgs/Twist.h>
#include <ros/time.h>

ros::NodeHandle nh;

int E1= 9; //the pin to control mator’s speed
int M1= 8; //the pin to control direction right motor
int E2= 11; //the pin to control mator’s speed
int M2= 12; //the pin to control direction left motor

float wheel1;
float wheel2;

float wheel1a;
float wheel2a;

float demandx;
float demandz;

float speed_act_left; // actual left wheel speed in m/s
float speed_act_right; // actual right wheel speed in m/s

unsigned long currentMillis;
unsigned long previousMillis;
int loopTime = 10;

// wheel encoder interrupts

#define encoder0PinA 4     // encoder 1
#define encoder0PinB 5

#define encoder1PinA 6     // encoder 2
#define encoder1PinB 7

volatile long encoder0Pos = 0;    // encoder 1
volatile long encoder1Pos = 0;    // encoder 2


// ** ROS callback & subscriber **

void velCallback(  const geometry_msgs::Twist& vel)
{
     demandx = vel.linear.x;
     demandz = vel.angular.z;

     demandx = constrain(demandx,-1,1);     // try to keep it under control
     demandz = constrain(demandz,-1,1);

     demandx = demandx * 255;
     demandz = demandz * 255;
}

ros::Subscriber<geometry_msgs::Twist> sub("cmd_vel" , velCallback);     //create a subscriber for ROS cmd_vel topic

// ** Setup **
                        
void setup() {  

  nh.initNode();              // init ROS
  nh.subscribe(sub);          // subscribe to cmd_vel

  pinMode(E1, OUTPUT);     // motor PWM pins
  pinMode(E2, OUTPUT);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
   digitalWrite(M1,LOW);
    digitalWrite(M2,HIGH);


  //Serial.begin(115200);
}

void loop() {

     nh.spinOnce();        // make sure we listen for ROS messages and activate the callback if there is one

     currentMillis = millis();  

     if (currentMillis - previousMillis >= loopTime) {  // start timed loop for everything else
         previousMillis = currentMillis;

        // work out the two values for differential drive of each wheel

        wheel1 = demandx + (demandz);
        wheel2 = demandx - (demandz);

        wheel1 = constrain(wheel1,-255,255);
        wheel2 = constrain(wheel2,-255,255);

      
        // drive motors


        if (wheel1 > 0) {
          wheel1a = abs(wheel1);
          analogWrite(E1, wheel1a);
          digitalWrite(M1,LOW);

        }
        else if (wheel1 < 0) {
          wheel1a = abs(wheel1);
          analogWrite(E1, wheel1a);
          digitalWrite(M1,HIGH);

        }
        else {
          analogWrite(E1,0);

        }

        // other motor

        if (wheel2 > 0) {
          wheel2a = abs(wheel2);
          analogWrite(E2, wheel2a);
          digitalWrite(M2,HIGH);

        }
        else if (wheel2 < -0) {
          wheel2a = abs(wheel2);
          analogWrite(E2, wheel2a);
          digitalWrite(M2,LOW);

        }
        else {
          analogWrite(E2, 0);

        }


     } // end of timed loop    
   
} // end of main loop




  
