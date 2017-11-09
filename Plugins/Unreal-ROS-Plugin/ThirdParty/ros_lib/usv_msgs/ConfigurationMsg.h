#ifndef _ROS_usv_msgs_ConfigurationMsg_h
#define _ROS_usv_msgs_ConfigurationMsg_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "usv_msgs/USVConfiguration.h"
#include "usv_msgs/PlConfiguration.h"

namespace usv_msgs
{

  class ConfigurationMsg : public ros::Msg
  {
    public:
      typedef usv_msgs::USVConfiguration _usv_type;
      _usv_type usv;
      uint32_t payload_length;
      typedef usv_msgs::PlConfiguration _payload_type;
      _payload_type st_payload;
      _payload_type * payload;

    ConfigurationMsg():
      usv(),
      payload_length(0), payload(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->usv.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->payload_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->payload_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->payload_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->payload_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->payload_length);
      for( uint32_t i = 0; i < payload_length; i++){
      offset += this->payload[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->usv.deserialize(inbuffer + offset);
      uint32_t payload_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      payload_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      payload_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      payload_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->payload_length);
      if(payload_lengthT > payload_length)
        this->payload = (usv_msgs::PlConfiguration*)realloc(this->payload, payload_lengthT * sizeof(usv_msgs::PlConfiguration));
      payload_length = payload_lengthT;
      for( uint32_t i = 0; i < payload_length; i++){
      offset += this->st_payload.deserialize(inbuffer + offset);
        memcpy( &(this->payload[i]), &(this->st_payload), sizeof(usv_msgs::PlConfiguration));
      }
     return offset;
    }

    const char * getType(){ return "usv_msgs/ConfigurationMsg"; };
    const char * getMD5(){ return "7241d5ad7484a5a66026fd0f1715d9e3"; };

  };

}
#endif