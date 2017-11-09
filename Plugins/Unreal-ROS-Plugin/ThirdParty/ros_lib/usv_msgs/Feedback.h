#ifndef _ROS_usv_msgs_Feedback_h
#define _ROS_usv_msgs_Feedback_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace usv_msgs
{

  class Feedback : public ros::Msg
  {
    public:
      typedef int16_t _payloadId_type;
      _payloadId_type payloadId;
      typedef int16_t _componentId_type;
      _componentId_type componentId;
      typedef float _panDeg_type;
      _panDeg_type panDeg;
      typedef float _tiltDeg_type;
      _tiltDeg_type tiltDeg;
      typedef bool _isActive_type;
      _isActive_type isActive;

    Feedback():
      payloadId(0),
      componentId(0),
      panDeg(0),
      tiltDeg(0),
      isActive(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_payloadId;
      u_payloadId.real = this->payloadId;
      *(outbuffer + offset + 0) = (u_payloadId.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_payloadId.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->payloadId);
      union {
        int16_t real;
        uint16_t base;
      } u_componentId;
      u_componentId.real = this->componentId;
      *(outbuffer + offset + 0) = (u_componentId.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_componentId.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->componentId);
      union {
        float real;
        uint32_t base;
      } u_panDeg;
      u_panDeg.real = this->panDeg;
      *(outbuffer + offset + 0) = (u_panDeg.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_panDeg.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_panDeg.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_panDeg.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->panDeg);
      union {
        float real;
        uint32_t base;
      } u_tiltDeg;
      u_tiltDeg.real = this->tiltDeg;
      *(outbuffer + offset + 0) = (u_tiltDeg.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tiltDeg.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tiltDeg.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tiltDeg.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->tiltDeg);
      union {
        bool real;
        uint8_t base;
      } u_isActive;
      u_isActive.real = this->isActive;
      *(outbuffer + offset + 0) = (u_isActive.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->isActive);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_payloadId;
      u_payloadId.base = 0;
      u_payloadId.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_payloadId.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->payloadId = u_payloadId.real;
      offset += sizeof(this->payloadId);
      union {
        int16_t real;
        uint16_t base;
      } u_componentId;
      u_componentId.base = 0;
      u_componentId.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_componentId.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->componentId = u_componentId.real;
      offset += sizeof(this->componentId);
      union {
        float real;
        uint32_t base;
      } u_panDeg;
      u_panDeg.base = 0;
      u_panDeg.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_panDeg.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_panDeg.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_panDeg.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->panDeg = u_panDeg.real;
      offset += sizeof(this->panDeg);
      union {
        float real;
        uint32_t base;
      } u_tiltDeg;
      u_tiltDeg.base = 0;
      u_tiltDeg.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_tiltDeg.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_tiltDeg.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_tiltDeg.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->tiltDeg = u_tiltDeg.real;
      offset += sizeof(this->tiltDeg);
      union {
        bool real;
        uint8_t base;
      } u_isActive;
      u_isActive.base = 0;
      u_isActive.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->isActive = u_isActive.real;
      offset += sizeof(this->isActive);
     return offset;
    }

    const char * getType(){ return "usv_msgs/Feedback"; };
    const char * getMD5(){ return "aab5f69eac2c456a9e2e57068af25ddf"; };

  };

}
#endif