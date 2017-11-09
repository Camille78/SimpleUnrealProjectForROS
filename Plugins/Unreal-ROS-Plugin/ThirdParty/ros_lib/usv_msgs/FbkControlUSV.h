#ifndef _ROS_usv_msgs_FbkControlUSV_h
#define _ROS_usv_msgs_FbkControlUSV_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace usv_msgs
{

  class FbkControlUSV : public ros::Msg
  {
    public:
      typedef int16_t _droneId_type;
      _droneId_type droneId;
      typedef int16_t _controlStation_type;
      _controlStation_type controlStation;
      typedef int16_t _systemStatus_type;
      _systemStatus_type systemStatus;
      typedef bool _avoidancePending_type;
      _avoidancePending_type avoidancePending;
      typedef float _signalStrength_type;
      _signalStrength_type signalStrength;
      typedef bool _navLight_type;
      _navLight_type navLight;
      typedef bool _engine_type;
      _engine_type engine;
      typedef float _trim_type;
      _trim_type trim;
      typedef float _fuel_type;
      _fuel_type fuel;
      typedef bool _lrOperationnal_type;
      _lrOperationnal_type lrOperationnal;
      typedef bool _docked_type;
      _docked_type docked;

    FbkControlUSV():
      droneId(0),
      controlStation(0),
      systemStatus(0),
      avoidancePending(0),
      signalStrength(0),
      navLight(0),
      engine(0),
      trim(0),
      fuel(0),
      lrOperationnal(0),
      docked(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_droneId;
      u_droneId.real = this->droneId;
      *(outbuffer + offset + 0) = (u_droneId.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_droneId.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->droneId);
      union {
        int16_t real;
        uint16_t base;
      } u_controlStation;
      u_controlStation.real = this->controlStation;
      *(outbuffer + offset + 0) = (u_controlStation.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_controlStation.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->controlStation);
      union {
        int16_t real;
        uint16_t base;
      } u_systemStatus;
      u_systemStatus.real = this->systemStatus;
      *(outbuffer + offset + 0) = (u_systemStatus.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_systemStatus.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->systemStatus);
      union {
        bool real;
        uint8_t base;
      } u_avoidancePending;
      u_avoidancePending.real = this->avoidancePending;
      *(outbuffer + offset + 0) = (u_avoidancePending.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->avoidancePending);
      union {
        float real;
        uint32_t base;
      } u_signalStrength;
      u_signalStrength.real = this->signalStrength;
      *(outbuffer + offset + 0) = (u_signalStrength.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_signalStrength.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_signalStrength.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_signalStrength.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->signalStrength);
      union {
        bool real;
        uint8_t base;
      } u_navLight;
      u_navLight.real = this->navLight;
      *(outbuffer + offset + 0) = (u_navLight.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->navLight);
      union {
        bool real;
        uint8_t base;
      } u_engine;
      u_engine.real = this->engine;
      *(outbuffer + offset + 0) = (u_engine.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->engine);
      union {
        float real;
        uint32_t base;
      } u_trim;
      u_trim.real = this->trim;
      *(outbuffer + offset + 0) = (u_trim.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_trim.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_trim.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_trim.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->trim);
      union {
        float real;
        uint32_t base;
      } u_fuel;
      u_fuel.real = this->fuel;
      *(outbuffer + offset + 0) = (u_fuel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fuel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fuel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fuel.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fuel);
      union {
        bool real;
        uint8_t base;
      } u_lrOperationnal;
      u_lrOperationnal.real = this->lrOperationnal;
      *(outbuffer + offset + 0) = (u_lrOperationnal.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->lrOperationnal);
      union {
        bool real;
        uint8_t base;
      } u_docked;
      u_docked.real = this->docked;
      *(outbuffer + offset + 0) = (u_docked.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->docked);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_droneId;
      u_droneId.base = 0;
      u_droneId.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_droneId.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->droneId = u_droneId.real;
      offset += sizeof(this->droneId);
      union {
        int16_t real;
        uint16_t base;
      } u_controlStation;
      u_controlStation.base = 0;
      u_controlStation.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_controlStation.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->controlStation = u_controlStation.real;
      offset += sizeof(this->controlStation);
      union {
        int16_t real;
        uint16_t base;
      } u_systemStatus;
      u_systemStatus.base = 0;
      u_systemStatus.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_systemStatus.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->systemStatus = u_systemStatus.real;
      offset += sizeof(this->systemStatus);
      union {
        bool real;
        uint8_t base;
      } u_avoidancePending;
      u_avoidancePending.base = 0;
      u_avoidancePending.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->avoidancePending = u_avoidancePending.real;
      offset += sizeof(this->avoidancePending);
      union {
        float real;
        uint32_t base;
      } u_signalStrength;
      u_signalStrength.base = 0;
      u_signalStrength.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_signalStrength.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_signalStrength.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_signalStrength.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->signalStrength = u_signalStrength.real;
      offset += sizeof(this->signalStrength);
      union {
        bool real;
        uint8_t base;
      } u_navLight;
      u_navLight.base = 0;
      u_navLight.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->navLight = u_navLight.real;
      offset += sizeof(this->navLight);
      union {
        bool real;
        uint8_t base;
      } u_engine;
      u_engine.base = 0;
      u_engine.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->engine = u_engine.real;
      offset += sizeof(this->engine);
      union {
        float real;
        uint32_t base;
      } u_trim;
      u_trim.base = 0;
      u_trim.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_trim.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_trim.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_trim.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->trim = u_trim.real;
      offset += sizeof(this->trim);
      union {
        float real;
        uint32_t base;
      } u_fuel;
      u_fuel.base = 0;
      u_fuel.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_fuel.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_fuel.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_fuel.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->fuel = u_fuel.real;
      offset += sizeof(this->fuel);
      union {
        bool real;
        uint8_t base;
      } u_lrOperationnal;
      u_lrOperationnal.base = 0;
      u_lrOperationnal.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->lrOperationnal = u_lrOperationnal.real;
      offset += sizeof(this->lrOperationnal);
      union {
        bool real;
        uint8_t base;
      } u_docked;
      u_docked.base = 0;
      u_docked.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->docked = u_docked.real;
      offset += sizeof(this->docked);
     return offset;
    }

    const char * getType(){ return "usv_msgs/FbkControlUSV"; };
    const char * getMD5(){ return "23527e1183ef3c8ce629993ff87ced9b"; };

  };

}
#endif