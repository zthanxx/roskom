// Generated by gencpp from file robotnik_msgs/LaserStatus.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_LASERSTATUS_H
#define ROBOTNIK_MSGS_MESSAGE_LASERSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotnik_msgs
{
template <class ContainerAllocator>
struct LaserStatus_
{
  typedef LaserStatus_<ContainerAllocator> Type;

  LaserStatus_()
    : name()
    , detecting_obstacles(false)
    , contaminated(false)
    , free_warning(false)
    , warning_zones()  {
    }
  LaserStatus_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , detecting_obstacles(false)
    , contaminated(false)
    , free_warning(false)
    , warning_zones(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef uint8_t _detecting_obstacles_type;
  _detecting_obstacles_type detecting_obstacles;

   typedef uint8_t _contaminated_type;
  _contaminated_type contaminated;

   typedef uint8_t _free_warning_type;
  _free_warning_type free_warning;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _warning_zones_type;
  _warning_zones_type warning_zones;





  typedef boost::shared_ptr< ::robotnik_msgs::LaserStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::LaserStatus_<ContainerAllocator> const> ConstPtr;

}; // struct LaserStatus_

typedef ::robotnik_msgs::LaserStatus_<std::allocator<void> > LaserStatus;

typedef boost::shared_ptr< ::robotnik_msgs::LaserStatus > LaserStatusPtr;
typedef boost::shared_ptr< ::robotnik_msgs::LaserStatus const> LaserStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::LaserStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::LaserStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::LaserStatus_<ContainerAllocator1> & lhs, const ::robotnik_msgs::LaserStatus_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.detecting_obstacles == rhs.detecting_obstacles &&
    lhs.contaminated == rhs.contaminated &&
    lhs.free_warning == rhs.free_warning &&
    lhs.warning_zones == rhs.warning_zones;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::LaserStatus_<ContainerAllocator1> & lhs, const ::robotnik_msgs::LaserStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::LaserStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::LaserStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::LaserStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::LaserStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::LaserStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::LaserStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::LaserStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "59f57d3a0c4aa9b97dcd8bd40152ebb4";
  }

  static const char* value(const ::robotnik_msgs::LaserStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x59f57d3a0c4aa9b9ULL;
  static const uint64_t static_value2 = 0x7dcd8bd40152ebb4ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::LaserStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/LaserStatus";
  }

  static const char* value(const ::robotnik_msgs::LaserStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::LaserStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"bool detecting_obstacles\n"
"bool contaminated\n"
"bool free_warning\n"
"# one input per each warning zone.\n"
"# first areas are closer to the robot (i.e. more restrictive)\n"
"bool[] warning_zones \n"
;
  }

  static const char* value(const ::robotnik_msgs::LaserStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::LaserStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.detecting_obstacles);
      stream.next(m.contaminated);
      stream.next(m.free_warning);
      stream.next(m.warning_zones);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LaserStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::LaserStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::LaserStatus_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "detecting_obstacles: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.detecting_obstacles);
    s << indent << "contaminated: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.contaminated);
    s << indent << "free_warning: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.free_warning);
    s << indent << "warning_zones[]" << std::endl;
    for (size_t i = 0; i < v.warning_zones.size(); ++i)
    {
      s << indent << "  warning_zones[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.warning_zones[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_LASERSTATUS_H
