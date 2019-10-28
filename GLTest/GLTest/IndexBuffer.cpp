#include "IndexBuffer.h"



IndexBuffer::IndexBuffer()
{
}


IndexBuffer::~IndexBuffer()
{
}

void IndexBuffer::Init(IndexBufferDesc _Desc)
{
  m_descriptor = _Desc;
  RenderManager::getSingleton().CreateBuffer(*this);
}

void IndexBuffer::Bind() const
{
  glBindBuffer(m_descriptor.BindFlag, m_IndexBuffer.ID);
}

void IndexBuffer::Unbind() const
{
  glBindBuffer(m_descriptor.BindFlag, 0);
}

IndexBufferID & IndexBuffer::getInterface()
{
  return m_IndexBuffer;
}

IndexBufferDesc & IndexBuffer::getDescriptor()
{
  return m_descriptor;
}
