// Generated by gencpp from file ds_sensor_msgs/VectorMagneticField.msg
// DO NOT EDIT!


#ifndef DS_SENSOR_MSGS_MESSAGE_VECTORMAGNETICFIELD_H
#define DS_SENSOR_MSGS_MESSAGE_VECTORMAGNETICFIELD_H


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
struct VectorMagneticField_
{
  typedef VectorMagneticField_<ContainerAllocator> Type;

  VectorMagneticField_()
    : header()
    , ds_header()
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , field_covar()
    , temperature(0.0)
    , temperature_covar(0.0)  {
      field_covar.assign(0.0);
  }
  VectorMagneticField_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , field_covar()
    , temperature(0.0)
    , temperature_covar(0.0)  {
  (void)_alloc;
      field_covar.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef boost::array<double, 9>  _field_covar_type;
  _field_covar_type field_covar;

   typedef double _temperature_type;
  _temperature_type temperature;

   typedef double _temperature_covar_type;
  _temperature_covar_type temperature_covar;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NO_VECTOR_MAGNETIC_FIELD_DATA)
  #undef NO_VECTOR_MAGNETIC_FIELD_DATA
#endif


  static const double NO_VECTOR_MAGNETIC_FIELD_DATA;

  typedef boost::shared_ptr< ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator> const> ConstPtr;

}; // struct VectorMagneticField_

typedef ::ds_sensor_msgs::VectorMagneticField_<std::allocator<void> > VectorMagneticField;

typedef boost::shared_ptr< ::ds_sensor_msgs::VectorMagneticField > VectorMagneticFieldPtr;
typedef boost::shared_ptr< ::ds_sensor_msgs::VectorMagneticField const> VectorMagneticFieldConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const double
      VectorMagneticField_<ContainerAllocator>::NO_VECTOR_MAGNETIC_FIELD_DATA =
        
          -9999.0
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.field_covar == rhs.field_covar &&
    lhs.temperature == rhs.temperature &&
    lhs.temperature_covar == rhs.temperature_covar;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_sensor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dd5a03ceb4751d17fdb1d6f090a6e913";
  }

  static const char* value(const ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdd5a03ceb4751d17ULL;
  static const uint64_t static_value2 = 0xfdb1d6f090a6e913ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_sensor_msgs/VectorMagneticField";
  }

  static const char* value(const ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 NO_VECTOR_MAGNETIC_FIELD_DATA=-9999.0\n"
"\n"
"# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"# All magnetic field values are in nT\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"# Covariance matrix for magnetic field measurements in row-major order\n"
"float64[9] field_covar\n"
"\n"
"# Temperature in C (usually nearby the magnetometer sensor, inside housing)\n"
"float64 temperature\n"
"float64 temperature_covar\n"
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

  static const char* value(const ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.field_covar);
      stream.next(m.temperature);
      stream.next(m.temperature_covar);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VectorMagneticField_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_sensor_msgs::VectorMagneticField_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "field_covar[]" << std::endl;
    for (size_t i = 0; i < v.field_covar.size(); ++i)
    {
      s << indent << "  field_covar[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.field_covar[i]);
    }
    s << indent << "temperature: ";
    Printer<double>::stream(s, indent + "  ", v.temperature);
    s << indent << "temperature_covar: ";
    Printer<double>::stream(s, indent + "  ", v.temperature_covar);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_SENSOR_MSGS_MESSAGE_VECTORMAGNETICFIELD_H
