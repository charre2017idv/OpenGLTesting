#include "VertexShader.h"



VertexBuffer::VertexBuffer()
{
}


VertexBuffer::~VertexBuffer()
{
}

void VertexBuffer::Init(VertexBufferDesc _Desc)
{
  m_Descriptor = _Desc;
  RenderManager::getSingleton().CreateBuffer(*this);
}

void VertexBuffer::Bind() const
{
  glBindBuffer(GL_ARRAY_BUFFER, m_VertexShader.ID);
}

void VertexBuffer::Unbind() const
{
  glBindBuffer(GL_ARRAY_BUFFER, 0);
}

VertexBufferID & VertexBuffer::getInterface()
{
  return m_VertexShader;
}

VertexBufferDesc & VertexBuffer::getDescriptor()
{
  return m_Descriptor;
}