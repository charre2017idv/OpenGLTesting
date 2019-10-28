#include "Device.h"
#include "VertexShader.h"
#include "InputLayout.h"
#include "IndexBuffer.h"

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
    _VertexBuffer.getDescriptor().BindFlag,
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

void Device::CreateBuffer(IndexBuffer & _IndexBuffer)
{
  glGenBuffers
  (
    1,
    &_IndexBuffer.getInterface().ID
  );
  glBindBuffer
  (
    _IndexBuffer.getDescriptor().BindFlag,
    _IndexBuffer.getInterface().ID
  );
  glBufferData
  (
    _IndexBuffer.getDescriptor().BindFlag,
    _IndexBuffer.getDescriptor().DataSize,
    _IndexBuffer.getDescriptor().Data,
    _IndexBuffer.getDescriptor().Usage
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
