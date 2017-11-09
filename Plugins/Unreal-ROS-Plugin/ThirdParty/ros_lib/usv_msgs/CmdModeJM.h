#ifndef _ROS_usv_msgs_CmdModeJM_h
#define _ROS_usv_msgs_CmdModeJM_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace usv_msgs
{

  class CmdModeJM : public ros::Msg
  {
    public:
      typedef float _propulsionCmd_type;
      _propulsionCmd_type propulsionCmd;
      typedef float _directionCmd_type;
      _directionCmd_type directionCmd;

    CmdModeJM():
      propulsionCmd(0),
      directionCmd(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_propulsionCmd;
      u_propulsionCmd.real = this->propulsionCmd;
      *(outbuffer + offset + 0) = (u_propulsionCmd.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_propulsionCmd.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_propulsionCmd.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_propulsionCmd.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->propulsionCmd);
      union {
        float real;
        uint32_t base;
      } u_directionCmd;
      u_directionCmd.real = this->directionCmd;
      *(outbuffer + offset + 0) = (u_directionCmd.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_directionCmd.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_directionCmd.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_directionCmd.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->directionCmd);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_propulsionCmd;
      u_propulsionCmd.base = 0;
      u_propulsionCmd.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_propulsionCmd.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_propulsionCmd.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_propulsionCmd.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->propulsionCmd = u_propulsionCmd.real;
      offset += sizeof(this->propulsionCmd);
      union {
        float real;
        uint32_t base;
      } u_directionCmd;
      u_directionCmd.base = 0;
      u_directionCmd.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_directionCmd.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_directionCmd.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_directionCmd.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->directionCmd = u_directionCmd.real;
      offset += sizeof(this->directionCmd);
     return offset;
    }

    const char * getType(){ return "usv_msgs/CmdModeJM"; };
    const char * getMD5(){ return "5398fa322983d5e4fc99bfebb36b6198"; };

  };

}
#endif