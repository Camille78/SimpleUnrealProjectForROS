#ifndef _ROS_usv_msgs_FbkVideoMsg_h
#define _ROS_usv_msgs_FbkVideoMsg_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "usv_msgs/FbkPanTilt.h"

namespace usv_msgs
{

  class FbkVideoMsg : public ros::Msg
  {
    public:
      typedef int16_t _feedback_type;
      _feedback_type feedback;
      typedef usv_msgs::FbkPanTilt _pantilt_type;
      _pantilt_type pantilt;
      typedef int16_t _video_type;
      _video_type video;
      typedef int16_t _zoom_type;
      _zoom_type zoom;

    FbkVideoMsg():
      feedback(0),
      pantilt(),
      video(0),
      zoom(0)
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
      } u_video;
      u_video.real = this->video;
      *(outbuffer + offset + 0) = (u_video.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_video.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->video);
      union {
        int16_t real;
        uint16_t base;
      } u_zoom;
      u_zoom.real = this->zoom;
      *(outbuffer + offset + 0) = (u_zoom.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_zoom.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->zoom);
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
      } u_video;
      u_video.base = 0;
      u_video.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_video.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->video = u_video.real;
      offset += sizeof(this->video);
      union {
        int16_t real;
        uint16_t base;
      } u_zoom;
      u_zoom.base = 0;
      u_zoom.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_zoom.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->zoom = u_zoom.real;
      offset += sizeof(this->zoom);
     return offset;
    }

    const char * getType(){ return "usv_msgs/FbkVideoMsg"; };
    const char * getMD5(){ return "f80012a0b49edfce058f99d8bccde19e"; };

  };

}
#endif