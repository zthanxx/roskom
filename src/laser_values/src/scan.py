#! /usr/bin/env python3

import rospy
from sensor_msgs.msg import LaserScan

def callback(msg):
    #print (len(msg.ranges))
    #print (msg.ranges[908],msg.ranges[227],msg.ranges[450],msg.ranges[681])
    print (msg.ranges[0])


rospy.init_node('scan_values')
sub = rospy.Subscriber('/scan', LaserScan, callback)
rospy.spin()
