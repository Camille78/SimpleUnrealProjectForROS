#ifndef _ROS_usv_msgs_CmdModeTK_h
#define _ROS_usv_msgs_CmdModeTK_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "usv_msgs/Waypoint.h"

namespace usv_msgs
{

  class CmdModeTK : public ros::Msg
  {
    public:
      uint32_t track_length;
      typedef usv_msgs::Waypoint _track_type;
      _track_type st_track;
      _track_type * track;

    CmdModeTK():
      track_length(0), track(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->track_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->track_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->track_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->track_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->track_length);
      for( uint32_t i = 0; i < track_length; i++){
      offset += this->track[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t track_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      track_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      track_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      track_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->track_length);
      if(track_lengthT > track_length)
        this->track = (usv_msgs::Waypoint*)realloc(this->track, track_lengthT * sizeof(usv_msgs::Waypoint));
      track_length = track_lengthT;
      for( uint32_t i = 0; i < track_length; i++){
      offset += this->st_track.deserialize(inbuffer + offset);
        memcpy( &(this->track[i]), &(this->st_track), sizeof(usv_msgs::Waypoint));
      }
     return offset;
    }

    const char * getType(){ return "usv_msgs/CmdModeTK"; };
    const char * getMD5(){ return "88530b95c8b3598a43195cce80286380"; };

  };

}
#endif