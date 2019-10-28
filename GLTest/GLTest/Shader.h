/**
 * @brief : 
 */
#include "mfDefines.h"
#pragma once
/**
 * @brief : Shader Recognition Structure
 */
struct ShaderSources
{
  string VertexSource;
  string FragmentSource;
};

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
  /**
    * @brief  : 
    * @param  : 
    * @bug    : 
    */
  ShaderSources ParseShader(const string & filepath);
private:
  /**
    * @brief  : 
    * @param  : 
    * @bug    : 
    */
  unsigned int CompileShaderFromFile(unsigned int _Type, const string & _Source);
};

