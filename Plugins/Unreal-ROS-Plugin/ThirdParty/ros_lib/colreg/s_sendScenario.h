#ifndef _ROS_SERVICE_s_sendScenario_h
#define _ROS_SERVICE_s_sendScenario_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace colreg
{

static const char S_SENDSCENARIO[] = "colreg/s_sendScenario";

  class s_sendScenarioRequest : public ros::Msg
  {
    public:
      typedef const char* _filename_type;
      _filename_type filename;

    s_sendScenarioRequest():
      filename("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_filename = strlen(this->filename);
      varToArr(outbuffer + offset, length_filename);
      offset += 4;
      memcpy(outbuffer + offset, this->filename, length_filename);
      offset += length_filename;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_filename;
      arrToVar(length_filename, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_filename; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_filename-1]=0;
      this->filename = (char *)(inbuffer + offset-1);
      offset += length_filename;
     return offset;
    }

    const char * getType(){ return S_SENDSCENARIO; };
    const char * getMD5(){ return "030824f52a0628ead956fb9d67e66ae9"; };

  };

  class s_sendScenarioResponse : public ros::Msg
  {
    public:

    s_sendScenarioResponse()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
     return offset;
    }

    const char * getType(){ return S_SENDSCENARIO; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class s_sendScenario {
    public:
    typedef s_sendScenarioRequest Request;
    typedef s_sendScenarioResponse Response;
  };

}
#endif
