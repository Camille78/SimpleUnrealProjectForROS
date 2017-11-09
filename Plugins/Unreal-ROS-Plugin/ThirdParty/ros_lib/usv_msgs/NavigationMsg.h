#ifndef _ROS_usv_msgs_NavigationMsg_h
#define _ROS_usv_msgs_NavigationMsg_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace usv_msgs
{

  class NavigationMsg : public ros::Msg
  {
    public:
      typedef int32_t _droneId_type;
      _droneId_type droneId;
      typedef float _latitude_type;
      _latitude_type latitude;
      typedef float _longitude_type;
      _longitude_type longitude;
      typedef float _sog_type;
      _sog_type sog;
      typedef float _cog_type;
      _cog_type cog;
      typedef float _yawSat_type;
      _yawSat_type yawSat;
      typedef float _yawMag_type;
      _yawMag_type yawMag;
      typedef float _yawRate_type;
      _yawRate_type yawRate;
      typedef float _roll_type;
      _roll_type roll;
      typedef float _rollRate_type;
      _rollRate_type rollRate;
      typedef float _pitch_type;
      _pitch_type pitch;
      typedef float _pitchRate_type;
      _pitchRate_type pitchRate;
      typedef float _heave_type;
      _heave_type heave;
      typedef float _heaveSpd_type;
      _heaveSpd_type heaveSpd;
      typedef float _apparentWindSpeed_type;
      _apparentWindSpeed_type apparentWindSpeed;
      typedef float _apparentWindDirection_type;
      _apparentWindDirection_type apparentWindDirection;

    NavigationMsg():
      droneId(0),
      latitude(0),
      longitude(0),
      sog(0),
      cog(0),
      yawSat(0),
      yawMag(0),
      yawRate(0),
      roll(0),
      rollRate(0),
      pitch(0),
      pitchRate(0),
      heave(0),
      heaveSpd(0),
      apparentWindSpeed(0),
      apparentWindDirection(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_droneId;
      u_droneId.real = this->droneId;
      *(outbuffer + offset + 0) = (u_droneId.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_droneId.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_droneId.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_droneId.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->droneId);
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
      union {
        float real;
        uint32_t base;
      } u_yawSat;
      u_yawSat.real = this->yawSat;
      *(outbuffer + offset + 0) = (u_yawSat.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yawSat.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yawSat.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yawSat.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->yawSat);
      union {
        float real;
        uint32_t base;
      } u_yawMag;
      u_yawMag.real = this->yawMag;
      *(outbuffer + offset + 0) = (u_yawMag.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yawMag.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yawMag.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yawMag.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->yawMag);
      union {
        float real;
        uint32_t base;
      } u_yawRate;
      u_yawRate.real = this->yawRate;
      *(outbuffer + offset + 0) = (u_yawRate.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yawRate.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yawRate.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yawRate.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->yawRate);
      union {
        float real;
        uint32_t base;
      } u_roll;
      u_roll.real = this->roll;
      *(outbuffer + offset + 0) = (u_roll.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_roll.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_roll.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_roll.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->roll);
      union {
        float real;
        uint32_t base;
      } u_rollRate;
      u_rollRate.real = this->rollRate;
      *(outbuffer + offset + 0) = (u_rollRate.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rollRate.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rollRate.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rollRate.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rollRate);
      union {
        float real;
        uint32_t base;
      } u_pitch;
      u_pitch.real = this->pitch;
      *(outbuffer + offset + 0) = (u_pitch.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pitch.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pitch.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pitch.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pitch);
      union {
        float real;
        uint32_t base;
      } u_pitchRate;
      u_pitchRate.real = this->pitchRate;
      *(outbuffer + offset + 0) = (u_pitchRate.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pitchRate.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pitchRate.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pitchRate.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pitchRate);
      union {
        float real;
        uint32_t base;
      } u_heave;
      u_heave.real = this->heave;
      *(outbuffer + offset + 0) = (u_heave.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_heave.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_heave.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_heave.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->heave);
      union {
        float real;
        uint32_t base;
      } u_heaveSpd;
      u_heaveSpd.real = this->heaveSpd;
      *(outbuffer + offset + 0) = (u_heaveSpd.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_heaveSpd.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_heaveSpd.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_heaveSpd.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->heaveSpd);
      union {
        float real;
        uint32_t base;
      } u_apparentWindSpeed;
      u_apparentWindSpeed.real = this->apparentWindSpeed;
      *(outbuffer + offset + 0) = (u_apparentWindSpeed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_apparentWindSpeed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_apparentWindSpeed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_apparentWindSpeed.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->apparentWindSpeed);
      union {
        float real;
        uint32_t base;
      } u_apparentWindDirection;
      u_apparentWindDirection.real = this->apparentWindDirection;
      *(outbuffer + offset + 0) = (u_apparentWindDirection.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_apparentWindDirection.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_apparentWindDirection.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_apparentWindDirection.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->apparentWindDirection);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_droneId;
      u_droneId.base = 0;
      u_droneId.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_droneId.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_droneId.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_droneId.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->droneId = u_droneId.real;
      offset += sizeof(this->droneId);
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
      union {
        float real;
        uint32_t base;
      } u_yawSat;
      u_yawSat.base = 0;
      u_yawSat.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yawSat.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yawSat.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yawSat.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->yawSat = u_yawSat.real;
      offset += sizeof(this->yawSat);
      union {
        float real;
        uint32_t base;
      } u_yawMag;
      u_yawMag.base = 0;
      u_yawMag.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yawMag.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yawMag.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yawMag.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->yawMag = u_yawMag.real;
      offset += sizeof(this->yawMag);
      union {
        float real;
        uint32_t base;
      } u_yawRate;
      u_yawRate.base = 0;
      u_yawRate.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yawRate.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yawRate.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yawRate.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->yawRate = u_yawRate.real;
      offset += sizeof(this->yawRate);
      union {
        float real;
        uint32_t base;
      } u_roll;
      u_roll.base = 0;
      u_roll.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_roll.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_roll.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_roll.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->roll = u_roll.real;
      offset += sizeof(this->roll);
      union {
        float real;
        uint32_t base;
      } u_rollRate;
      u_rollRate.base = 0;
      u_rollRate.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rollRate.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rollRate.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rollRate.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rollRate = u_rollRate.real;
      offset += sizeof(this->rollRate);
      union {
        float real;
        uint32_t base;
      } u_pitch;
      u_pitch.base = 0;
      u_pitch.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pitch.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pitch.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pitch.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pitch = u_pitch.real;
      offset += sizeof(this->pitch);
      union {
        float real;
        uint32_t base;
      } u_pitchRate;
      u_pitchRate.base = 0;
      u_pitchRate.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pitchRate.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pitchRate.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pitchRate.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pitchRate = u_pitchRate.real;
      offset += sizeof(this->pitchRate);
      union {
        float real;
        uint32_t base;
      } u_heave;
      u_heave.base = 0;
      u_heave.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_heave.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_heave.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_heave.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->heave = u_heave.real;
      offset += sizeof(this->heave);
      union {
        float real;
        uint32_t base;
      } u_heaveSpd;
      u_heaveSpd.base = 0;
      u_heaveSpd.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_heaveSpd.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_heaveSpd.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_heaveSpd.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->heaveSpd = u_heaveSpd.real;
      offset += sizeof(this->heaveSpd);
      union {
        float real;
        uint32_t base;
      } u_apparentWindSpeed;
      u_apparentWindSpeed.base = 0;
      u_apparentWindSpeed.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_apparentWindSpeed.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_apparentWindSpeed.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_apparentWindSpeed.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->apparentWindSpeed = u_apparentWindSpeed.real;
      offset += sizeof(this->apparentWindSpeed);
      union {
        float real;
        uint32_t base;
      } u_apparentWindDirection;
      u_apparentWindDirection.base = 0;
      u_apparentWindDirection.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_apparentWindDirection.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_apparentWindDirection.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_apparentWindDirection.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->apparentWindDirection = u_apparentWindDirection.real;
      offset += sizeof(this->apparentWindDirection);
     return offset;
    }

    const char * getType(){ return "usv_msgs/NavigationMsg"; };
    const char * getMD5(){ return "b4c3f56c1f501677f7520ba52e060ff6"; };

  };

}
#endif