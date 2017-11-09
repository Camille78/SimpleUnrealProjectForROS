#ifndef _ROS_mdt_msgs_stampedCartTrackArray_h
#define _ROS_mdt_msgs_stampedCartTrackArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "mdt_msgs/stampedCartesianTrack.h"

namespace mdt_msgs
{

  class stampedCartTrackArray : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t vect_cart_track_length;
      typedef mdt_msgs::stampedCartesianTrack _vect_cart_track_type;
      _vect_cart_track_type st_vect_cart_track;
      _vect_cart_track_type * vect_cart_track;

    stampedCartTrackArray():
      header(),
      vect_cart_track_length(0), vect_cart_track(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->vect_cart_track_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->vect_cart_track_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->vect_cart_track_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->vect_cart_track_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->vect_cart_track_length);
      for( uint32_t i = 0; i < vect_cart_track_length; i++){
      offset += this->vect_cart_track[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t vect_cart_track_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      vect_cart_track_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      vect_cart_track_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      vect_cart_track_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->vect_cart_track_length);
      if(vect_cart_track_lengthT > vect_cart_track_length)
        this->vect_cart_track = (mdt_msgs::stampedCartesianTrack*)realloc(this->vect_cart_track, vect_cart_track_lengthT * sizeof(mdt_msgs::stampedCartesianTrack));
      vect_cart_track_length = vect_cart_track_lengthT;
      for( uint32_t i = 0; i < vect_cart_track_length; i++){
      offset += this->st_vect_cart_track.deserialize(inbuffer + offset);
        memcpy( &(this->vect_cart_track[i]), &(this->st_vect_cart_track), sizeof(mdt_msgs::stampedCartesianTrack));
      }
     return offset;
    }

    const char * getType(){ return "mdt_msgs/stampedCartTrackArray"; };
    const char * getMD5(){ return "49f603898ec7cca48840b54a21d8b560"; };

  };

}
#endif