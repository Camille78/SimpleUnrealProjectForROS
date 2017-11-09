#ifndef _ROS_mdt_msgs_Gps_h
#define _ROS_mdt_msgs_Gps_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace mdt_msgs
{

  class Gps : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef uint8_t _fix_quality_type;
      _fix_quality_type fix_quality;
      typedef uint16_t _svs_type;
      _svs_type svs;
      typedef double _latitude_type;
      _latitude_type latitude;
      typedef double _longitude_type;
      _longitude_type longitude;
      typedef double _altitude_type;
      _altitude_type altitude;
      typedef double _elipsoid_height_type;
      _elipsoid_height_type elipsoid_height;
      typedef double _sog_type;
      _sog_type sog;
      typedef double _cog_type;
      _cog_type cog;
      typedef double _horiz_accuracy_type;
      _horiz_accuracy_type horiz_accuracy;
      double position_covariance[9];
      typedef uint8_t _position_covariance_type_type;
      _position_covariance_type_type position_covariance_type;
      enum { FIX_INVALID =  0  };
      enum { FIX_GPS =  1  };
      enum { FIX_DGPS =  2  };
      enum { FIX_RTK_FIXED =  4  };
      enum { FIX_RTK_FLOAT =  5  };
      enum { FIX_DEAD_RECKONING =  6  };
      enum { COVARIANCE_TYPE_UNKNOWN =  0 };
      enum { COVARIANCE_TYPE_APPROXIMATED =  1 };
      enum { COVARIANCE_TYPE_DIAGONAL_KNOWN =  2 };
      enum { COVARIANCE_TYPE_KNOWN =  3 };

    Gps():
      header(),
      fix_quality(0),
      svs(0),
      latitude(0),
      longitude(0),
      altitude(0),
      elipsoid_height(0),
      sog(0),
      cog(0),
      horiz_accuracy(0),
      position_covariance(),
      position_covariance_type(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->fix_quality >> (8 * 0)) & 0xFF;
      offset += sizeof(this->fix_quality);
      *(outbuffer + offset + 0) = (this->svs >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->svs >> (8 * 1)) & 0xFF;
      offset += sizeof(this->svs);
      union {
        double real;
        uint64_t base;
      } u_latitude;
      u_latitude.real = this->latitude;
      *(outbuffer + offset + 0) = (u_latitude.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_latitude.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_latitude.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_latitude.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_latitude.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_latitude.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_latitude.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_latitude.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->latitude);
      union {
        double real;
        uint64_t base;
      } u_longitude;
      u_longitude.real = this->longitude;
      *(outbuffer + offset + 0) = (u_longitude.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_longitude.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_longitude.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_longitude.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_longitude.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_longitude.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_longitude.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_longitude.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->longitude);
      union {
        double real;
        uint64_t base;
      } u_altitude;
      u_altitude.real = this->altitude;
      *(outbuffer + offset + 0) = (u_altitude.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_altitude.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_altitude.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_altitude.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_altitude.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_altitude.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_altitude.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_altitude.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->altitude);
      union {
        double real;
        uint64_t base;
      } u_elipsoid_height;
      u_elipsoid_height.real = this->elipsoid_height;
      *(outbuffer + offset + 0) = (u_elipsoid_height.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_elipsoid_height.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_elipsoid_height.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_elipsoid_height.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_elipsoid_height.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_elipsoid_height.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_elipsoid_height.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_elipsoid_height.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->elipsoid_height);
      union {
        double real;
        uint64_t base;
      } u_sog;
      u_sog.real = this->sog;
      *(outbuffer + offset + 0) = (u_sog.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_sog.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_sog.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_sog.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_sog.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_sog.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_sog.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_sog.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->sog);
      union {
        double real;
        uint64_t base;
      } u_cog;
      u_cog.real = this->cog;
      *(outbuffer + offset + 0) = (u_cog.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cog.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cog.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cog.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_cog.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_cog.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_cog.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_cog.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->cog);
      union {
        double real;
        uint64_t base;
      } u_horiz_accuracy;
      u_horiz_accuracy.real = this->horiz_accuracy;
      *(outbuffer + offset + 0) = (u_horiz_accuracy.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_horiz_accuracy.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_horiz_accuracy.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_horiz_accuracy.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_horiz_accuracy.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_horiz_accuracy.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_horiz_accuracy.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_horiz_accuracy.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->horiz_accuracy);
      for( uint32_t i = 0; i < 9; i++){
      union {
        double real;
        uint64_t base;
      } u_position_covariancei;
      u_position_covariancei.real = this->position_covariance[i];
      *(outbuffer + offset + 0) = (u_position_covariancei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_position_covariancei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_position_covariancei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_position_covariancei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_position_covariancei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_position_covariancei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_position_covariancei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_position_covariancei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->position_covariance[i]);
      }
      *(outbuffer + offset + 0) = (this->position_covariance_type >> (8 * 0)) & 0xFF;
      offset += sizeof(this->position_covariance_type);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      this->fix_quality =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->fix_quality);
      this->svs =  ((uint16_t) (*(inbuffer + offset)));
      this->svs |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->svs);
      union {
        double real;
        uint64_t base;
      } u_latitude;
      u_latitude.base = 0;
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->latitude = u_latitude.real;
      offset += sizeof(this->latitude);
      union {
        double real;
        uint64_t base;
      } u_longitude;
      u_longitude.base = 0;
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->longitude = u_longitude.real;
      offset += sizeof(this->longitude);
      union {
        double real;
        uint64_t base;
      } u_altitude;
      u_altitude.base = 0;
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->altitude = u_altitude.real;
      offset += sizeof(this->altitude);
      union {
        double real;
        uint64_t base;
      } u_elipsoid_height;
      u_elipsoid_height.base = 0;
      u_elipsoid_height.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_elipsoid_height.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_elipsoid_height.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_elipsoid_height.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_elipsoid_height.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_elipsoid_height.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_elipsoid_height.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_elipsoid_height.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->elipsoid_height = u_elipsoid_height.real;
      offset += sizeof(this->elipsoid_height);
      union {
        double real;
        uint64_t base;
      } u_sog;
      u_sog.base = 0;
      u_sog.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_sog.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_sog.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_sog.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_sog.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_sog.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_sog.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_sog.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->sog = u_sog.real;
      offset += sizeof(this->sog);
      union {
        double real;
        uint64_t base;
      } u_cog;
      u_cog.base = 0;
      u_cog.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cog.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cog.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cog.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_cog.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_cog.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_cog.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_cog.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->cog = u_cog.real;
      offset += sizeof(this->cog);
      union {
        double real;
        uint64_t base;
      } u_horiz_accuracy;
      u_horiz_accuracy.base = 0;
      u_horiz_accuracy.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_horiz_accuracy.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_horiz_accuracy.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_horiz_accuracy.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_horiz_accuracy.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_horiz_accuracy.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_horiz_accuracy.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_horiz_accuracy.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->horiz_accuracy = u_horiz_accuracy.real;
      offset += sizeof(this->horiz_accuracy);
      for( uint32_t i = 0; i < 9; i++){
      union {
        double real;
        uint64_t base;
      } u_position_covariancei;
      u_position_covariancei.base = 0;
      u_position_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_position_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_position_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_position_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_position_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_position_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_position_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_position_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->position_covariance[i] = u_position_covariancei.real;
      offset += sizeof(this->position_covariance[i]);
      }
      this->position_covariance_type =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->position_covariance_type);
     return offset;
    }

    const char * getType(){ return "mdt_msgs/Gps"; };
    const char * getMD5(){ return "37e9298710d99ede1a7df18086502519"; };

  };

}
#endif