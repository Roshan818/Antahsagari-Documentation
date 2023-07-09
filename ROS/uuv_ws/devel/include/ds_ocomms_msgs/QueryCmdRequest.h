// Generated by gencpp from file ds_ocomms_msgs/QueryCmdRequest.msg
// DO NOT EDIT!


#ifndef DS_OCOMMS_MSGS_MESSAGE_QUERYCMDREQUEST_H
#define DS_OCOMMS_MSGS_MESSAGE_QUERYCMDREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_ocomms_msgs
{
template <class ContainerAllocator>
struct QueryCmdRequest_
{
  typedef QueryCmdRequest_<ContainerAllocator> Type;

  QueryCmdRequest_()
    : QUERY_DESTINATION()  {
    }
  QueryCmdRequest_(const ContainerAllocator& _alloc)
    : QUERY_DESTINATION(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _QUERY_DESTINATION_type;
  _QUERY_DESTINATION_type QUERY_DESTINATION;





  typedef boost::shared_ptr< ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator> const> ConstPtr;

}; // struct QueryCmdRequest_

typedef ::ds_ocomms_msgs::QueryCmdRequest_<std::allocator<void> > QueryCmdRequest;

typedef boost::shared_ptr< ::ds_ocomms_msgs::QueryCmdRequest > QueryCmdRequestPtr;
typedef boost::shared_ptr< ::ds_ocomms_msgs::QueryCmdRequest const> QueryCmdRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator1> & lhs, const ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator2> & rhs)
{
  return lhs.QUERY_DESTINATION == rhs.QUERY_DESTINATION;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator1> & lhs, const ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_ocomms_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "feea5886c299b7ab6f6d3a811dfbec61";
  }

  static const char* value(const ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfeea5886c299b7abULL;
  static const uint64_t static_value2 = 0x6f6d3a811dfbec61ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_ocomms_msgs/QueryCmdRequest";
  }

  static const char* value(const ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string QUERY_DESTINATION\n"
;
  }

  static const char* value(const ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.QUERY_DESTINATION);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct QueryCmdRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_ocomms_msgs::QueryCmdRequest_<ContainerAllocator>& v)
  {
    s << indent << "QUERY_DESTINATION: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.QUERY_DESTINATION);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_OCOMMS_MSGS_MESSAGE_QUERYCMDREQUEST_H
