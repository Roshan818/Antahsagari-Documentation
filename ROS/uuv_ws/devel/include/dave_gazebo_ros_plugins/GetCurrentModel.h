// Generated by gencpp from file dave_gazebo_ros_plugins/GetCurrentModel.msg
// DO NOT EDIT!


#ifndef DAVE_GAZEBO_ROS_PLUGINS_MESSAGE_GETCURRENTMODEL_H
#define DAVE_GAZEBO_ROS_PLUGINS_MESSAGE_GETCURRENTMODEL_H

#include <ros/service_traits.h>


#include <dave_gazebo_ros_plugins/GetCurrentModelRequest.h>
#include <dave_gazebo_ros_plugins/GetCurrentModelResponse.h>


namespace dave_gazebo_ros_plugins
{

struct GetCurrentModel
{

typedef GetCurrentModelRequest Request;
typedef GetCurrentModelResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetCurrentModel
} // namespace dave_gazebo_ros_plugins


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dave_gazebo_ros_plugins::GetCurrentModel > {
  static const char* value()
  {
    return "b8222571af4e4180b9b706d1e17ad7e1";
  }

  static const char* value(const ::dave_gazebo_ros_plugins::GetCurrentModel&) { return value(); }
};

template<>
struct DataType< ::dave_gazebo_ros_plugins::GetCurrentModel > {
  static const char* value()
  {
    return "dave_gazebo_ros_plugins/GetCurrentModel";
  }

  static const char* value(const ::dave_gazebo_ros_plugins::GetCurrentModel&) { return value(); }
};


// service_traits::MD5Sum< ::dave_gazebo_ros_plugins::GetCurrentModelRequest> should match
// service_traits::MD5Sum< ::dave_gazebo_ros_plugins::GetCurrentModel >
template<>
struct MD5Sum< ::dave_gazebo_ros_plugins::GetCurrentModelRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dave_gazebo_ros_plugins::GetCurrentModel >::value();
  }
  static const char* value(const ::dave_gazebo_ros_plugins::GetCurrentModelRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dave_gazebo_ros_plugins::GetCurrentModelRequest> should match
// service_traits::DataType< ::dave_gazebo_ros_plugins::GetCurrentModel >
template<>
struct DataType< ::dave_gazebo_ros_plugins::GetCurrentModelRequest>
{
  static const char* value()
  {
    return DataType< ::dave_gazebo_ros_plugins::GetCurrentModel >::value();
  }
  static const char* value(const ::dave_gazebo_ros_plugins::GetCurrentModelRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dave_gazebo_ros_plugins::GetCurrentModelResponse> should match
// service_traits::MD5Sum< ::dave_gazebo_ros_plugins::GetCurrentModel >
template<>
struct MD5Sum< ::dave_gazebo_ros_plugins::GetCurrentModelResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dave_gazebo_ros_plugins::GetCurrentModel >::value();
  }
  static const char* value(const ::dave_gazebo_ros_plugins::GetCurrentModelResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dave_gazebo_ros_plugins::GetCurrentModelResponse> should match
// service_traits::DataType< ::dave_gazebo_ros_plugins::GetCurrentModel >
template<>
struct DataType< ::dave_gazebo_ros_plugins::GetCurrentModelResponse>
{
  static const char* value()
  {
    return DataType< ::dave_gazebo_ros_plugins::GetCurrentModel >::value();
  }
  static const char* value(const ::dave_gazebo_ros_plugins::GetCurrentModelResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DAVE_GAZEBO_ROS_PLUGINS_MESSAGE_GETCURRENTMODEL_H
