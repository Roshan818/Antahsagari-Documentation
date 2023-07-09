// Generated by gencpp from file ds_sensor_msgs/UbloxSatellites.msg
// DO NOT EDIT!


#ifndef DS_SENSOR_MSGS_MESSAGE_UBLOXSATELLITES_H
#define DS_SENSOR_MSGS_MESSAGE_UBLOXSATELLITES_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>
#include <ds_sensor_msgs/UbloxSatellite.h>

namespace ds_sensor_msgs
{
template <class ContainerAllocator>
struct UbloxSatellites_
{
  typedef UbloxSatellites_<ContainerAllocator> Type;

  UbloxSatellites_()
    : header()
    , ds_header()
    , time_of_week(0)
    , sats()  {
    }
  UbloxSatellites_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , time_of_week(0)
    , sats(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef uint32_t _time_of_week_type;
  _time_of_week_type time_of_week;

   typedef std::vector< ::ds_sensor_msgs::UbloxSatellite_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::ds_sensor_msgs::UbloxSatellite_<ContainerAllocator> >> _sats_type;
  _sats_type sats;





  typedef boost::shared_ptr< ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator> const> ConstPtr;

}; // struct UbloxSatellites_

typedef ::ds_sensor_msgs::UbloxSatellites_<std::allocator<void> > UbloxSatellites;

typedef boost::shared_ptr< ::ds_sensor_msgs::UbloxSatellites > UbloxSatellitesPtr;
typedef boost::shared_ptr< ::ds_sensor_msgs::UbloxSatellites const> UbloxSatellitesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.time_of_week == rhs.time_of_week &&
    lhs.sats == rhs.sats;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_sensor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ea82da18f2e861682f67aae821fdd311";
  }

  static const char* value(const ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xea82da18f2e86168ULL;
  static const uint64_t static_value2 = 0x2f67aae821fdd311ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_sensor_msgs/UbloxSatellites";
  }

  static const char* value(const ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"# GPS time of this message\n"
"uint32 time_of_week\n"
"\n"
"UbloxSatellite[] sats\n"
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
"\n"
"================================================================================\n"
"MSG: ds_sensor_msgs/UbloxSatellite\n"
"# A string identifying which GNSS system is in use (e.g., GPS, BeiDou, GLONASS, etc)\n"
"string gnss_id\n"
"\n"
"# The ID of the specific satellite that broadcast the signal.  Includes\n"
"# a letter indicating the service.  Example: GPS satellite #4 would be G4.\n"
"# IDs:\n"
"# G: GPS (US system)\n"
"# S: SBAS (Satellite Based Augmentation System, so WAAS, EGNOS, SDCM, GAGAN, etc)\n"
"# E: Galileo (European system)\n"
"# B: BeiDou (Chinese system)\n"
"# Q: QZSS (Japanese SBAS that also transmits GPS-style timing signals)\n"
"# R: GLONASS (Russian system)\n"
"string sat_id\n"
"\n"
"# Carrier-to-noise-density ratio (dBHz)\n"
"float32 carrier_noise\n"
"\n"
"# Pseudorange residual, in meters\n"
"float32 pseudorange_residual\n"
"\n"
"# Satellite location, in degrees\n"
"float32 elevation\n"
"float32 azimuth\n"
"\n"
"# Quality indicator\n"
"uint8 quality_indicator\n"
"uint8 QUALITY_NOSIGNAL = 0\n"
"uint8 QUALITY_SEARCHING = 1\n"
"uint8 QUALITY_ACQUIRED = 2\n"
"uint8 QUALITY_UNUSABLE = 3\n"
"uint8 QUALITY_CODELOCKED = 4\n"
"uint8 QUALITY_CODECARRIERTIME_LOCKED_5 = 5\n"
"uint8 QUALITY_CODECARRIERTIME_LOCKED_6 = 6\n"
"uint8 QUALITY_CODECARRIERTIME_LOCKED_7 = 7\n"
"\n"
"# flags\n"
"uint8 health\n"
"uint8 HEALTH_UNKNOWN = 0\n"
"uint8 HEALTH_HEALTHY = 1\n"
"uint8 HEALTH_UNHEALTH = 2\n"
"\n"
"bool differential_available\n"
"bool pseudorange_smoothed\n"
"\n"
"uint8 oribt_source\n"
"uint8 ORBIT_SOURCE_NONE = 0\n"
"uint8 ORBIT_SOURCE_EPHEMERIS = 1\n"
"uint8 ORBIT_SOURCE_ALMANAC = 2\n"
"uint8 ORBIT_SOURCE_ASSISTNOW_OFFLINE = 3\n"
"uint8 ORBIT_SOURCE_ASSISTNOW_AUTONOMOUS = 4\n"
"uint8 ORBIT_SOURCE_OTHER5 = 5\n"
"uint8 ORBIT_SOURCE_OTHER6 = 6\n"
"uint8 ORBIT_SOURCE_OTHER7 = 7\n"
"\n"
"bool ephAvail\n"
"bool almAvail\n"
"bool anoAvail\n"
"bool aopAvail\n"
"bool sbasCorrUsed\n"
"bool rtcmCorrUsed\n"
"bool slasCorrUsed\n"
"bool pseudorange_corrections_applied\n"
"bool carrier_range_corrections_applied\n"
"bool doppler_corrections_applied\n"
;
  }

  static const char* value(const ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.time_of_week);
      stream.next(m.sats);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UbloxSatellites_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_sensor_msgs::UbloxSatellites_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "time_of_week: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.time_of_week);
    s << indent << "sats[]" << std::endl;
    for (size_t i = 0; i < v.sats.size(); ++i)
    {
      s << indent << "  sats[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ds_sensor_msgs::UbloxSatellite_<ContainerAllocator> >::stream(s, indent + "    ", v.sats[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_SENSOR_MSGS_MESSAGE_UBLOXSATELLITES_H
