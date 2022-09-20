# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "cv_bridge;dynamic_reconfigure;gazebo_msgs;geometry_msgs;message_generation;message_runtime;nodelet;nodelet;rosconsole;roscpp;rosgraph_msgs;rospy;sensor_msgs;std_srvs;tf;tf2_ros;nav_msgs;trajectory_msgs;urdf".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lgazebo_ros_diff_drive_multiwheel;-lgazebo_ros_utils".split(';') if "-lgazebo_ros_diff_drive_multiwheel;-lgazebo_ros_utils" != "" else []
PROJECT_NAME = "gazebo_ros_diff_drive_multiwheel"
PROJECT_SPACE_DIR = "/home/sutanmsa/catkin_ws/install"
PROJECT_VERSION = "2.5.20"
