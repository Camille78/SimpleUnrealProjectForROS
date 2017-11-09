#ifndef _ROS_mdt_msgs_stampedCartesianPlot_h
#define _ROS_mdt_msgs_stampedCartesianPlot_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/PointStamped.h"
#include "geographic_msgs/KeyValue.h"

namespace mdt_msgs
{

  class stampedCartesianPlot : public ros::Msg
  {
    public:
      typedef geometry_msgs::PointStamped _cart_plot_type;
      _cart_plot_type cart_plot;
      typedef double _sigma_x_type;
      _sigma_x_type sigma_x;
      typedef double _sigma_y_type;
      _sigma_y_type sigma_y;
      typedef double _sigma_xy_type;
      _sigma_xy_type sigma_xy;
      typedef geographic_msgs::KeyValue _additionalParameter_type;
      _additionalParameter_type additionalParameter;

    stampedCartesianPlot():
      cart_plot(),
      sigma_x(0),
      sigma_y(0),
      sigma_xy(0),
      additionalParameter()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->cart_plot.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_sigma_x;
      u_sigma_x.real = this->sigma_x;
      *(outbuffer + offset + 0) = (u_sigma_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_sigma_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_sigma_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_sigma_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_sigma_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_sigma_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_sigma_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_sigma_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->sigma_x);
      union {
        double real;
        uint64_t base;
      } u_sigma_y;
      u_sigma_y.real = this->sigma_y;
      *(outbuffer + offset + 0) = (u_sigma_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_sigma_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_sigma_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_sigma_y.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_sigma_y.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_sigma_y.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_sigma_y.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_sigma_y.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->sigma_y);
      union {
        double real;
        uint64_t base;
      } u_sigma_xy;
      u_sigma_xy.real = this->sigma_xy;
      *(outbuffer + offset + 0) = (u_sigma_xy.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_sigma_xy.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_sigma_xy.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_sigma_xy.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_sigma_xy.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_sigma_xy.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_sigma_xy.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_sigma_xy.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->sigma_xy);
      offset += this->additionalParameter.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->cart_plot.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_sigma_x;
      u_sigma_x.base = 0;
      u_sigma_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_sigma_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_sigma_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_sigma_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_sigma_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_sigma_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_sigma_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_sigma_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->sigma_x = u_sigma_x.real;
      offset += sizeof(this->sigma_x);
      union {
        double real;
        uint64_t base;
      } u_sigma_y;
      u_sigma_y.base = 0;
      u_sigma_y.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_sigma_y.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_sigma_y.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_sigma_y.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_sigma_y.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_sigma_y.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_sigma_y.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_sigma_y.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->sigma_y = u_sigma_y.real;
      offset += sizeof(this->sigma_y);
      union {
        double real;
        uint64_t base;
      } u_sigma_xy;
      u_sigma_xy.base = 0;
      u_sigma_xy.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_sigma_xy.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_sigma_xy.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_sigma_xy.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_sigma_xy.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_sigma_xy.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_sigma_xy.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_sigma_xy.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->sigma_xy = u_sigma_xy.real;
      offset += sizeof(this->sigma_xy);
      offset += this->additionalParameter.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "mdt_msgs/stampedCartesianPlot"; };
    const char * getMD5(){ return "745c756c6c444e284de67afdcd82ffb3"; };

  };

}
#endif