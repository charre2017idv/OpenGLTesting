#include "RenderManager.h"
#include "VertexShader.h"
#include "InputLayout.h"

RenderManager::RenderManager()
{
}


RenderManager::~RenderManager()
{
}

void RenderManager::onPrepare()
{
  cout << "Module Initialized" << endl;
}

void RenderManager::CreateBuffer(VertexBuffer & _VertexBuffer)
{
  m_Device.CreateBuffer(_VertexBuffer);
}

void RenderManager::CreateInputLayout(InputLayout & _InputLayout)
{
  m_Device.CreateInputLayout(_InputLayout);
}

void RenderManager::DrawIndexed(unsigned int _IndexCount, unsigned int _StartIndexLocation)
{
  m_DeviceContext.DrawIndexed(_IndexCount, _StartIndexLocation);
}

void RenderManager::ClearRenderTargetView(float _ColorRGBA[4])
{
  m_DeviceContext.ClearRenderTargetView(_ColorRGBA);
}
