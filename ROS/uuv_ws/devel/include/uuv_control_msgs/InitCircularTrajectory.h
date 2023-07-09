// Generated by gencpp from file uuv_control_msgs/InitCircularTrajectory.msg
// DO NOT EDIT!


#ifndef UUV_CONTROL_MSGS_MESSAGE_INITCIRCULARTRAJECTORY_H
#define UUV_CONTROL_MSGS_MESSAGE_INITCIRCULARTRAJECTORY_H

#include <ros/service_traits.h>


#include <uuv_control_msgs/InitCircularTrajectoryRequest.h>
#include <uuv_control_msgs/InitCircularTrajectoryResponse.h>


namespace uuv_control_msgs
{

struct InitCircularTrajectory
{

typedef InitCircularTrajectoryRequest Request;
typedef InitCircularTrajectoryResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct InitCircularTrajectory
} // namespace uuv_control_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::uuv_control_msgs::InitCircularTrajectory > {
  static const char* value()
  {
    return "4e2b6d8506f8a3b1f6ffe498d85ccc39";
  }

  static const char* value(const ::uuv_control_msgs::InitCircularTrajectory&) { return value(); }
};

template<>
struct DataType< ::uuv_control_msgs::InitCircularTrajectory > {
  static const char* value()
  {
    return "uuv_control_msgs/InitCircularTrajectory";
  }

  static const char* value(const ::uuv_control_msgs::InitCircularTrajectory&) { return value(); }
};


// service_traits::MD5Sum< ::uuv_control_msgs::InitCircularTrajectoryRequest> should match
// service_traits::MD5Sum< ::uuv_control_msgs::InitCircularTrajectory >
template<>
struct MD5Sum< ::uuv_control_msgs::InitCircularTrajectoryRequest>
{
  static const char* value()
  {
    return MD5Sum< ::uuv_control_msgs::InitCircularTrajectory >::value();
  }
  static const char* value(const ::uuv_control_msgs::InitCircularTrajectoryRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::uuv_control_msgs::InitCircularTrajectoryRequest> should match
// service_traits::DataType< ::uuv_control_msgs::InitCircularTrajectory >
template<>
struct DataType< ::uuv_control_msgs::InitCircularTrajectoryRequest>
{
  static const char* value()
  {
    return DataType< ::uuv_control_msgs::InitCircularTrajectory >::value();
  }
  static const char* value(const ::uuv_control_msgs::InitCircularTrajectoryRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::uuv_control_msgs::InitCircularTrajectoryResponse> should match
// service_traits::MD5Sum< ::uuv_control_msgs::InitCircularTrajectory >
template<>
struct MD5Sum< ::uuv_control_msgs::InitCircularTrajectoryResponse>
{
  static const char* value()
  {
    return MD5Sum< ::uuv_control_msgs::InitCircularTrajectory >::value();
  }
  static const char* value(const ::uuv_control_msgs::InitCircularTrajectoryResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::uuv_control_msgs::InitCircularTrajectoryResponse> should match
// service_traits::DataType< ::uuv_control_msgs::InitCircularTrajectory >
template<>
struct DataType< ::uuv_control_msgs::InitCircularTrajectoryResponse>
{
  static const char* value()
  {
    return DataType< ::uuv_control_msgs::InitCircularTrajectory >::value();
  }
  static const char* value(const ::uuv_control_msgs::InitCircularTrajectoryResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UUV_CONTROL_MSGS_MESSAGE_INITCIRCULARTRAJECTORY_H
