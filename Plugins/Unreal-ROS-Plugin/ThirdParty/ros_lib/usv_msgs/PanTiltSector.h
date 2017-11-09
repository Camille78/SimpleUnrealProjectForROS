#ifndef _ROS_usv_msgs_PanTiltSector_h
#define _ROS_usv_msgs_PanTiltSector_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace usv_msgs
{

  class PanTiltSector : public ros::Msg
  {
    public:
      typedef float _pan_min_type;
      _pan_min_type pan_min;
      typedef float _pan_max_type;
      _pan_max_type pan_max;
      typedef float _tilt_min_type;
      _tilt_min_type tilt_min;
      typedef float _tilt_max_type;
      _tilt_max_type tilt_max;

    PanTiltSector():
      pan_min(0),
      pan_max(0),
      tilt_min(0),
      tilt_max(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_pan_min;
      u_pan_min.real = this->pan_min;
      *(outbuffer + offset + 0) = (u_pan_min.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pan_min.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pan_min.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pan_min.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pan_min);
      union {
        float real;
        uint32_t base;
      } u_pan_max;
      u_pan_max.real = this->pan_max;
      *(outbuffer + offset + 0) = (u_pan_max.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pan_max.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pan_max.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pan_max.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pan_max);
      union {
        float real;
        uint32_t base;
      } u_tilt_min;
      u_tilt_min.real = this->tilt_min;
      *(outbuffer + offset + 0) = (u_tilt_min.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tilt_min.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tilt_min.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tilt_min.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->tilt_min);
      union {
        float real;
        uint32_t base;
      } u_tilt_max;
      u_tilt_max.real = this->tilt_max;
      *(outbuffer + offset + 0) = (u_tilt_max.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tilt_max.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tilt_max.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tilt_max.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->tilt_max);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_pan_min;
      u_pan_min.base = 0;
      u_pan_min.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pan_min.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pan_min.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pan_min.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pan_min = u_pan_min.real;
      offset += sizeof(this->pan_min);
      union {
        float real;
        uint32_t base;
      } u_pan_max;
      u_pan_max.base = 0;
      u_pan_max.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pan_max.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pan_max.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pan_max.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pan_max = u_pan_max.real;
      offset += sizeof(this->pan_max);
      union {
        float real;
        uint32_t base;
      } u_tilt_min;
      u_tilt_min.base = 0;
      u_tilt_min.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_tilt_min.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_tilt_min.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_tilt_min.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->tilt_min = u_tilt_min.real;
      offset += sizeof(this->tilt_min);
      union {
        float real;
        uint32_t base;
      } u_tilt_max;
      u_tilt_max.base = 0;
      u_tilt_max.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_tilt_max.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_tilt_max.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_tilt_max.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->tilt_max = u_tilt_max.real;
      offset += sizeof(this->tilt_max);
     return offset;
    }

    const char * getType(){ return "usv_msgs/PanTiltSector"; };
    const char * getMD5(){ return "cce8b9e27a513caedd44103ad0675ffe"; };

  };

}
#endif