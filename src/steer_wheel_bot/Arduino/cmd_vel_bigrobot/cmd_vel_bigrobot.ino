// ** open loop - cmd_vel only

#include "ros.h"
#include <std_msgs/String.h>
#include <geometry_msgs/Twist.h>
#include <ros/time.h>
#include <std_msgs/Float32.h>
ros::NodeHandle nh;

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


// ** Setup **
//         std_msgs::String str_msg;
//         ros::Publisher chatter("motor", &str_msg); 
std_msgs::Float32 throttle_msg;
ros::Publisher throttle_pub("throttle", &throttle_msg);

std_msgs::Float32 steer_msg;
ros::Publisher steer_pub("steer", &steer_msg); 
// ** ROS callback & subscriber **

void velCallback(  const geometry_msgs::Twist& vel)
{
     demandx = vel.linear.x;
     demandz = vel.angular.z;

     demandx = constrain(demandx,-1,1);     // try to keep it under control
     demandz = constrain(demandz,-1,1);

     demandx = demandx * 255;
     demandz = demandz * 255;
        wheel1 = demandx;
        wheel2 = demandz;
        wheel1 = map(wheel1,-255,255,0,255);
        wheel2 = map(wheel2,-255,255,0,255);
     throttle_msg.data = wheel1;
  steer_msg.data = wheel2;
  
 throttle_pub.publish(&throttle_msg);
 steer_pub.publish(&steer_msg);
}

ros::Subscriber<geometry_msgs::Twist> sub("cmd_vel" , velCallback);     //create a subscriber for ROS cmd_vel topic

             
void setup() {  

  nh.initNode();              // init ROS
  nh.advertise(steer_pub);
  nh.advertise(throttle_pub);
  nh.subscribe(sub);          // subscribe to cmd_vel
 



  //Serial.begin(115200);
}

void loop() {

     nh.spinOnce();        // make sure we listen for ROS messages and activate the callback if there is one

     currentMillis = millis();  

     if (currentMillis - previousMillis >= loopTime) {  // start timed loop for everything else
         previousMillis = currentMillis;

        // work out the two values for differential drive of each wheel


//        wheel1 = map(wheel1,-255,255,0,255);
//        wheel2 = map(wheel2,-255,255,0,255);
       

     
      
      
      

     } // end of timed loop    
   
} // end of main loop




  
