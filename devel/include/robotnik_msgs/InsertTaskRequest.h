// Generated by gencpp from file robotnik_msgs/InsertTaskRequest.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_INSERTTASKREQUEST_H
#define ROBOTNIK_MSGS_MESSAGE_INSERTTASKREQUEST_H


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
struct InsertTaskRequest_
{
  typedef InsertTaskRequest_<ContainerAllocator> Type;

  InsertTaskRequest_()
    : id_submission(0)
    , description_task()
    , datatime_start()  {
    }
  InsertTaskRequest_(const ContainerAllocator& _alloc)
    : id_submission(0)
    , description_task(_alloc)
    , datatime_start(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _id_submission_type;
  _id_submission_type id_submission;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _description_task_type;
  _description_task_type description_task;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _datatime_start_type;
  _datatime_start_type datatime_start;





  typedef boost::shared_ptr< ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator> const> ConstPtr;

}; // struct InsertTaskRequest_

typedef ::robotnik_msgs::InsertTaskRequest_<std::allocator<void> > InsertTaskRequest;

typedef boost::shared_ptr< ::robotnik_msgs::InsertTaskRequest > InsertTaskRequestPtr;
typedef boost::shared_ptr< ::robotnik_msgs::InsertTaskRequest const> InsertTaskRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator1> & lhs, const ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator2> & rhs)
{
  return lhs.id_submission == rhs.id_submission &&
    lhs.description_task == rhs.description_task &&
    lhs.datatime_start == rhs.datatime_start;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator1> & lhs, const ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "415fc1cb1de92194825450f4e7e89346";
  }

  static const char* value(const ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x415fc1cb1de92194ULL;
  static const uint64_t static_value2 = 0x825450f4e7e89346ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/InsertTaskRequest";
  }

  static const char* value(const ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id_submission\n"
"string description_task\n"
"string datatime_start\n"
;
  }

  static const char* value(const ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id_submission);
      stream.next(m.description_task);
      stream.next(m.datatime_start);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InsertTaskRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::InsertTaskRequest_<ContainerAllocator>& v)
  {
    s << indent << "id_submission: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id_submission);
    s << indent << "description_task: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.description_task);
    s << indent << "datatime_start: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.datatime_start);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_INSERTTASKREQUEST_H
