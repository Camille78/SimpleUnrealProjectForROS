#ifndef _ROS_usv_msgs_Target_h
#define _ROS_usv_msgs_Target_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "usv_msgs/SubSysId.h"

namespace usv_msgs
{

  class Target : public ros::Msg
  {
    public:
      typedef usv_msgs::SubSysId _source_type;
      _source_type source;
      typedef int32_t _id_type;
      _id_type id;
      typedef int16_t _status_type;
      _status_type status;
      typedef int16_t _coordType_type;
      _coordType_type coordType;
      typedef int16_t _frame_type;
      _frame_type frame;
      typedef float _x_type;
      _x_type x;
      typedef float _y_type;
      _y_type y;
      typedef float _z_type;
      _z_type z;
      typedef float _elevation_type;
      _elevation_type elevation;
      typedef float _bearing_type;
      _bearing_type bearing;
      typedef float _distance_type;
      _distance_type distance;
      typedef bool _wgs84_type;
      _wgs84_type wgs84;
      typedef float _latitude_type;
      _latitude_type latitude;
      typedef float _longitude_type;
      _longitude_type longitude;
      typedef float _sog_type;
      _sog_type sog;
      typedef float _cog_type;
      _cog_type cog;

    Target():
      source(),
      id(0),
      status(0),
      coordType(0),
      frame(0),
      x(0),
      y(0),
      z(0),
      elevation(0),
      bearing(0),
      distance(0),
      wgs84(0),
      latitude(0),
      longitude(0),
      sog(0),
      cog(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->source.serialize(outbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_id;
      u_id.real = this->id;
      *(outbuffer + offset + 0) = (u_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_id.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->id);
      union {
        int16_t real;
        uint16_t base;
      } u_status;
      u_status.real = this->status;
      *(outbuffer + offset + 0) = (u_status.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_status.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->status);
      union {
        int16_t real;
        uint16_t base;
      } u_coordType;
      u_coordType.real = this->coordType;
      *(outbuffer + offset + 0) = (u_coordType.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_coordType.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->coordType);
      union {
        int16_t real;
        uint16_t base;
      } u_frame;
      u_frame.real = this->frame;
      *(outbuffer + offset + 0) = (u_frame.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_frame.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->frame);
      union {
        float real;
        uint32_t base;
      } u_x;
      u_x.real = this->x;
      *(outbuffer + offset + 0) = (u_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_x.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->x);
      union {
        float real;
        uint32_t base;
      } u_y;
      u_y.real = this->y;
      *(outbuffer + offset + 0) = (u_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_y.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->y);
      union {
        float real;
        uint32_t base;
      } u_z;
      u_z.real = this->z;
      *(outbuffer + offset + 0) = (u_z.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_z.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_z.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_z.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->z);
      union {
        float real;
        uint32_t base;
      } u_elevation;
      u_elevation.real = this->elevation;
      *(outbuffer + offset + 0) = (u_elevation.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_elevation.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_elevation.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_elevation.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->elevation);
      union {
        float real;
        uint32_t base;
      } u_bearing;
      u_bearing.real = this->bearing;
      *(outbuffer + offset + 0) = (u_bearing.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_bearing.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_bearing.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_bearing.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->bearing);
      union {
        float real;
        uint32_t base;
      } u_distance;
      u_distance.real = this->distance;
      *(outbuffer + offset + 0) = (u_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->distance);
      union {
        bool real;
        uint8_t base;
      } u_wgs84;
      u_wgs84.real = this->wgs84;
      *(outbuffer + offset + 0) = (u_wgs84.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->wgs84);
      union {
        float real;
        uint32_t base;
      } u_latitude;
      u_latitude.real = this->latitude;
      *(outbuffer + offset + 0) = (u_latitude.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_latitude.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_latitude.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_latitude.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->latitude);
      union {
        float real;
        uint32_t base;
      } u_longitude;
      u_longitude.real = this->longitude;
      *(outbuffer + offset + 0) = (u_longitude.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_longitude.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_longitude.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_longitude.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->longitude);
      union {
        float real;
        uint32_t base;
      } u_sog;
      u_sog.real = this->sog;
      *(outbuffer + offset + 0) = (u_sog.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_sog.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_sog.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_sog.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->sog);
      union {
        float real;
        uint32_t base;
      } u_cog;
      u_cog.real = this->cog;
      *(outbuffer + offset + 0) = (u_cog.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cog.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cog.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cog.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cog);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->source.deserialize(inbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_id;
      u_id.base = 0;
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->id = u_id.real;
      offset += sizeof(this->id);
      union {
        int16_t real;
        uint16_t base;
      } u_status;
      u_status.base = 0;
      u_status.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_status.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->status = u_status.real;
      offset += sizeof(this->status);
      union {
        int16_t real;
        uint16_t base;
      } u_coordType;
      u_coordType.base = 0;
      u_coordType.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_coordType.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->coordType = u_coordType.real;
      offset += sizeof(this->coordType);
      union {
        int16_t real;
        uint16_t base;
      } u_frame;
      u_frame.base = 0;
      u_frame.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_frame.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->frame = u_frame.real;
      offset += sizeof(this->frame);
      union {
        float real;
        uint32_t base;
      } u_x;
      u_x.base = 0;
      u_x.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_x.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_x.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_x.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->x = u_x.real;
      offset += sizeof(this->x);
      union {
        float real;
        uint32_t base;
      } u_y;
      u_y.base = 0;
      u_y.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_y.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_y.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_y.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->y = u_y.real;
      offset += sizeof(this->y);
      union {
        float real;
        uint32_t base;
      } u_z;
      u_z.base = 0;
      u_z.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_z.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_z.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_z.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->z = u_z.real;
      offset += sizeof(this->z);
      union {
        float real;
        uint32_t base;
      } u_elevation;
      u_elevation.base = 0;
      u_elevation.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_elevation.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_elevation.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_elevation.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->elevation = u_elevation.real;
      offset += sizeof(this->elevation);
      union {
        float real;
        uint32_t base;
      } u_bearing;
      u_bearing.base = 0;
      u_bearing.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_bearing.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_bearing.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_bearing.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->bearing = u_bearing.real;
      offset += sizeof(this->bearing);
      union {
        float real;
        uint32_t base;
      } u_distance;
      u_distance.base = 0;
      u_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->distance = u_distance.real;
      offset += sizeof(this->distance);
      union {
        bool real;
        uint8_t base;
      } u_wgs84;
      u_wgs84.base = 0;
      u_wgs84.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->wgs84 = u_wgs84.real;
      offset += sizeof(this->wgs84);
      union {
        float real;
        uint32_t base;
      } u_latitude;
      u_latitude.base = 0;
      u_latitude.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_latitude.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_latitude.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_latitude.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->latitude = u_latitude.real;
      offset += sizeof(this->latitude);
      union {
        float real;
        uint32_t base;
      } u_longitude;
      u_longitude.base = 0;
      u_longitude.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_longitude.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_longitude.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_longitude.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->longitude = u_longitude.real;
      offset += sizeof(this->longitude);
      union {
        float real;
        uint32_t base;
      } u_sog;
      u_sog.base = 0;
      u_sog.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_sog.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_sog.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_sog.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->sog = u_sog.real;
      offset += sizeof(this->sog);
      union {
        float real;
        uint32_t base;
      } u_cog;
      u_cog.base = 0;
      u_cog.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cog.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cog.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cog.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cog = u_cog.real;
      offset += sizeof(this->cog);
     return offset;
    }

    const char * getType(){ return "usv_msgs/Target"; };
    const char * getMD5(){ return "9e594c31b82f13540e155f173c23e12e"; };

  };

}
#endif