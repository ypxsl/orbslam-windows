// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__TRANSFORM__STRUCT_HPP_
#define GEOMETRY_MSGS__MSG__TRANSFORM__STRUCT_HPP_

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
#include "geometry_msgs/msg/quaternion.hpp"  // rotation
#include "geometry_msgs/msg/vector3.hpp"  // translation

#ifndef _WIN32
# define DEPRECATED_geometry_msgs_msg_Transform __attribute__((deprecated))
#else
# define DEPRECATED_geometry_msgs_msg_Transform __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Transform_
{
  using Type = Transform_<ContainerAllocator>;

  Transform_()
  {
  }
  explicit Transform_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _translation_type =
      geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _translation_type translation;
  using _rotation_type =
      geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _rotation_type rotation;

  // setters for named parameter idiom
  Type * set__translation(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->translation = _arg;
    return this;
  }
  Type * set__rotation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->rotation = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      geometry_msgs::msg::Transform_<ContainerAllocator> *;
  using ConstRawPtr =
      const geometry_msgs::msg::Transform_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<geometry_msgs::msg::Transform_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<geometry_msgs::msg::Transform_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::Transform_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::Transform_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::Transform_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::Transform_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<geometry_msgs::msg::Transform_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<geometry_msgs::msg::Transform_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_geometry_msgs_msg_Transform
    std::shared_ptr<geometry_msgs::msg::Transform_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_geometry_msgs_msg_Transform
    std::shared_ptr<geometry_msgs::msg::Transform_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Transform_ & other) const
  {
    if (this->translation != other.translation) {
      return false;
    }
    if (this->rotation != other.rotation) {
      return false;
    }
    return true;
  }
  bool operator!=(const Transform_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Transform_

// alias to use template instance with default allocator
using Transform =
    geometry_msgs::msg::Transform_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__TRANSFORM__STRUCT_HPP_
