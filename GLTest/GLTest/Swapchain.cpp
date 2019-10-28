#include "Swapchain.h"



Swapchain::Swapchain()
{
}


Swapchain::~Swapchain()
{
}

void Swapchain::Init(SwapchainDesc _Desc)
{
  m_descriptor = _Desc;
}

void Swapchain::Present()
{
  glfwSwapBuffers(m_descriptor.Window);
}
