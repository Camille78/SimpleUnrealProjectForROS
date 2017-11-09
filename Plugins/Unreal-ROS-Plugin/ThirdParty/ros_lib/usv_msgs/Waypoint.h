#ifndef _ROS_usv_msgs_Waypoint_h
#define _ROS_usv_msgs_Waypoint_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace usv_msgs
{

  class Waypoint : public ros::Msg
  {
    public:
      typedef int32_t _order_type;
      _order_type order;
      typedef const char* _name_type;
      _name_type name;
      typedef float _lat_type;
      _lat_type lat;
      typedef float _lon_type;
      _lon_type lon;
      typedef float _spd_type;
      _spd_type spd;
      typedef float _radius_type;
      _radius_type radius;

    Waypoint():
      order(0),
      name(""),
      lat(0),
      lon(0),
      spd(0),
      radius(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_order;
      u_order.real = this->order;
      *(outbuffer + offset + 0) = (u_order.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_order.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_order.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_order.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->order);
      uint32_t length_name = strlen(this->name);
      varToArr(outbuffer + offset, length_name);
      offset += 4;
      memcpy(outbuffer + offset, this->name, length_name);
      offset += length_name;
      union {
        float real;
        uint32_t base;
      } u_lat;
      u_lat.real = this->lat;
      *(outbuffer + offset + 0) = (u_lat.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_lat.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_lat.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_lat.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->lat);
      union {
        float real;
        uint32_t base;
      } u_lon;
      u_lon.real = this->lon;
      *(outbuffer + offset + 0) = (u_lon.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_lon.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_lon.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_lon.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->lon);
      union {
        float real;
        uint32_t base;
      } u_spd;
      u_spd.real = this->spd;
      *(outbuffer + offset + 0) = (u_spd.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_spd.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_spd.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_spd.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->spd);
      union {
        float real;
        uint32_t base;
      } u_radius;
      u_radius.real = this->radius;
      *(outbuffer + offset + 0) = (u_radius.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_radius.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_radius.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_radius.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->radius);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_order;
      u_order.base = 0;
      u_order.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_order.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_order.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_order.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->order = u_order.real;
      offset += sizeof(this->order);
      uint32_t length_name;
      arrToVar(length_name, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_name-1]=0;
      this->name = (char *)(inbuffer + offset-1);
      offset += length_name;
      union {
        float real;
        uint32_t base;
      } u_lat;
      u_lat.base = 0;
      u_lat.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_lat.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_lat.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_lat.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->lat = u_lat.real;
      offset += sizeof(this->lat);
      union {
        float real;
        uint32_t base;
      } u_lon;
      u_lon.base = 0;
      u_lon.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_lon.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_lon.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_lon.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->lon = u_lon.real;
      offset += sizeof(this->lon);
      union {
        float real;
        uint32_t base;
      } u_spd;
      u_spd.base = 0;
      u_spd.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_spd.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_spd.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_spd.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->spd = u_spd.real;
      offset += sizeof(this->spd);
      union {
        float real;
        uint32_t base;
      } u_radius;
      u_radius.base = 0;
      u_radius.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_radius.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_radius.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_radius.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->radius = u_radius.real;
      offset += sizeof(this->radius);
     return offset;
    }

    const char * getType(){ return "usv_msgs/Waypoint"; };
    const char * getMD5(){ return "7eefc4bb27ebfcbc98a53f0ce696cc75"; };

  };

}
#endif