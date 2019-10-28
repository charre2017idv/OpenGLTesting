#include "mfDefines.h"
#include "RenderManager.h"
/**
 * @brief :
 */
#pragma once
 /**
  * @brief :
  */
struct IndexBufferID
{
  unsigned int ID;
};
/**
 * @brief :
 */
struct IndexBufferDesc
{
  void * Data;
  int DataSize;
  unsigned int BindFlag;
  unsigned int Usage;
};

/**
 * @brief :
 */
class IndexBuffer
{
public:
  IndexBuffer();
  ~IndexBuffer();
private:
  /**
   * @brief :
   */
  IndexBufferID m_IndexBuffer;
  /**
   * @brief :
   */
  IndexBufferDesc m_descriptor;
public:
  /**
    * @brief  :
    * @param  :
    * @bug    : No known bugs.
    */
  void
    Init(IndexBufferDesc _Desc);
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
  IndexBufferID & getInterface();
  /**
    * @brief  :
    * @param  :
    * @bug    :
    */
  IndexBufferDesc & getDescriptor();
};

