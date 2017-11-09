#ifndef _ROS_usv_msgs_FbkModeTK_h
#define _ROS_usv_msgs_FbkModeTK_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "usv_msgs/ModeState.h"
#include "usv_msgs/CmdModeTK.h"

namespace usv_msgs
{

  class FbkModeTK : public ros::Msg
  {
    public:
      typedef int16_t _droneID_type;
      _droneID_type droneID;
      typedef usv_msgs::ModeState _modeState_type;
      _modeState_type modeState;
      typedef usv_msgs::CmdModeTK _modeCmd_type;
      _modeCmd_type modeCmd;
      typedef float _posDev_type;
      _posDev_type posDev;
      typedef float _spdDev_type;
      _spdDev_type spdDev;
      typedef float _timeToEOT_type;
      _timeToEOT_type timeToEOT;
      typedef float _timeToWOL_type;
      _timeToWOL_type timeToWOL;

    FbkModeTK():
      droneID(0),
      modeState(),
      modeCmd(),
      posDev(0),
      spdDev(0),
      timeToEOT(0),
      timeToWOL(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_droneID;
      u_droneID.real = this->droneID;
      *(outbuffer + offset + 0) = (u_droneID.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_droneID.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->droneID);
      offset += this->modeState.serialize(outbuffer + offset);
      offset += this->modeCmd.serialize(outbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_posDev;
      u_posDev.real = this->posDev;
      *(outbuffer + offset + 0) = (u_posDev.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_posDev.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_posDev.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_posDev.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->posDev);
      union {
        float real;
        uint32_t base;
      } u_spdDev;
      u_spdDev.real = this->spdDev;
      *(outbuffer + offset + 0) = (u_spdDev.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_spdDev.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_spdDev.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_spdDev.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->spdDev);
      union {
        float real;
        uint32_t base;
      } u_timeToEOT;
      u_timeToEOT.real = this->timeToEOT;
      *(outbuffer + offset + 0) = (u_timeToEOT.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_timeToEOT.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_timeToEOT.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_timeToEOT.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->timeToEOT);
      union {
        float real;
        uint32_t base;
      } u_timeToWOL;
      u_timeToWOL.real = this->timeToWOL;
      *(outbuffer + offset + 0) = (u_timeToWOL.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_timeToWOL.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_timeToWOL.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_timeToWOL.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->timeToWOL);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_droneID;
      u_droneID.base = 0;
      u_droneID.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_droneID.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->droneID = u_droneID.real;
      offset += sizeof(this->droneID);
      offset += this->modeState.deserialize(inbuffer + offset);
      offset += this->modeCmd.deserialize(inbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_posDev;
      u_posDev.base = 0;
      u_posDev.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_posDev.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_posDev.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_posDev.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->posDev = u_posDev.real;
      offset += sizeof(this->posDev);
      union {
        float real;
        uint32_t base;
      } u_spdDev;
      u_spdDev.base = 0;
      u_spdDev.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_spdDev.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_spdDev.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_spdDev.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->spdDev = u_spdDev.real;
      offset += sizeof(this->spdDev);
      union {
        float real;
        uint32_t base;
      } u_timeToEOT;
      u_timeToEOT.base = 0;
      u_timeToEOT.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_timeToEOT.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_timeToEOT.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_timeToEOT.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->timeToEOT = u_timeToEOT.real;
      offset += sizeof(this->timeToEOT);
      union {
        float real;
        uint32_t base;
      } u_timeToWOL;
      u_timeToWOL.base = 0;
      u_timeToWOL.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_timeToWOL.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_timeToWOL.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_timeToWOL.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->timeToWOL = u_timeToWOL.real;
      offset += sizeof(this->timeToWOL);
     return offset;
    }

    const char * getType(){ return "usv_msgs/FbkModeTK"; };
    const char * getMD5(){ return "fba03dcc8882d2544428bae3f10077f6"; };

  };

}
#endif