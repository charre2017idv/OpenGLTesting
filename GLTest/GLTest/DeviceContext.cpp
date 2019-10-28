#include "DeviceContext.h"



DeviceContext::DeviceContext()
{
}


DeviceContext::~DeviceContext()
{
}

void DeviceContext::DrawIndexed(unsigned int _IndexCount, unsigned int _StartIndexLocation)
{
  glDrawElements(GL_TRIANGLES, _IndexCount, GL_UNSIGNED_INT, nullptr);
}

void DeviceContext::ClearRenderTargetView(float _ColorRGBA[4])
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glClearColor(_ColorRGBA[0], _ColorRGBA[1], _ColorRGBA[2], _ColorRGBA[3]);
}
