/**
 * @brief : 
 */
#include "mfDefines.h"
#pragma once
/**
 * @brief : 
 */
struct WindowID
{
  GLFWwindow* ID;
};
/**
 * @brief : 
 */
struct WindowDesc
{
  const char * FileName;
  int Width;
  int Height;
};

/**
 * @brief : 
 */
class Window
{
public:
  Window();
  ~Window();
private:
  /**
   * @brief : 
   */
  WindowID m_Window;
public:
  /**
    * @brief  : 
    * @param  : 
    * @bug    : No known bugs.
    */
  void 
  Init(WindowDesc _Desc);
  /**
    * @brief  : 
    * @param  : 
    * @bug    : No known bugs.
    */
  void 
  Update();
  /**
    * @brief  : 
    * @param  : 
    * @bug    : No known bugs.
    */
  void 
  Render();
  /**
    * @brief  : 
    * @param  : 
    * @bug    : No known bugs.
    */
  void 
  Destroy();
  /**
    * @brief  : 
    * @param  : 
    * @bug    : 
    */
  WindowID & getInterface();
};

