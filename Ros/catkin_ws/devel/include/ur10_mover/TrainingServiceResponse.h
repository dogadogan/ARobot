// Generated by gencpp from file ur10_mover/TrainingServiceResponse.msg
// DO NOT EDIT!


#ifndef UR10_MOVER_MESSAGE_TRAININGSERVICERESPONSE_H
#define UR10_MOVER_MESSAGE_TRAININGSERVICERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur10_mover
{
template <class ContainerAllocator>
struct TrainingServiceResponse_
{
  typedef TrainingServiceResponse_<ContainerAllocator> Type;

  TrainingServiceResponse_()
    : output_msg()  {
    }
  TrainingServiceResponse_(const ContainerAllocator& _alloc)
    : output_msg(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _output_msg_type;
  _output_msg_type output_msg;





  typedef boost::shared_ptr< ::ur10_mover::TrainingServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur10_mover::TrainingServiceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TrainingServiceResponse_

typedef ::ur10_mover::TrainingServiceResponse_<std::allocator<void> > TrainingServiceResponse;

typedef boost::shared_ptr< ::ur10_mover::TrainingServiceResponse > TrainingServiceResponsePtr;
typedef boost::shared_ptr< ::ur10_mover::TrainingServiceResponse const> TrainingServiceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur10_mover::TrainingServiceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur10_mover::TrainingServiceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ur10_mover::TrainingServiceResponse_<ContainerAllocator1> & lhs, const ::ur10_mover::TrainingServiceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output_msg == rhs.output_msg;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ur10_mover::TrainingServiceResponse_<ContainerAllocator1> & lhs, const ::ur10_mover::TrainingServiceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ur10_mover

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ur10_mover::TrainingServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur10_mover::TrainingServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur10_mover::TrainingServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur10_mover::TrainingServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur10_mover::TrainingServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur10_mover::TrainingServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur10_mover::TrainingServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ef13bd7685401359f42466106b070713";
  }

  static const char* value(const ::ur10_mover::TrainingServiceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xef13bd7685401359ULL;
  static const uint64_t static_value2 = 0xf42466106b070713ULL;
};

template<class ContainerAllocator>
struct DataType< ::ur10_mover::TrainingServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur10_mover/TrainingServiceResponse";
  }

  static const char* value(const ::ur10_mover::TrainingServiceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur10_mover::TrainingServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string output_msg\n"
;
  }

  static const char* value(const ::ur10_mover::TrainingServiceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur10_mover::TrainingServiceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output_msg);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrainingServiceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur10_mover::TrainingServiceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur10_mover::TrainingServiceResponse_<ContainerAllocator>& v)
  {
    s << indent << "output_msg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.output_msg);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR10_MOVER_MESSAGE_TRAININGSERVICERESPONSE_H
