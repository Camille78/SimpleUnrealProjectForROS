#ifndef _ROS_usv_msgs_SubSysId_h
#define _ROS_usv_msgs_SubSysId_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace usv_msgs
{

  class SubSysId : public ros::Msg
  {
    public:
      typedef int16_t _systemId_type;
      _systemId_type systemId;
      typedef int16_t _payloadId_type;
      _payloadId_type payloadId;
      typedef int32_t _componentId_type;
      _componentId_type componentId;

    SubSysId():
      systemId(0),
      payloadId(0),
      componentId(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_systemId;
      u_systemId.real = this->systemId;
      *(outbuffer + offset + 0) = (u_systemId.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_systemId.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->systemId);
      union {
        int16_t real;
        uint16_t base;
      } u_payloadId;
      u_payloadId.real = this->payloadId;
      *(outbuffer + offset + 0) = (u_payloadId.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_payloadId.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->payloadId);
      union {
        int32_t real;
        uint32_t base;
      } u_componentId;
      u_componentId.real = this->componentId;
      *(outbuffer + offset + 0) = (u_componentId.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_componentId.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_componentId.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_componentId.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->componentId);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_systemId;
      u_systemId.base = 0;
      u_systemId.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_systemId.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->systemId = u_systemId.real;
      offset += sizeof(this->systemId);
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
        int32_t real;
        uint32_t base;
      } u_componentId;
      u_componentId.base = 0;
      u_componentId.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_componentId.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_componentId.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_componentId.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->componentId = u_componentId.real;
      offset += sizeof(this->componentId);
     return offset;
    }

    const char * getType(){ return "usv_msgs/SubSysId"; };
    const char * getMD5(){ return "425adb508d0fc48c8ae7a6518d6a3a76"; };

  };

}
#endif