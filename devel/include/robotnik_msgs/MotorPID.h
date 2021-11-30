// Generated by gencpp from file robotnik_msgs/MotorPID.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_MOTORPID_H
#define ROBOTNIK_MSGS_MESSAGE_MOTORPID_H


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
struct MotorPID_
{
  typedef MotorPID_<ContainerAllocator> Type;

  MotorPID_()
    : can_id()
    , name()
    , kp()
    , ki()
    , kd()  {
    }
  MotorPID_(const ContainerAllocator& _alloc)
    : can_id(_alloc)
    , name(_alloc)
    , kp(_alloc)
    , ki(_alloc)
    , kd(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _can_id_type;
  _can_id_type can_id;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _name_type;
  _name_type name;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _kp_type;
  _kp_type kp;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _ki_type;
  _ki_type ki;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _kd_type;
  _kd_type kd;





  typedef boost::shared_ptr< ::robotnik_msgs::MotorPID_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::MotorPID_<ContainerAllocator> const> ConstPtr;

}; // struct MotorPID_

typedef ::robotnik_msgs::MotorPID_<std::allocator<void> > MotorPID;

typedef boost::shared_ptr< ::robotnik_msgs::MotorPID > MotorPIDPtr;
typedef boost::shared_ptr< ::robotnik_msgs::MotorPID const> MotorPIDConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::MotorPID_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::MotorPID_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::MotorPID_<ContainerAllocator1> & lhs, const ::robotnik_msgs::MotorPID_<ContainerAllocator2> & rhs)
{
  return lhs.can_id == rhs.can_id &&
    lhs.name == rhs.name &&
    lhs.kp == rhs.kp &&
    lhs.ki == rhs.ki &&
    lhs.kd == rhs.kd;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::MotorPID_<ContainerAllocator1> & lhs, const ::robotnik_msgs::MotorPID_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::MotorPID_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::MotorPID_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::MotorPID_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::MotorPID_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::MotorPID_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::MotorPID_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::MotorPID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a4f1747645e7d598483fc2ed471a485d";
  }

  static const char* value(const ::robotnik_msgs::MotorPID_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa4f1747645e7d598ULL;
  static const uint64_t static_value2 = 0x483fc2ed471a485dULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::MotorPID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/MotorPID";
  }

  static const char* value(const ::robotnik_msgs::MotorPID_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::MotorPID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# either can_id or name are set\n"
"# if can_id is -1, then this refers to all motors.\n"
"int32[] can_id\n"
"string[] name\n"
"float32[] kp\n"
"float32[] ki\n"
"float32[] kd\n"
;
  }

  static const char* value(const ::robotnik_msgs::MotorPID_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::MotorPID_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.can_id);
      stream.next(m.name);
      stream.next(m.kp);
      stream.next(m.ki);
      stream.next(m.kd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorPID_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::MotorPID_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::MotorPID_<ContainerAllocator>& v)
  {
    s << indent << "can_id[]" << std::endl;
    for (size_t i = 0; i < v.can_id.size(); ++i)
    {
      s << indent << "  can_id[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.can_id[i]);
    }
    s << indent << "name[]" << std::endl;
    for (size_t i = 0; i < v.name.size(); ++i)
    {
      s << indent << "  name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name[i]);
    }
    s << indent << "kp[]" << std::endl;
    for (size_t i = 0; i < v.kp.size(); ++i)
    {
      s << indent << "  kp[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.kp[i]);
    }
    s << indent << "ki[]" << std::endl;
    for (size_t i = 0; i < v.ki.size(); ++i)
    {
      s << indent << "  ki[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.ki[i]);
    }
    s << indent << "kd[]" << std::endl;
    for (size_t i = 0; i < v.kd.size(); ++i)
    {
      s << indent << "  kd[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.kd[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_MOTORPID_H
