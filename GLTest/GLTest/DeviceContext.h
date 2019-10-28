/**
 * @brief : 
 */
#include "mfDefines.h"
#pragma once

/**
 * @brief : 
 */
class DeviceContext
{
public:
  DeviceContext();
  ~DeviceContext();
private:
public:
  /**
    * @brief  : 
    * @param  : 
    * @bug    : 
    */
  void DrawIndexed(unsigned int _IndexCount, unsigned int _StartIndexLocation);
  /**
    * @brief  : 
    * @param  : 
    * @bug    : 
    */
  void ClearRenderTargetView(float _ColorRGBA[4]);
};

