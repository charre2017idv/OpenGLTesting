#include "Window.h"



Window::Window()
{
}


Window::~Window()
{
}

void Window::Init(WindowDesc _Desc)
{
  /* Create a windowed mode window and its OpenGL context */
  m_Window.ID = glfwCreateWindow(_Desc.Width, _Desc.Height, _Desc.FileName, NULL, NULL);

  if (!m_Window.ID)
  {
    glfwTerminate();
    cout << "Window Error" << endl;
  }

  /* Make the window's context current */
  glfwMakeContextCurrent(m_Window.ID);
}

WindowID & Window::getInterface()
{
  return m_Window;
}
