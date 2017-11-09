#ifndef _ROS_usv_msgs_FbkWaterMsg_h
#define _ROS_usv_msgs_FbkWaterMsg_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "usv_msgs/FbkPanTilt.h"

namespace usv_msgs
{

  class FbkWaterMsg : public ros::Msg
  {
    public:
      typedef int16_t _feeback_type;
      _feeback_type feeback;
      typedef usv_msgs::FbkPanTilt _pantilt_type;
      _pantilt_type pantilt;
      typedef bool _waterEnable_type;
      _waterEnable_type waterEnable;
      typedef uint16_t _water_type;
      _water_type water;

    FbkWaterMsg():
      feeback(0),
      pantilt(),
      waterEnable(0),
      water(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_feeback;
      u_feeback.real = this->feeback;
      *(outbuffer + offset + 0) = (u_feeback.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_feeback.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->feeback);
      offset += this->pantilt.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_waterEnable;
      u_waterEnable.real = this->waterEnable;
      *(outbuffer + offset + 0) = (u_waterEnable.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->waterEnable);
      *(outbuffer + offset + 0) = (this->water >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->water >> (8 * 1)) & 0xFF;
      offset += sizeof(this->water);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_feeback;
      u_feeback.base = 0;
      u_feeback.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_feeback.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->feeback = u_feeback.real;
      offset += sizeof(this->feeback);
      offset += this->pantilt.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_waterEnable;
      u_waterEnable.base = 0;
      u_waterEnable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->waterEnable = u_waterEnable.real;
      offset += sizeof(this->waterEnable);
      this->water =  ((uint16_t) (*(inbuffer + offset)));
      this->water |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->water);
     return offset;
    }

    const char * getType(){ return "usv_msgs/FbkWaterMsg"; };
    const char * getMD5(){ return "c03e4422c1887f526246835a7cb71e34"; };

  };

}
#endif