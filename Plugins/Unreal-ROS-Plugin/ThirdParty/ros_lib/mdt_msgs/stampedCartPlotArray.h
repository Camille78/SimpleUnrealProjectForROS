#ifndef _ROS_mdt_msgs_stampedCartPlotArray_h
#define _ROS_mdt_msgs_stampedCartPlotArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "mdt_msgs/stampedCartesianPlot.h"

namespace mdt_msgs
{

  class stampedCartPlotArray : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t vect_cart_plot_length;
      typedef mdt_msgs::stampedCartesianPlot _vect_cart_plot_type;
      _vect_cart_plot_type st_vect_cart_plot;
      _vect_cart_plot_type * vect_cart_plot;

    stampedCartPlotArray():
      header(),
      vect_cart_plot_length(0), vect_cart_plot(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->vect_cart_plot_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->vect_cart_plot_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->vect_cart_plot_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->vect_cart_plot_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->vect_cart_plot_length);
      for( uint32_t i = 0; i < vect_cart_plot_length; i++){
      offset += this->vect_cart_plot[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t vect_cart_plot_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      vect_cart_plot_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      vect_cart_plot_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      vect_cart_plot_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->vect_cart_plot_length);
      if(vect_cart_plot_lengthT > vect_cart_plot_length)
        this->vect_cart_plot = (mdt_msgs::stampedCartesianPlot*)realloc(this->vect_cart_plot, vect_cart_plot_lengthT * sizeof(mdt_msgs::stampedCartesianPlot));
      vect_cart_plot_length = vect_cart_plot_lengthT;
      for( uint32_t i = 0; i < vect_cart_plot_length; i++){
      offset += this->st_vect_cart_plot.deserialize(inbuffer + offset);
        memcpy( &(this->vect_cart_plot[i]), &(this->st_vect_cart_plot), sizeof(mdt_msgs::stampedCartesianPlot));
      }
     return offset;
    }

    const char * getType(){ return "mdt_msgs/stampedCartPlotArray"; };
    const char * getMD5(){ return "b6022f3f9e311a08044a66a3111bfb76"; };

  };

}
#endif