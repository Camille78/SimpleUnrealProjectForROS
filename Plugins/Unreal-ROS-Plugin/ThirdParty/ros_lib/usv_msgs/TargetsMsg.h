#ifndef _ROS_usv_msgs_TargetsMsg_h
#define _ROS_usv_msgs_TargetsMsg_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "usv_msgs/Target.h"

namespace usv_msgs
{

  class TargetsMsg : public ros::Msg
  {
    public:
      uint32_t targets_length;
      typedef usv_msgs::Target _targets_type;
      _targets_type st_targets;
      _targets_type * targets;

    TargetsMsg():
      targets_length(0), targets(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->targets_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->targets_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->targets_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->targets_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->targets_length);
      for( uint32_t i = 0; i < targets_length; i++){
      offset += this->targets[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t targets_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      targets_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      targets_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      targets_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->targets_length);
      if(targets_lengthT > targets_length)
        this->targets = (usv_msgs::Target*)realloc(this->targets, targets_lengthT * sizeof(usv_msgs::Target));
      targets_length = targets_lengthT;
      for( uint32_t i = 0; i < targets_length; i++){
      offset += this->st_targets.deserialize(inbuffer + offset);
        memcpy( &(this->targets[i]), &(this->st_targets), sizeof(usv_msgs::Target));
      }
     return offset;
    }

    const char * getType(){ return "usv_msgs/TargetsMsg"; };
    const char * getMD5(){ return "e4d48acc7f4c171cb47bcc5499c58aab"; };

  };

}
#endif