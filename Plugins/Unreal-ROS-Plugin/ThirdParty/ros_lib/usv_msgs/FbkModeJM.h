#ifndef _ROS_usv_msgs_FbkModeJM_h
#define _ROS_usv_msgs_FbkModeJM_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "usv_msgs/ModeState.h"
#include "usv_msgs/CmdModeJM.h"

namespace usv_msgs
{

  class FbkModeJM : public ros::Msg
  {
    public:
      typedef int16_t _droneId_type;
      _droneId_type droneId;
      typedef usv_msgs::ModeState _modeState_type;
      _modeState_type modeState;
      typedef usv_msgs::CmdModeJM _modeCmd_type;
      _modeCmd_type modeCmd;

    FbkModeJM():
      droneId(0),
      modeState(),
      modeCmd()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_droneId;
      u_droneId.real = this->droneId;
      *(outbuffer + offset + 0) = (u_droneId.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_droneId.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->droneId);
      offset += this->modeState.serialize(outbuffer + offset);
      offset += this->modeCmd.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_droneId;
      u_droneId.base = 0;
      u_droneId.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_droneId.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->droneId = u_droneId.real;
      offset += sizeof(this->droneId);
      offset += this->modeState.deserialize(inbuffer + offset);
      offset += this->modeCmd.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "usv_msgs/FbkModeJM"; };
    const char * getMD5(){ return "c657b42c62e833725622be0d0ab1bd74"; };

  };

}
#endif