#ifndef _ROS_usv_msgs_CmdControlUSV_h
#define _ROS_usv_msgs_CmdControlUSV_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace usv_msgs
{

  class CmdControlUSV : public ros::Msg
  {
    public:
      typedef int16_t _requestControl_type;
      _requestControl_type requestControl;
      typedef int16_t _requestedUSV_type;
      _requestedUSV_type requestedUSV;
      typedef const char* _cmdMode_type;
      _cmdMode_type cmdMode;

    CmdControlUSV():
      requestControl(0),
      requestedUSV(0),
      cmdMode("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_requestControl;
      u_requestControl.real = this->requestControl;
      *(outbuffer + offset + 0) = (u_requestControl.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_requestControl.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->requestControl);
      union {
        int16_t real;
        uint16_t base;
      } u_requestedUSV;
      u_requestedUSV.real = this->requestedUSV;
      *(outbuffer + offset + 0) = (u_requestedUSV.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_requestedUSV.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->requestedUSV);
      uint32_t length_cmdMode = strlen(this->cmdMode);
      varToArr(outbuffer + offset, length_cmdMode);
      offset += 4;
      memcpy(outbuffer + offset, this->cmdMode, length_cmdMode);
      offset += length_cmdMode;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_requestControl;
      u_requestControl.base = 0;
      u_requestControl.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_requestControl.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->requestControl = u_requestControl.real;
      offset += sizeof(this->requestControl);
      union {
        int16_t real;
        uint16_t base;
      } u_requestedUSV;
      u_requestedUSV.base = 0;
      u_requestedUSV.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_requestedUSV.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->requestedUSV = u_requestedUSV.real;
      offset += sizeof(this->requestedUSV);
      uint32_t length_cmdMode;
      arrToVar(length_cmdMode, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_cmdMode; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_cmdMode-1]=0;
      this->cmdMode = (char *)(inbuffer + offset-1);
      offset += length_cmdMode;
     return offset;
    }

    const char * getType(){ return "usv_msgs/CmdControlUSV"; };
    const char * getMD5(){ return "3c16569a403302fde7ff1213dab805c2"; };

  };

}
#endif