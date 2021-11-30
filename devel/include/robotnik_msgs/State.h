// Generated by gencpp from file robotnik_msgs/State.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_STATE_H
#define ROBOTNIK_MSGS_MESSAGE_STATE_H


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
struct State_
{
  typedef State_<ContainerAllocator> Type;

  State_()
    : state(0)
    , desired_freq(0.0)
    , real_freq(0.0)
    , state_description()  {
    }
  State_(const ContainerAllocator& _alloc)
    : state(0)
    , desired_freq(0.0)
    , real_freq(0.0)
    , state_description(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _state_type;
  _state_type state;

   typedef float _desired_freq_type;
  _desired_freq_type desired_freq;

   typedef float _real_freq_type;
  _real_freq_type real_freq;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_description_type;
  _state_description_type state_description;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(INIT_STATE)
  #undef INIT_STATE
#endif
#if defined(_WIN32) && defined(STANDBY_STATE)
  #undef STANDBY_STATE
#endif
#if defined(_WIN32) && defined(READY_STATE)
  #undef READY_STATE
#endif
#if defined(_WIN32) && defined(EMERGENCY_STATE)
  #undef EMERGENCY_STATE
#endif
#if defined(_WIN32) && defined(FAILURE_STATE)
  #undef FAILURE_STATE
#endif
#if defined(_WIN32) && defined(SHUTDOWN_STATE)
  #undef SHUTDOWN_STATE
#endif
#if defined(_WIN32) && defined(UNKOWN_STATE)
  #undef UNKOWN_STATE
#endif

  enum {
    INIT_STATE = 100,
    STANDBY_STATE = 200,
    READY_STATE = 300,
    EMERGENCY_STATE = 400,
    FAILURE_STATE = 500,
    SHUTDOWN_STATE = 600,
    UNKOWN_STATE = 700,
  };


  typedef boost::shared_ptr< ::robotnik_msgs::State_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::State_<ContainerAllocator> const> ConstPtr;

}; // struct State_

typedef ::robotnik_msgs::State_<std::allocator<void> > State;

typedef boost::shared_ptr< ::robotnik_msgs::State > StatePtr;
typedef boost::shared_ptr< ::robotnik_msgs::State const> StateConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::State_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::State_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::State_<ContainerAllocator1> & lhs, const ::robotnik_msgs::State_<ContainerAllocator2> & rhs)
{
  return lhs.state == rhs.state &&
    lhs.desired_freq == rhs.desired_freq &&
    lhs.real_freq == rhs.real_freq &&
    lhs.state_description == rhs.state_description;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::State_<ContainerAllocator1> & lhs, const ::robotnik_msgs::State_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::State_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::State_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::State_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::State_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::State_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::State_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b3a486e7c5d573e5d1475cd7c02a518b";
  }

  static const char* value(const ::robotnik_msgs::State_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb3a486e7c5d573e5ULL;
  static const uint64_t static_value2 = 0xd1475cd7c02a518bULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/State";
  }

  static const char* value(const ::robotnik_msgs::State_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# constants\n"
"int32 INIT_STATE = 100\n"
"int32 STANDBY_STATE = 200\n"
"int32 READY_STATE = 300\n"
"int32 EMERGENCY_STATE = 400\n"
"int32 FAILURE_STATE = 500\n"
"int32 SHUTDOWN_STATE = 600\n"
"int32 UNKOWN_STATE = 700\n"
"\n"
"# state of the component\n"
"int32 state\n"
"# desired control loop frecuency\n"
"float32 desired_freq\n"
"# real frecuency \n"
"float32 real_freq\n"
"# Description of the state\n"
"string state_description\n"
;
  }

  static const char* value(const ::robotnik_msgs::State_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::State_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
      stream.next(m.desired_freq);
      stream.next(m.real_freq);
      stream.next(m.state_description);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct State_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::State_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::State_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<int32_t>::stream(s, indent + "  ", v.state);
    s << indent << "desired_freq: ";
    Printer<float>::stream(s, indent + "  ", v.desired_freq);
    s << indent << "real_freq: ";
    Printer<float>::stream(s, indent + "  ", v.real_freq);
    s << indent << "state_description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state_description);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_STATE_H
