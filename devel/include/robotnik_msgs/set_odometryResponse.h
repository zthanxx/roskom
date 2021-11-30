// Generated by gencpp from file robotnik_msgs/set_odometryResponse.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_SET_ODOMETRYRESPONSE_H
#define ROBOTNIK_MSGS_MESSAGE_SET_ODOMETRYRESPONSE_H


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
struct set_odometryResponse_
{
  typedef set_odometryResponse_<ContainerAllocator> Type;

  set_odometryResponse_()
    : ret(false)  {
    }
  set_odometryResponse_(const ContainerAllocator& _alloc)
    : ret(false)  {
  (void)_alloc;
    }



   typedef uint8_t _ret_type;
  _ret_type ret;





  typedef boost::shared_ptr< ::robotnik_msgs::set_odometryResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::set_odometryResponse_<ContainerAllocator> const> ConstPtr;

}; // struct set_odometryResponse_

typedef ::robotnik_msgs::set_odometryResponse_<std::allocator<void> > set_odometryResponse;

typedef boost::shared_ptr< ::robotnik_msgs::set_odometryResponse > set_odometryResponsePtr;
typedef boost::shared_ptr< ::robotnik_msgs::set_odometryResponse const> set_odometryResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::set_odometryResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::set_odometryResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::set_odometryResponse_<ContainerAllocator1> & lhs, const ::robotnik_msgs::set_odometryResponse_<ContainerAllocator2> & rhs)
{
  return lhs.ret == rhs.ret;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::set_odometryResponse_<ContainerAllocator1> & lhs, const ::robotnik_msgs::set_odometryResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::set_odometryResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::set_odometryResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::set_odometryResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::set_odometryResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::set_odometryResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::set_odometryResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::set_odometryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e2cc9e9d8c464550830df49c160979ad";
  }

  static const char* value(const ::robotnik_msgs::set_odometryResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe2cc9e9d8c464550ULL;
  static const uint64_t static_value2 = 0x830df49c160979adULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::set_odometryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/set_odometryResponse";
  }

  static const char* value(const ::robotnik_msgs::set_odometryResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::set_odometryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool ret \n"
"\n"
;
  }

  static const char* value(const ::robotnik_msgs::set_odometryResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::set_odometryResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ret);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct set_odometryResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::set_odometryResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::set_odometryResponse_<ContainerAllocator>& v)
  {
    s << indent << "ret: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ret);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_SET_ODOMETRYRESPONSE_H
