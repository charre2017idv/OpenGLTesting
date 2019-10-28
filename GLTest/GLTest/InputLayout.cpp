#include "InputLayout.h"



InputLayout::InputLayout()
{
}


InputLayout::~InputLayout()
{
}

void InputLayout::Init(InputLayoutDesc _Desc)
{
  m_descriptor = _Desc;
  RenderManager::getSingleton().CreateInputLayout(*this);
}

InputLayoutDesc & InputLayout::getDescriptor()
{
  return m_descriptor;
}
