#include "Device.h"
#include "VertexShader.h"
#include "InputLayout.h"

Device::Device()
{
}


Device::~Device()
{
}

void Device::CreateBuffer(VertexBuffer & _VertexBuffer)
{
  glGenBuffers
  (
    1,
    &_VertexBuffer.getInterface().ID
  );
  glBindBuffer
  (
    GL_ARRAY_BUFFER, 
    _VertexBuffer.getInterface().ID
  );
  glBufferData
  (
    _VertexBuffer.getDescriptor().BindFlag, 
    _VertexBuffer.getDescriptor().DataSize,
    _VertexBuffer.getDescriptor().Data, 
    _VertexBuffer.getDescriptor().Usage
  );
}

void Device::CreateInputLayout(InputLayout & _InputLayout)
{
  glVertexAttribPointer
  (
    _InputLayout.getDescriptor().ShaderIndex,
    _InputLayout.getDescriptor().Size,
    _InputLayout.getDescriptor().Format,
    _InputLayout.getDescriptor().Normalized,
    _InputLayout.getDescriptor().stride,
    _InputLayout.getDescriptor().Pointer
  );
}
