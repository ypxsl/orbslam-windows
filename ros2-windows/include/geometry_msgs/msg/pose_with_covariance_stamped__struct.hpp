// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__POSE_WITH_COVARIANCE_STAMPED__STRUCT_HPP_
#define GEOMETRY_MSGS__MSG__POSE_WITH_COVARIANCE_STAMPED__STRUCT_HPP_

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include "geometry_msgs/msg/pose_with_covariance.hpp"  // pose
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_geometry_msgs_msg_PoseWithCovarianceStamped __attribute__((deprecated))
#else
# define DEPRECATED_geometry_msgs_msg_PoseWithCovarianceStamped __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseWithCovarianceStamped_
{
  using Type = PoseWithCovarianceStamped_<ContainerAllocator>;

  PoseWithCovarianceStamped_()
  {
  }
  explicit PoseWithCovarianceStamped_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
      geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__pose(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator> *;
  using ConstRawPtr =
      const geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_geometry_msgs_msg_PoseWithCovarianceStamped
    std::shared_ptr<geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_geometry_msgs_msg_PoseWithCovarianceStamped
    std::shared_ptr<geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseWithCovarianceStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseWithCovarianceStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseWithCovarianceStamped_

// alias to use template instance with default allocator
using PoseWithCovarianceStamped =
    geometry_msgs::msg::PoseWithCovarianceStamped_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__POSE_WITH_COVARIANCE_STAMPED__STRUCT_HPP_
