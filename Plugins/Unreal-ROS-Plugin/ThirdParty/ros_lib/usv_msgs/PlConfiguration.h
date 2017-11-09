#ifndef _ROS_usv_msgs_PlConfiguration_h
#define _ROS_usv_msgs_PlConfiguration_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "usv_msgs/SubSysId.h"
#include "usv_msgs/PanTiltSector.h"

namespace usv_msgs
{

  class PlConfiguration : public ros::Msg
  {
    public:
      typedef usv_msgs::SubSysId _subSys_type;
      _subSys_type subSys;
      typedef double _pos_x_type;
      _pos_x_type pos_x;
      typedef double _pos_y_type;
      _pos_y_type pos_y;
      typedef double _pos_z_type;
      _pos_z_type pos_z;
      typedef double _bias_yaw_type;
      _bias_yaw_type bias_yaw;
      typedef double _bias_roll_type;
      _bias_roll_type bias_roll;
      typedef double _bias_pitch_type;
      _bias_pitch_type bias_pitch;
      uint32_t sector_length;
      typedef usv_msgs::PanTiltSector _sector_type;
      _sector_type st_sector;
      _sector_type * sector;

    PlConfiguration():
      subSys(),
      pos_x(0),
      pos_y(0),
      pos_z(0),
      bias_yaw(0),
      bias_roll(0),
      bias_pitch(0),
      sector_length(0), sector(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->subSys.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_pos_x;
      u_pos_x.real = this->pos_x;
      *(outbuffer + offset + 0) = (u_pos_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos_x);
      union {
        double real;
        uint64_t base;
      } u_pos_y;
      u_pos_y.real = this->pos_y;
      *(outbuffer + offset + 0) = (u_pos_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos_y.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos_y.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos_y.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos_y.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos_y.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos_y);
      union {
        double real;
        uint64_t base;
      } u_pos_z;
      u_pos_z.real = this->pos_z;
      *(outbuffer + offset + 0) = (u_pos_z.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos_z.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos_z.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos_z.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos_z.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos_z.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos_z.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos_z.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos_z);
      union {
        double real;
        uint64_t base;
      } u_bias_yaw;
      u_bias_yaw.real = this->bias_yaw;
      *(outbuffer + offset + 0) = (u_bias_yaw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_bias_yaw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_bias_yaw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_bias_yaw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_bias_yaw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_bias_yaw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_bias_yaw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_bias_yaw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->bias_yaw);
      union {
        double real;
        uint64_t base;
      } u_bias_roll;
      u_bias_roll.real = this->bias_roll;
      *(outbuffer + offset + 0) = (u_bias_roll.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_bias_roll.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_bias_roll.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_bias_roll.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_bias_roll.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_bias_roll.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_bias_roll.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_bias_roll.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->bias_roll);
      union {
        double real;
        uint64_t base;
      } u_bias_pitch;
      u_bias_pitch.real = this->bias_pitch;
      *(outbuffer + offset + 0) = (u_bias_pitch.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_bias_pitch.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_bias_pitch.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_bias_pitch.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_bias_pitch.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_bias_pitch.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_bias_pitch.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_bias_pitch.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->bias_pitch);
      *(outbuffer + offset + 0) = (this->sector_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->sector_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->sector_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->sector_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->sector_length);
      for( uint32_t i = 0; i < sector_length; i++){
      offset += this->sector[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->subSys.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_pos_x;
      u_pos_x.base = 0;
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos_x = u_pos_x.real;
      offset += sizeof(this->pos_x);
      union {
        double real;
        uint64_t base;
      } u_pos_y;
      u_pos_y.base = 0;
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos_y = u_pos_y.real;
      offset += sizeof(this->pos_y);
      union {
        double real;
        uint64_t base;
      } u_pos_z;
      u_pos_z.base = 0;
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos_z = u_pos_z.real;
      offset += sizeof(this->pos_z);
      union {
        double real;
        uint64_t base;
      } u_bias_yaw;
      u_bias_yaw.base = 0;
      u_bias_yaw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_bias_yaw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_bias_yaw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_bias_yaw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_bias_yaw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_bias_yaw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_bias_yaw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_bias_yaw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->bias_yaw = u_bias_yaw.real;
      offset += sizeof(this->bias_yaw);
      union {
        double real;
        uint64_t base;
      } u_bias_roll;
      u_bias_roll.base = 0;
      u_bias_roll.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_bias_roll.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_bias_roll.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_bias_roll.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_bias_roll.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_bias_roll.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_bias_roll.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_bias_roll.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->bias_roll = u_bias_roll.real;
      offset += sizeof(this->bias_roll);
      union {
        double real;
        uint64_t base;
      } u_bias_pitch;
      u_bias_pitch.base = 0;
      u_bias_pitch.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_bias_pitch.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_bias_pitch.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_bias_pitch.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_bias_pitch.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_bias_pitch.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_bias_pitch.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_bias_pitch.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->bias_pitch = u_bias_pitch.real;
      offset += sizeof(this->bias_pitch);
      uint32_t sector_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      sector_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      sector_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      sector_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->sector_length);
      if(sector_lengthT > sector_length)
        this->sector = (usv_msgs::PanTiltSector*)realloc(this->sector, sector_lengthT * sizeof(usv_msgs::PanTiltSector));
      sector_length = sector_lengthT;
      for( uint32_t i = 0; i < sector_length; i++){
      offset += this->st_sector.deserialize(inbuffer + offset);
        memcpy( &(this->sector[i]), &(this->st_sector), sizeof(usv_msgs::PanTiltSector));
      }
     return offset;
    }

    const char * getType(){ return "usv_msgs/PlConfiguration"; };
    const char * getMD5(){ return "40403b307b251acbe5ee9a54ae6cf8bd"; };

  };

}
#endif