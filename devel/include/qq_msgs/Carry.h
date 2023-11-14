// Generated by gencpp from file qq_msgs/Carry.msg
// DO NOT EDIT!


#ifndef QQ_MSGS_MESSAGE_CARRY_H
#define QQ_MSGS_MESSAGE_CARRY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace qq_msgs
{
template <class ContainerAllocator>
struct Carry_
{
  typedef Carry_<ContainerAllocator> Type;

  Carry_()
    : grade()
    , star(0)
    , data()  {
    }
  Carry_(const ContainerAllocator& _alloc)
    : grade(_alloc)
    , star(0)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _grade_type;
  _grade_type grade;

   typedef int64_t _star_type;
  _star_type star;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::qq_msgs::Carry_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qq_msgs::Carry_<ContainerAllocator> const> ConstPtr;

}; // struct Carry_

typedef ::qq_msgs::Carry_<std::allocator<void> > Carry;

typedef boost::shared_ptr< ::qq_msgs::Carry > CarryPtr;
typedef boost::shared_ptr< ::qq_msgs::Carry const> CarryConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::qq_msgs::Carry_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::qq_msgs::Carry_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::qq_msgs::Carry_<ContainerAllocator1> & lhs, const ::qq_msgs::Carry_<ContainerAllocator2> & rhs)
{
  return lhs.grade == rhs.grade &&
    lhs.star == rhs.star &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::qq_msgs::Carry_<ContainerAllocator1> & lhs, const ::qq_msgs::Carry_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace qq_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::qq_msgs::Carry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::qq_msgs::Carry_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qq_msgs::Carry_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qq_msgs::Carry_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qq_msgs::Carry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qq_msgs::Carry_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::qq_msgs::Carry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "de2ab20ee92a64b24367da18405f9c78";
  }

  static const char* value(const ::qq_msgs::Carry_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xde2ab20ee92a64b2ULL;
  static const uint64_t static_value2 = 0x4367da18405f9c78ULL;
};

template<class ContainerAllocator>
struct DataType< ::qq_msgs::Carry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qq_msgs/Carry";
  }

  static const char* value(const ::qq_msgs::Carry_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::qq_msgs::Carry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string grade\n"
"int64 star\n"
"string data\n"
;
  }

  static const char* value(const ::qq_msgs::Carry_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::qq_msgs::Carry_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.grade);
      stream.next(m.star);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Carry_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qq_msgs::Carry_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::qq_msgs::Carry_<ContainerAllocator>& v)
  {
    s << indent << "grade: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.grade);
    s << indent << "star: ";
    Printer<int64_t>::stream(s, indent + "  ", v.star);
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QQ_MSGS_MESSAGE_CARRY_H
