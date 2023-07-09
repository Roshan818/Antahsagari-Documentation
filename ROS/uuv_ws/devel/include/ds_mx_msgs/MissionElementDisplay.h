// Generated by gencpp from file ds_mx_msgs/MissionElementDisplay.msg
// DO NOT EDIT!


#ifndef DS_MX_MSGS_MESSAGE_MISSIONELEMENTDISPLAY_H
#define DS_MX_MSGS_MESSAGE_MISSIONELEMENTDISPLAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_mx_msgs
{
template <class ContainerAllocator>
struct MissionElementDisplay_
{
  typedef MissionElementDisplay_<ContainerAllocator> Type;

  MissionElementDisplay_()
    : role()
    , label()
    , wellknowntext()
    , task_uuid()  {
      task_uuid.assign(0);
  }
  MissionElementDisplay_(const ContainerAllocator& _alloc)
    : role(_alloc)
    , label(_alloc)
    , wellknowntext(_alloc)
    , task_uuid()  {
  (void)_alloc;
      task_uuid.assign(0);
  }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _role_type;
  _role_type role;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _label_type;
  _label_type label;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _wellknowntext_type;
  _wellknowntext_type wellknowntext;

   typedef boost::array<uint8_t, 16>  _task_uuid_type;
  _task_uuid_type task_uuid;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(ROLE_POINT_LAUNCH)
  #undef ROLE_POINT_LAUNCH
#endif
#if defined(_WIN32) && defined(ROLE_IDLE)
  #undef ROLE_IDLE
#endif
#if defined(_WIN32) && defined(ROLE_JOYSTICK)
  #undef ROLE_JOYSTICK
#endif
#if defined(_WIN32) && defined(ROLE_TRACKLINE)
  #undef ROLE_TRACKLINE
#endif
#if defined(_WIN32) && defined(ROLE_TRACKLINE_CONNECTING)
  #undef ROLE_TRACKLINE_CONNECTING
#endif
#if defined(_WIN32) && defined(ROLE_TRACKLINE_COMPLETED)
  #undef ROLE_TRACKLINE_COMPLETED
#endif
#if defined(_WIN32) && defined(ROLE_TRACKLINE_CURRENT)
  #undef ROLE_TRACKLINE_CURRENT
#endif
#if defined(_WIN32) && defined(ROLE_OPERATING_AREA)
  #undef ROLE_OPERATING_AREA
#endif
#if defined(_WIN32) && defined(ROLE_GEOFENCE)
  #undef ROLE_GEOFENCE
#endif
#if defined(_WIN32) && defined(ROLE_LOITER)
  #undef ROLE_LOITER
#endif
#if defined(_WIN32) && defined(ROLE_MANUAL)
  #undef ROLE_MANUAL
#endif


  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROLE_POINT_LAUNCH;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROLE_IDLE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROLE_JOYSTICK;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROLE_TRACKLINE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROLE_TRACKLINE_CONNECTING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROLE_TRACKLINE_COMPLETED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROLE_TRACKLINE_CURRENT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROLE_OPERATING_AREA;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROLE_GEOFENCE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROLE_LOITER;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROLE_MANUAL;

  typedef boost::shared_ptr< ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator> const> ConstPtr;

}; // struct MissionElementDisplay_

typedef ::ds_mx_msgs::MissionElementDisplay_<std::allocator<void> > MissionElementDisplay;

typedef boost::shared_ptr< ::ds_mx_msgs::MissionElementDisplay > MissionElementDisplayPtr;
typedef boost::shared_ptr< ::ds_mx_msgs::MissionElementDisplay const> MissionElementDisplayConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MissionElementDisplay_<ContainerAllocator>::ROLE_POINT_LAUNCH =
        
          "\"launch\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MissionElementDisplay_<ContainerAllocator>::ROLE_IDLE =
        
          "\"idle\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MissionElementDisplay_<ContainerAllocator>::ROLE_JOYSTICK =
        
          "\"joystick\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MissionElementDisplay_<ContainerAllocator>::ROLE_TRACKLINE =
        
          "\"trackline\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MissionElementDisplay_<ContainerAllocator>::ROLE_TRACKLINE_CONNECTING =
        
          "\"connecting_trackline\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MissionElementDisplay_<ContainerAllocator>::ROLE_TRACKLINE_COMPLETED =
        
          "\"completed_trackline\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MissionElementDisplay_<ContainerAllocator>::ROLE_TRACKLINE_CURRENT =
        
          "\"current_trackline\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MissionElementDisplay_<ContainerAllocator>::ROLE_OPERATING_AREA =
        
          "\"operating_area\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MissionElementDisplay_<ContainerAllocator>::ROLE_GEOFENCE =
        
          "\"geofence\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MissionElementDisplay_<ContainerAllocator>::ROLE_LOITER =
        
          "\"loiter\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MissionElementDisplay_<ContainerAllocator>::ROLE_MANUAL =
        
          "\"manual\""
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator1> & lhs, const ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator2> & rhs)
{
  return lhs.role == rhs.role &&
    lhs.label == rhs.label &&
    lhs.wellknowntext == rhs.wellknowntext &&
    lhs.task_uuid == rhs.task_uuid;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator1> & lhs, const ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_mx_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator> >
{
  static const char* value()
  {
    return "da8e31dda28ccbf8f8bad7fd3163f909";
  }

  static const char* value(const ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xda8e31dda28ccbf8ULL;
  static const uint64_t static_value2 = 0xf8bad7fd3163f909ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_mx_msgs/MissionElementDisplay";
  }

  static const char* value(const ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This includes instructions on how to draw a single mission element\n"
"string role\n"
"string label         # An annotation label to add; generally blank\n"
"string wellknowntext # Well-known text, ALWAYS in lat/lon;\n"
"                     # see https://en.wikipedia.org/wiki/Well-known_text_representation_of_geometry\n"
"                     # Currently, only Point, LineString, and Polygon are supported\n"
"uint8[16] task_uuid\n"
"\n"
"# Numbers are assigned somewhat randomly\n"
"string ROLE_POINT_LAUNCH=\"launch\"\n"
"string ROLE_IDLE=\"idle\"\n"
"string ROLE_JOYSTICK=\"joystick\"\n"
"\n"
"string ROLE_TRACKLINE=\"trackline\"\n"
"string ROLE_TRACKLINE_CONNECTING=\"connecting_trackline\"\n"
"string ROLE_TRACKLINE_COMPLETED=\"completed_trackline\"\n"
"string ROLE_TRACKLINE_CURRENT=\"current_trackline\"\n"
"\n"
"string ROLE_OPERATING_AREA=\"operating_area\"\n"
"\n"
"string ROLE_GEOFENCE=\"geofence\"\n"
"string ROLE_LOITER=\"loiter\"\n"
"string ROLE_MANUAL=\"manual\"\n"
;
  }

  static const char* value(const ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.role);
      stream.next(m.label);
      stream.next(m.wellknowntext);
      stream.next(m.task_uuid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MissionElementDisplay_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_mx_msgs::MissionElementDisplay_<ContainerAllocator>& v)
  {
    s << indent << "role: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.role);
    s << indent << "label: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.label);
    s << indent << "wellknowntext: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.wellknowntext);
    s << indent << "task_uuid[]" << std::endl;
    for (size_t i = 0; i < v.task_uuid.size(); ++i)
    {
      s << indent << "  task_uuid[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.task_uuid[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_MX_MSGS_MESSAGE_MISSIONELEMENTDISPLAY_H
