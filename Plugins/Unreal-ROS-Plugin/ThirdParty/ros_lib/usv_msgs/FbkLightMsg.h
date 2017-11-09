#ifndef _ROS_usv_msgs_FbkLightMsg_h
#define _ROS_usv_msgs_FbkLightMsg_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "usv_msgs/FbkPanTilt.h"

namespace usv_msgs
{

  class FbkLightMsg : public ros::Msg
  {
    public:
      typedef int16_t _feedback_type;
      _feedback_type feedback;
      typedef usv_msgs::FbkPanTilt _pantilt_type;
      _pantilt_type pantilt;
      typedef int16_t _light_type;
      _light_type light;

    FbkLightMsg():
      feedback(0),
      pantilt(),
      light(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_feedback;
      u_feedback.real = this->feedback;
      *(outbuffer + offset + 0) = (u_feedback.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_feedback.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->feedback);
      offset += this->pantilt.serialize(outbuffer + offset);
      union {
        int16_t real;
        uint16_t base;
      } u_light;
      u_light.real = this->light;
      *(outbuffer + offset + 0) = (u_light.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_light.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->light);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_feedback;
      u_feedback.base = 0;
      u_feedback.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_feedback.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->feedback = u_feedback.real;
      offset += sizeof(this->feedback);
      offset += this->pantilt.deserialize(inbuffer + offset);
      union {
        int16_t real;
        uint16_t base;
      } u_light;
      u_light.base = 0;
      u_light.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_light.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->light = u_light.real;
      offset += sizeof(this->light);
     return offset;
    }

    const char * getType(){ return "usv_msgs/FbkLightMsg"; };
    const char * getMD5(){ return "5869b5112e93bc308a8de39c8f755050"; };

  };

}
#endif