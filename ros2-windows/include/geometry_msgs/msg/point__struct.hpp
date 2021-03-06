// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__POINT__STRUCT_HPP_
#define GEOMETRY_MSGS__MSG__POINT__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED_geometry_msgs_msg_Point __attribute__((deprecated))
#else
# define DEPRECATED_geometry_msgs_msg_Point __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Point_
{
  using Type = Point_<ContainerAllocator>;

  Point_()
  {
  }
  explicit Point_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _x_type =
      double;
  _x_type x;
  using _y_type =
      double;
  _y_type y;
  using _z_type =
      double;
  _z_type z;

  // setters for named parameter idiom
  Type * set__x(
    const double & _arg)
  {
    this->x = _arg;
    return this;
  }
  Type * set__y(
    const double & _arg)
  {
    this->y = _arg;
    return this;
  }
  Type * set__z(
    const double & _arg)
  {
    this->z = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      geometry_msgs::msg::Point_<ContainerAllocator> *;
  using ConstRawPtr =
      const geometry_msgs::msg::Point_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<geometry_msgs::msg::Point_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<geometry_msgs::msg::Point_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::Point_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::Point_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::Point_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::Point_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<geometry_msgs::msg::Point_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<geometry_msgs::msg::Point_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_geometry_msgs_msg_Point
    std::shared_ptr<geometry_msgs::msg::Point_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_geometry_msgs_msg_Point
    std::shared_ptr<geometry_msgs::msg::Point_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Point_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Point_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Point_

// alias to use template instance with default allocator
using Point =
    geometry_msgs::msg::Point_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__POINT__STRUCT_HPP_
