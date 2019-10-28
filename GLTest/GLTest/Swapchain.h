/**
 * @brief : 
 */
#include "mfDefines.h"
#pragma once
/**
 * @brief : 
 */
struct SwapchainDesc
{
  GLFWwindow* Window;
};
/**
 * @brief : 
 */
class Swapchain
{
public:
  Swapchain();
  ~Swapchain();
private:
  SwapchainDesc m_descriptor;
public:
  void Init(SwapchainDesc _Desc);
  /**
    * @brief  : 
    * @param  : 
    * @bug    : 
    */
  void Present();
};

