// Generated by gencpp from file semantic_planning_msgs/ObjectDetectionsList.msg
// DO NOT EDIT!


#ifndef SEMANTIC_PLANNING_MSGS_MESSAGE_OBJECTDETECTIONSLIST_H
#define SEMANTIC_PLANNING_MSGS_MESSAGE_OBJECTDETECTIONSLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <semantic_planning_msgs/ObjectDetection.h>

namespace semantic_planning_msgs
{
template <class ContainerAllocator>
struct ObjectDetectionsList_
{
  typedef ObjectDetectionsList_<ContainerAllocator> Type;

  ObjectDetectionsList_()
    : header()
    , objects()  {
    }
  ObjectDetectionsList_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , objects(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::semantic_planning_msgs::ObjectDetection_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::semantic_planning_msgs::ObjectDetection_<ContainerAllocator> >::other >  _objects_type;
  _objects_type objects;





  typedef boost::shared_ptr< ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectDetectionsList_

typedef ::semantic_planning_msgs::ObjectDetectionsList_<std::allocator<void> > ObjectDetectionsList;

typedef boost::shared_ptr< ::semantic_planning_msgs::ObjectDetectionsList > ObjectDetectionsListPtr;
typedef boost::shared_ptr< ::semantic_planning_msgs::ObjectDetectionsList const> ObjectDetectionsListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace semantic_planning_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'semantic_planning_msgs': ['/code/software/ros_workspace/semantic_planning_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "969113d838edbc397dd4821909723f8f";
  }

  static const char* value(const ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x969113d838edbc39ULL;
  static const uint64_t static_value2 = 0x7dd4821909723f8fULL;
};

template<class ContainerAllocator>
struct DataType< ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "semantic_planning_msgs/ObjectDetectionsList";
  }

  static const char* value(const ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# message header\n\
Header header\n\
\n\
# object detections\n\
ObjectDetection[] objects\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: semantic_planning_msgs/ObjectDetection\n\
# message header\n\
Header header\n\
\n\
# unique object ID. This must be consistent across non consecutive observations\n\
uint16 id\n\
\n\
# 3D position of the object\n\
geometry_msgs/Point position\n\
\n\
# orientation of the object. Fields are [x,y,z,w]\n\
geometry_msgs/Quaternion orientation\n\
# indicate whether the orientation is provided\n\
bool has_orientation\n\
\n\
# object class. Accepts value from the object classes enum below\n\
uint8 class\n\
\n\
# ENUM: object classes\n\
uint8 UNKNOWN=0\n\
uint8 PERSON=1\n\
uint8 BICYCLE=2\n\
uint8 CAR=3\n\
uint8 MOTORBIKE=4\n\
uint8 AEROPLANE=5\n\
uint8 BUS=6\n\
uint8 TRAIN=7\n\
uint8 TRUCK=8\n\
uint8 BOAT=9\n\
uint8 TRAFFIC_LIGHT=10\n\
uint8 FIRE_HYDRANT=11\n\
uint8 STOP_SIGN=12\n\
uint8 PARKING_METER=13\n\
uint8 BENCH=14\n\
uint8 BIRD=15\n\
uint8 CAT=16\n\
uint8 DOG=17\n\
uint8 HORSE=18\n\
uint8 SHEEP=19\n\
uint8 COW=20\n\
uint8 ELEPHANT=21\n\
uint8 BEAR=22\n\
uint8 ZEBRA=23\n\
uint8 GIRAFFE=24\n\
uint8 BACKPACK=25\n\
uint8 UMBRELLA=26\n\
uint8 HANDBAG=27\n\
uint8 TIE=28\n\
uint8 SUITCASE=29\n\
uint8 FRISBEE=30\n\
uint8 SKIS=31\n\
uint8 SNOWBOARD=32\n\
uint8 SPORTS_BALL=33\n\
uint8 KITE=34\n\
uint8 BASEBALL_BAT=35\n\
uint8 BASEBALL_GLOVE=36\n\
uint8 SKATEBOARD=37\n\
uint8 SURFBOARD=38\n\
uint8 TENNIS_RACKET=39\n\
uint8 BOTTLE=40\n\
uint8 WINE_GLASS=41\n\
uint8 CUP=42\n\
uint8 FORK=43\n\
uint8 KNIFE=44\n\
uint8 SPOON=45\n\
uint8 BOWL=46\n\
uint8 BANANA=47\n\
uint8 APPLE=48\n\
uint8 SANDWICH=49\n\
uint8 ORANGE=50\n\
uint8 BROCCOLI=51\n\
uint8 CARROT=52\n\
uint8 HOT_DOG=53\n\
uint8 PIZZA=54\n\
uint8 DONUT=55\n\
uint8 CAKE=56\n\
uint8 CHAIR=57\n\
uint8 SOFA=58\n\
uint8 POTTEDPLANT=59\n\
uint8 BED=60\n\
uint8 DININGTABLE=61\n\
uint8 TOILET=62\n\
uint8 TVMONITOR=63\n\
uint8 LAPTOP=64\n\
uint8 MOUSE=65\n\
uint8 REMOTE=66\n\
uint8 KEYBOARD=67\n\
uint8 CELL_PHONE=68\n\
uint8 MICROWAVE=69\n\
uint8 OVEN=70\n\
uint8 TOASTER=71\n\
uint8 SINK=72\n\
uint8 REFRIGERATOR=73\n\
uint8 BOOK=74\n\
uint8 CLOCK=75\n\
uint8 VASE=76\n\
uint8 SCISSORS=77\n\
uint8 TEDDY_BEAR=78\n\
uint8 HAIR_DRIER=79\n\
uint8 TOOTHBRUSH=80\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.objects);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObjectDetectionsList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::semantic_planning_msgs::ObjectDetectionsList_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "objects[]" << std::endl;
    for (size_t i = 0; i < v.objects.size(); ++i)
    {
      s << indent << "  objects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::semantic_planning_msgs::ObjectDetection_<ContainerAllocator> >::stream(s, indent + "    ", v.objects[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEMANTIC_PLANNING_MSGS_MESSAGE_OBJECTDETECTIONSLIST_H
