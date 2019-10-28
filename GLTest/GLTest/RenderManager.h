#include "mfDefines.h"
#include "Device.h"
#include "DeviceContext.h"
#include "mfModule.h"
/**
 * @brief : 
 */
#pragma once
/**
 * @brief : 
 */
class VertexBuffer;
class InputLayout;
class IndexBuffer;
/**
 * @brief : 
 */
class RenderManager : public mfModule<RenderManager>
{
public:
  RenderManager();
  ~RenderManager();
private:
  Device m_Device;
  DeviceContext m_DeviceContext;
public:
  /**
  * @brief  : Function that initialize the module.
  * @bug    : No know bugs.
  */
  virtual void onPrepare() override ;
  /**
    * @brief  : Function in charge of release modules.
    * @bug    : No know bugs.
    */
  virtual void onShutDown() override {}
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
  void CreateBuffer(IndexBuffer & _IndexBuffer);
  /**
    * @brief  : 
    * @param  : 
    * @bug    : 
    */
  void CreateInputLayout(InputLayout & _InputLayout);
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

