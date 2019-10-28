#include "RenderManager.h"
#pragma once
/**
 * @brief : 
 */
struct InputLayoutDesc
{
  unsigned int ShaderIndex;
  int Size;
  unsigned int Format;
  bool Normalized; 
  int stride;
  const void * Pointer;
};

/**
 * @brief : 
 */
class InputLayout
{
public:
  InputLayout();
  ~InputLayout();
private:
  /**
   * @brief : 
   */
  InputLayoutDesc m_descriptor;
public:
  /**
    * @brief  : 
    * @param  : 
    * @bug    : No known bugs.
    */
  void 
  Init(InputLayoutDesc _Desc);
  /**
    * @brief  : 
    * @param  : 
    * @bug    : No known bugs.
    */
  void 
  Update();
  /**
    * @brief  : 
    * @param  : 
    * @bug    : No known bugs.
    */
  void 
  Render();
  /**
    * @brief  : 
    * @param  : 
    * @bug    : No known bugs.
    */
  void 
  Destroy();
  /**
    * @brief  : 
    * @param  : 
    * @bug    : 
    */
  InputLayoutDesc & getDescriptor();
};

