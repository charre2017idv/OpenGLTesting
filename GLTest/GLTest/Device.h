#include "mfDefines.h"
#pragma once
/**
 * @brief : 
 */
class VertexBuffer;
class InputLayout;

/**
 * @brief : 
 */
class Device
{
public:
  Device();
  ~Device();
private:

public:
  /**
    * @brief  : 
    * @param  : 
    * @bug    : 
    */
  void CreateBuffer(VertexBuffer & _VertexBuffer);
  /**
    * @brief  : 
    * @param  : 
    * @bug    : 
    */
  void CreateInputLayout(InputLayout & _InputLayout);
};

