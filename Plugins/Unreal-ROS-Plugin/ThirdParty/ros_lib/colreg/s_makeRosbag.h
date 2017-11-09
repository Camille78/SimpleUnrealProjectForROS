#ifndef _ROS_SERVICE_s_makeRosbag_h
#define _ROS_SERVICE_s_makeRosbag_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace colreg
{

static const char S_MAKEROSBAG[] = "colreg/s_makeRosbag";

  class s_makeRosbagRequest : public ros::Msg
  {
    public:
      typedef const char* _rosbagName_type;
      _rosbagName_type rosbagName;

    s_makeRosbagRequest():
      rosbagName("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_rosbagName = strlen(this->rosbagName);
      varToArr(outbuffer + offset, length_rosbagName);
      offset += 4;
      memcpy(outbuffer + offset, this->rosbagName, length_rosbagName);
      offset += length_rosbagName;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_rosbagName;
      arrToVar(length_rosbagName, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_rosbagName; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_rosbagName-1]=0;
      this->rosbagName = (char *)(inbuffer + offset-1);
      offset += length_rosbagName;
     return offset;
    }

    const char * getType(){ return S_MAKEROSBAG; };
    const char * getMD5(){ return "29aa68eefadf5ef99fa19bb351b1abc0"; };

  };

  class s_makeRosbagResponse : public ros::Msg
  {
    public:

    s_makeRosbagResponse()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
     return offset;
    }

    const char * getType(){ return S_MAKEROSBAG; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class s_makeRosbag {
    public:
    typedef s_makeRosbagRequest Request;
    typedef s_makeRosbagResponse Response;
  };

}
#endif
