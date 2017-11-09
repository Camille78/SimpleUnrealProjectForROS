#ifndef _ROS_usv_msgs_ModeState_h
#define _ROS_usv_msgs_ModeState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace usv_msgs
{

  class ModeState : public ros::Msg
  {
    public:
      typedef bool _active_type;
      _active_type active;
      typedef bool _available_type;
      _available_type available;
      typedef bool _perfFailure_type;
      _perfFailure_type perfFailure;
      typedef float _transition_type;
      _transition_type transition;

    ModeState():
      active(0),
      available(0),
      perfFailure(0),
      transition(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_active;
      u_active.real = this->active;
      *(outbuffer + offset + 0) = (u_active.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->active);
      union {
        bool real;
        uint8_t base;
      } u_available;
      u_available.real = this->available;
      *(outbuffer + offset + 0) = (u_available.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->available);
      union {
        bool real;
        uint8_t base;
      } u_perfFailure;
      u_perfFailure.real = this->perfFailure;
      *(outbuffer + offset + 0) = (u_perfFailure.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->perfFailure);
      union {
        float real;
        uint32_t base;
      } u_transition;
      u_transition.real = this->transition;
      *(outbuffer + offset + 0) = (u_transition.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_transition.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_transition.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_transition.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->transition);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_active;
      u_active.base = 0;
      u_active.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->active = u_active.real;
      offset += sizeof(this->active);
      union {
        bool real;
        uint8_t base;
      } u_available;
      u_available.base = 0;
      u_available.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->available = u_available.real;
      offset += sizeof(this->available);
      union {
        bool real;
        uint8_t base;
      } u_perfFailure;
      u_perfFailure.base = 0;
      u_perfFailure.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->perfFailure = u_perfFailure.real;
      offset += sizeof(this->perfFailure);
      union {
        float real;
        uint32_t base;
      } u_transition;
      u_transition.base = 0;
      u_transition.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_transition.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_transition.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_transition.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->transition = u_transition.real;
      offset += sizeof(this->transition);
     return offset;
    }

    const char * getType(){ return "usv_msgs/ModeState"; };
    const char * getMD5(){ return "3067eb9bc2c8d631a1e50effcc2aeb35"; };

  };

}
#endif