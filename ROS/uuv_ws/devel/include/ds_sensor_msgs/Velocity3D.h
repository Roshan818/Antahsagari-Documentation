// Generated by gencpp from file ds_sensor_msgs/Velocity3D.msg
// DO NOT EDIT!


#ifndef DS_SENSOR_MSGS_MESSAGE_VELOCITY3D_H
#define DS_SENSOR_MSGS_MESSAGE_VELOCITY3D_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>

namespace ds_sensor_msgs
{
template <class ContainerAllocator>
struct Velocity3D_
{
  typedef Velocity3D_<ContainerAllocator> Type;

  Velocity3D_()
    : header()
    , ds_header()
    , count(0)
    , analog_input1(0)
    , analog_input2(0)
    , pressure(0.0)
    , vel()
    , amp()
    , corr()  {
      vel.assign(0.0);

      amp.assign(0);

      corr.assign(0);
  }
  Velocity3D_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , count(0)
    , analog_input1(0)
    , analog_input2(0)
    , pressure(0.0)
    , vel()
    , amp()
    , corr()  {
  (void)_alloc;
      vel.assign(0.0);

      amp.assign(0);

      corr.assign(0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef uint8_t _count_type;
  _count_type count;

   typedef uint32_t _analog_input1_type;
  _analog_input1_type analog_input1;

   typedef uint32_t _analog_input2_type;
  _analog_input2_type analog_input2;

   typedef double _pressure_type;
  _pressure_type pressure;

   typedef boost::array<double, 3>  _vel_type;
  _vel_type vel;

   typedef boost::array<int8_t, 3>  _amp_type;
  _amp_type amp;

   typedef boost::array<int8_t, 3>  _corr_type;
  _corr_type corr;





  typedef boost::shared_ptr< ::ds_sensor_msgs::Velocity3D_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_sensor_msgs::Velocity3D_<ContainerAllocator> const> ConstPtr;

}; // struct Velocity3D_

typedef ::ds_sensor_msgs::Velocity3D_<std::allocator<void> > Velocity3D;

typedef boost::shared_ptr< ::ds_sensor_msgs::Velocity3D > Velocity3DPtr;
typedef boost::shared_ptr< ::ds_sensor_msgs::Velocity3D const> Velocity3DConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_sensor_msgs::Velocity3D_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_sensor_msgs::Velocity3D_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_sensor_msgs::Velocity3D_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::Velocity3D_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.count == rhs.count &&
    lhs.analog_input1 == rhs.analog_input1 &&
    lhs.analog_input2 == rhs.analog_input2 &&
    lhs.pressure == rhs.pressure &&
    lhs.vel == rhs.vel &&
    lhs.amp == rhs.amp &&
    lhs.corr == rhs.corr;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_sensor_msgs::Velocity3D_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::Velocity3D_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_sensor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::Velocity3D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::Velocity3D_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::Velocity3D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::Velocity3D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::Velocity3D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::Velocity3D_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_sensor_msgs::Velocity3D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4c63be8ca998ac48085ee04ca018add3";
  }

  static const char* value(const ::ds_sensor_msgs::Velocity3D_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4c63be8ca998ac48ULL;
  static const uint64_t static_value2 = 0x085ee04ca018add3ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_sensor_msgs::Velocity3D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_sensor_msgs/Velocity3D";
  }

  static const char* value(const ::ds_sensor_msgs::Velocity3D_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_sensor_msgs::Velocity3D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"#####################################################################\n"
"# Raw data\n"
"\n"
"uint8 count\n"
"uint32 analog_input1\n"
"uint32 analog_input2\n"
"float64 pressure #dbar\n"
"float64[3] vel #m/s\n"
"int8[3] amp\n"
"int8[3] corr\n"
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
"MSG: ds_core_msgs/DsHeader\n"
"# This is half our standard header for ds_msgs; see\n"
"# HEADERS.md for details\n"
"\n"
"# This header should ALWAYS be paired with a std_msgs/Header\n"
"# and should ALWAYS reference HEADERS.md.  If you're looking at this\n"
"# file to add headers to a type, you probably want to copy/paste\n"
"# the following block:\n"
"#\n"
"#     # The standard 2-part DsHeader block\n"
"#     # This allows both a standard ROS header and DS-specific header blocks\n"
"#     # See HEADERS.md in ds_core_msgs for details\n"
"#     std_msgs/Header header\n"
"#     ds_core_msgs/DsHeader ds_header\n"
"#\n"
"\n"
"# Time data was received or sent out (i/o time)\n"
"time io_time\n"
"\n"
"# Sensor source UUID\n"
"uint8[16] source_uuid\n"
"\n"
;
  }

  static const char* value(const ::ds_sensor_msgs::Velocity3D_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_sensor_msgs::Velocity3D_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.count);
      stream.next(m.analog_input1);
      stream.next(m.analog_input2);
      stream.next(m.pressure);
      stream.next(m.vel);
      stream.next(m.amp);
      stream.next(m.corr);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Velocity3D_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_sensor_msgs::Velocity3D_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_sensor_msgs::Velocity3D_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "count: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.count);
    s << indent << "analog_input1: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.analog_input1);
    s << indent << "analog_input2: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.analog_input2);
    s << indent << "pressure: ";
    Printer<double>::stream(s, indent + "  ", v.pressure);
    s << indent << "vel[]" << std::endl;
    for (size_t i = 0; i < v.vel.size(); ++i)
    {
      s << indent << "  vel[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.vel[i]);
    }
    s << indent << "amp[]" << std::endl;
    for (size_t i = 0; i < v.amp.size(); ++i)
    {
      s << indent << "  amp[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.amp[i]);
    }
    s << indent << "corr[]" << std::endl;
    for (size_t i = 0; i < v.corr.size(); ++i)
    {
      s << indent << "  corr[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.corr[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_SENSOR_MSGS_MESSAGE_VELOCITY3D_H
