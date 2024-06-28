// Generated by gencpp from file ur10_mover/PlannerService.msg
// DO NOT EDIT!


#ifndef UR10_MOVER_MESSAGE_PLANNERSERVICE_H
#define UR10_MOVER_MESSAGE_PLANNERSERVICE_H

#include <ros/service_traits.h>


#include <ur10_mover/PlannerServiceRequest.h>
#include <ur10_mover/PlannerServiceResponse.h>


namespace ur10_mover
{

struct PlannerService
{

typedef PlannerServiceRequest Request;
typedef PlannerServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PlannerService
} // namespace ur10_mover


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ur10_mover::PlannerService > {
  static const char* value()
  {
    return "a9d9e87f111d55827a268a07768a7199";
  }

  static const char* value(const ::ur10_mover::PlannerService&) { return value(); }
};

template<>
struct DataType< ::ur10_mover::PlannerService > {
  static const char* value()
  {
    return "ur10_mover/PlannerService";
  }

  static const char* value(const ::ur10_mover::PlannerService&) { return value(); }
};


// service_traits::MD5Sum< ::ur10_mover::PlannerServiceRequest> should match
// service_traits::MD5Sum< ::ur10_mover::PlannerService >
template<>
struct MD5Sum< ::ur10_mover::PlannerServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ur10_mover::PlannerService >::value();
  }
  static const char* value(const ::ur10_mover::PlannerServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ur10_mover::PlannerServiceRequest> should match
// service_traits::DataType< ::ur10_mover::PlannerService >
template<>
struct DataType< ::ur10_mover::PlannerServiceRequest>
{
  static const char* value()
  {
    return DataType< ::ur10_mover::PlannerService >::value();
  }
  static const char* value(const ::ur10_mover::PlannerServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ur10_mover::PlannerServiceResponse> should match
// service_traits::MD5Sum< ::ur10_mover::PlannerService >
template<>
struct MD5Sum< ::ur10_mover::PlannerServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ur10_mover::PlannerService >::value();
  }
  static const char* value(const ::ur10_mover::PlannerServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ur10_mover::PlannerServiceResponse> should match
// service_traits::DataType< ::ur10_mover::PlannerService >
template<>
struct DataType< ::ur10_mover::PlannerServiceResponse>
{
  static const char* value()
  {
    return DataType< ::ur10_mover::PlannerService >::value();
  }
  static const char* value(const ::ur10_mover::PlannerServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UR10_MOVER_MESSAGE_PLANNERSERVICE_H
