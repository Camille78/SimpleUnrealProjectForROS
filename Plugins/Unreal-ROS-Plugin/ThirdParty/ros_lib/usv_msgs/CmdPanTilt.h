#ifndef _ROS_usv_msgs_CmdPanTilt_h
#define _ROS_usv_msgs_CmdPanTilt_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace usv_msgs
{

  class CmdPanTilt : public ros::Msg
  {
    public:
      typedef int16_t _mode_type;
      _mode_type mode;

    CmdPanTilt():
      mode(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_mode;
      u_mode.real = this->mode;
      *(outbuffer + offset + 0) = (u_mode.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_mode.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->mode);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_mode;
      u_mode.base = 0;
      u_mode.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_mode.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->mode = u_mode.real;
      offset += sizeof(this->mode);
     return offset;
    }

    const char * getType(){ return "usv_msgs/CmdPanTilt"; };
    const char * getMD5(){ return "7dcb05a3287517692aa8c4ee83b4e18b"; };

  };

}
#endif