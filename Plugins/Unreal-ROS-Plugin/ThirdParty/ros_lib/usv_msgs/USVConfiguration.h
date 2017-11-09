#ifndef _ROS_usv_msgs_USVConfiguration_h
#define _ROS_usv_msgs_USVConfiguration_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "usv_msgs/SubSysId.h"

namespace usv_msgs
{

  class USVConfiguration : public ros::Msg
  {
    public:
      typedef usv_msgs::SubSysId _subSys_type;
      _subSys_type subSys;
      typedef double _length_type;
      _length_type length;
      typedef double _width_type;
      _width_type width;
      typedef double _height_type;
      _height_type height;
      typedef double _max_speed_type;
      _max_speed_type max_speed;
      typedef double _cruising_range_type;
      _cruising_range_type cruising_range;
      typedef double _area_longitude_type;
      _area_longitude_type area_longitude;
      typedef double _area_latitude_type;
      _area_latitude_type area_latitude;
      typedef double _action_range_type;
      _action_range_type action_range;

    USVConfiguration():
      subSys(),
      length(0),
      width(0),
      height(0),
      max_speed(0),
      cruising_range(0),
      area_longitude(0),
      area_latitude(0),
      action_range(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->subSys.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_length;
      u_length.real = this->length;
      *(outbuffer + offset + 0) = (u_length.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_length.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_length.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_length.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_length.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_length.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_length.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_length.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->length);
      union {
        double real;
        uint64_t base;
      } u_width;
      u_width.real = this->width;
      *(outbuffer + offset + 0) = (u_width.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_width.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_width.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_width.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_width.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_width.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_width.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_width.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->width);
      union {
        double real;
        uint64_t base;
      } u_height;
      u_height.real = this->height;
      *(outbuffer + offset + 0) = (u_height.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_height.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_height.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_height.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_height.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_height.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_height.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_height.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->height);
      union {
        double real;
        uint64_t base;
      } u_max_speed;
      u_max_speed.real = this->max_speed;
      *(outbuffer + offset + 0) = (u_max_speed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_speed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_speed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_speed.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_max_speed.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_max_speed.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_max_speed.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_max_speed.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->max_speed);
      union {
        double real;
        uint64_t base;
      } u_cruising_range;
      u_cruising_range.real = this->cruising_range;
      *(outbuffer + offset + 0) = (u_cruising_range.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cruising_range.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cruising_range.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cruising_range.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_cruising_range.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_cruising_range.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_cruising_range.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_cruising_range.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->cruising_range);
      union {
        double real;
        uint64_t base;
      } u_area_longitude;
      u_area_longitude.real = this->area_longitude;
      *(outbuffer + offset + 0) = (u_area_longitude.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_area_longitude.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_area_longitude.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_area_longitude.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_area_longitude.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_area_longitude.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_area_longitude.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_area_longitude.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->area_longitude);
      union {
        double real;
        uint64_t base;
      } u_area_latitude;
      u_area_latitude.real = this->area_latitude;
      *(outbuffer + offset + 0) = (u_area_latitude.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_area_latitude.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_area_latitude.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_area_latitude.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_area_latitude.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_area_latitude.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_area_latitude.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_area_latitude.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->area_latitude);
      union {
        double real;
        uint64_t base;
      } u_action_range;
      u_action_range.real = this->action_range;
      *(outbuffer + offset + 0) = (u_action_range.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_action_range.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_action_range.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_action_range.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_action_range.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_action_range.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_action_range.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_action_range.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->action_range);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->subSys.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_length;
      u_length.base = 0;
      u_length.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_length.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_length.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_length.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_length.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_length.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_length.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_length.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->length = u_length.real;
      offset += sizeof(this->length);
      union {
        double real;
        uint64_t base;
      } u_width;
      u_width.base = 0;
      u_width.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_width.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_width.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_width.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_width.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_width.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_width.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_width.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->width = u_width.real;
      offset += sizeof(this->width);
      union {
        double real;
        uint64_t base;
      } u_height;
      u_height.base = 0;
      u_height.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_height.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_height.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_height.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_height.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_height.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_height.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_height.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->height = u_height.real;
      offset += sizeof(this->height);
      union {
        double real;
        uint64_t base;
      } u_max_speed;
      u_max_speed.base = 0;
      u_max_speed.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_speed.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_speed.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_speed.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_max_speed.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_max_speed.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_max_speed.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_max_speed.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->max_speed = u_max_speed.real;
      offset += sizeof(this->max_speed);
      union {
        double real;
        uint64_t base;
      } u_cruising_range;
      u_cruising_range.base = 0;
      u_cruising_range.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cruising_range.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cruising_range.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cruising_range.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_cruising_range.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_cruising_range.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_cruising_range.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_cruising_range.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->cruising_range = u_cruising_range.real;
      offset += sizeof(this->cruising_range);
      union {
        double real;
        uint64_t base;
      } u_area_longitude;
      u_area_longitude.base = 0;
      u_area_longitude.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_area_longitude.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_area_longitude.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_area_longitude.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_area_longitude.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_area_longitude.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_area_longitude.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_area_longitude.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->area_longitude = u_area_longitude.real;
      offset += sizeof(this->area_longitude);
      union {
        double real;
        uint64_t base;
      } u_area_latitude;
      u_area_latitude.base = 0;
      u_area_latitude.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_area_latitude.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_area_latitude.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_area_latitude.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_area_latitude.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_area_latitude.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_area_latitude.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_area_latitude.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->area_latitude = u_area_latitude.real;
      offset += sizeof(this->area_latitude);
      union {
        double real;
        uint64_t base;
      } u_action_range;
      u_action_range.base = 0;
      u_action_range.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_action_range.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_action_range.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_action_range.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_action_range.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_action_range.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_action_range.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_action_range.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->action_range = u_action_range.real;
      offset += sizeof(this->action_range);
     return offset;
    }

    const char * getType(){ return "usv_msgs/USVConfiguration"; };
    const char * getMD5(){ return "d00a4aa1bd761479b95b43b88fd009b0"; };

  };

}
#endif