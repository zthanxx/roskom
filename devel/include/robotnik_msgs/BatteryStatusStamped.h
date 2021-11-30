// Generated by gencpp from file robotnik_msgs/BatteryStatusStamped.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_BATTERYSTATUSSTAMPED_H
#define ROBOTNIK_MSGS_MESSAGE_BATTERYSTATUSSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <robotnik_msgs/BatteryStatus.h>

namespace robotnik_msgs
{
template <class ContainerAllocator>
struct BatteryStatusStamped_
{
  typedef BatteryStatusStamped_<ContainerAllocator> Type;

  BatteryStatusStamped_()
    : header()
    , status()  {
    }
  BatteryStatusStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , status(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::robotnik_msgs::BatteryStatus_<ContainerAllocator>  _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator> const> ConstPtr;

}; // struct BatteryStatusStamped_

typedef ::robotnik_msgs::BatteryStatusStamped_<std::allocator<void> > BatteryStatusStamped;

typedef boost::shared_ptr< ::robotnik_msgs::BatteryStatusStamped > BatteryStatusStampedPtr;
typedef boost::shared_ptr< ::robotnik_msgs::BatteryStatusStamped const> BatteryStatusStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator1> & lhs, const ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator1> & lhs, const ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0e07ed2a25b7897def1d6396b5ca65fc";
  }

  static const char* value(const ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0e07ed2a25b7897dULL;
  static const uint64_t static_value2 = 0xef1d6396b5ca65fcULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/BatteryStatusStamped";
  }

  static const char* value(const ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"BatteryStatus status\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: robotnik_msgs/BatteryStatus\n"
"float32 voltage			# in volts\n"
"float32 current			# in amperes\n"
"float32 level			# in %\n"
"uint32 time_remaining		# in minutes\n"
"uint32 time_charging            # in minutes \n"
"bool is_charging                # true when connected\n"
;
  }

  static const char* value(const ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BatteryStatusStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::BatteryStatusStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status: ";
    s << std::endl;
    Printer< ::robotnik_msgs::BatteryStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_BATTERYSTATUSSTAMPED_H
