#ifndef _ROS_usv_msgs_FbkPanTilt_h
#define _ROS_usv_msgs_FbkPanTilt_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "usv_msgs/CmdPanTilt.h"

namespace usv_msgs
{

  class FbkPanTilt : public ros::Msg
  {
    public:
      typedef usv_msgs::CmdPanTilt _pantiltCmd_type;
      _pantiltCmd_type pantiltCmd;
      typedef float _panPos_type;
      _panPos_type panPos;
      typedef float _tiltPos_type;
      _tiltPos_type tiltPos;
      typedef bool _panLimit_type;
      _panLimit_type panLimit;
      typedef bool _tiltLimit_type;
      _tiltLimit_type tiltLimit;
      typedef bool _trackingOk_type;
      _trackingOk_type trackingOk;

    FbkPanTilt():
      pantiltCmd(),
      panPos(0),
      tiltPos(0),
      panLimit(0),
      tiltLimit(0),
      trackingOk(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->pantiltCmd.serialize(outbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_panPos;
      u_panPos.real = this->panPos;
      *(outbuffer + offset + 0) = (u_panPos.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_panPos.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_panPos.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_panPos.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->panPos);
      union {
        float real;
        uint32_t base;
      } u_tiltPos;
      u_tiltPos.real = this->tiltPos;
      *(outbuffer + offset + 0) = (u_tiltPos.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tiltPos.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tiltPos.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tiltPos.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->tiltPos);
      union {
        bool real;
        uint8_t base;
      } u_panLimit;
      u_panLimit.real = this->panLimit;
      *(outbuffer + offset + 0) = (u_panLimit.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->panLimit);
      union {
        bool real;
        uint8_t base;
      } u_tiltLimit;
      u_tiltLimit.real = this->tiltLimit;
      *(outbuffer + offset + 0) = (u_tiltLimit.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->tiltLimit);
      union {
        bool real;
        uint8_t base;
      } u_trackingOk;
      u_trackingOk.real = this->trackingOk;
      *(outbuffer + offset + 0) = (u_trackingOk.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->trackingOk);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->pantiltCmd.deserialize(inbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_panPos;
      u_panPos.base = 0;
      u_panPos.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_panPos.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_panPos.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_panPos.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->panPos = u_panPos.real;
      offset += sizeof(this->panPos);
      union {
        float real;
        uint32_t base;
      } u_tiltPos;
      u_tiltPos.base = 0;
      u_tiltPos.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_tiltPos.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_tiltPos.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_tiltPos.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->tiltPos = u_tiltPos.real;
      offset += sizeof(this->tiltPos);
      union {
        bool real;
        uint8_t base;
      } u_panLimit;
      u_panLimit.base = 0;
      u_panLimit.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->panLimit = u_panLimit.real;
      offset += sizeof(this->panLimit);
      union {
        bool real;
        uint8_t base;
      } u_tiltLimit;
      u_tiltLimit.base = 0;
      u_tiltLimit.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->tiltLimit = u_tiltLimit.real;
      offset += sizeof(this->tiltLimit);
      union {
        bool real;
        uint8_t base;
      } u_trackingOk;
      u_trackingOk.base = 0;
      u_trackingOk.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->trackingOk = u_trackingOk.real;
      offset += sizeof(this->trackingOk);
     return offset;
    }

    const char * getType(){ return "usv_msgs/FbkPanTilt"; };
    const char * getMD5(){ return "006b1d026edb5a69bd3cbf8b7ec450eb"; };

  };

}
#endif