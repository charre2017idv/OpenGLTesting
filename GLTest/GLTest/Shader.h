/**
 * @brief : 
 */
#include "mfDefines.h"
#pragma once

 /**
 * @brief : 
 */
class Shader
{
public:
  Shader();
  ~Shader();
private:

public:
  /**
    * @brief  : 
    * @param  : 
    * @bug    : 
    */
  unsigned int CreateShader(string & _VertexShader, string & _PixelShader);
private:
  /**
    * @brief  : 
    * @param  : 
    * @bug    : 
    */
  unsigned int CompileShaderFromFile(unsigned int _Type, const string & _Source);
};

