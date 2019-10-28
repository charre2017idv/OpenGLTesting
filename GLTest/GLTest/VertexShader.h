#include "mfDefines.h"
#include "RenderManager.h"
/**
 * @brief : 
 */
#pragma once
/**
 * @brief : 
 */
struct VertexBufferID
{
  unsigned int ID;
};
/**
 * @brief : 
 */
struct VertexBufferDesc
{
  void * Data;
  int DataSize;
  unsigned int BindFlag;
  unsigned int Usage;
};

/**
 * @brief : 
 */
class VertexBuffer
{
public:
  VertexBuffer();
  ~VertexBuffer();
private:
  /**
   * @brief : 
   */
  VertexBufferID m_VertexShader;
  /**
   * @brief : 
   */
  VertexBufferDesc m_Descriptor;
public:
  /**
    * @brief  : 
    * @param  : 
    * @bug    : No known bugs.
    */
  void 
  Init(VertexBufferDesc _Desc);
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
  void Bind() const;
  /**
    * @brief  : 
    * @param  : 
    * @bug    : 
    */
  void Unbind() const;
  /**
    * @brief  : 
    * @param  : 
    * @bug    : 
    */
  VertexBufferID & getInterface();
  /**
    * @brief  : 
    * @param  : 
    * @bug    : 
    */
  VertexBufferDesc & getDescriptor();
};

