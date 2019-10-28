#include "mfDefines.h"
#include "RenderManager.h"
#include "VertexShader.h"
#include "InputLayout.h"
#include "Window.h"
#include "Shader.h"
#include "Swapchain.h"
// Global Objects
VertexBuffer VBO;
InputLayout Input_Layout;
Window WindowObj;
Shader ShaderObj;
Swapchain SwapchainObj;
// Global Variables
float ClearColor[4] = { 0.0f, 0.125f, 0.3f, 1.0f }; // red, green, blue, alpha   
// Functions
void Render();
void Draw();

int main(void)
{
  RenderManager::Prepare();
  /* Initialize the library */
  if (!glfwInit())
    return -1;

  /**
   * @brief : Initialize the window
   */
  glfwMakeContextCurrent(WindowObj.getInterface().ID);
  WindowDesc WindowDesc;
  WindowDesc.FileName = "OpenGL Test";
  WindowDesc.Width = 1000;
  WindowDesc.Height = 640;

  WindowObj.Init(WindowDesc);

  /**
   * @brief : Initialize the swap chain
   */
  SwapchainDesc SwapchainObjDesc;
  SwapchainObjDesc.Window = WindowObj.getInterface().ID;
  SwapchainObj.Init(SwapchainObjDesc);

  if (glewInit() != GLEW_OK)
  {
    std::cout << "Error" << std::endl;
    //mfOutputLOG("Tutorial07", "glewInit()", "Glew cant Initializated.");
  }

  float Positions[6] = {
 -0.5f, -0.5f,
  0.0f,  0.5f,
  0.5f, -0.5f
  };
  /**
   * @brief : Set Vertex Buffer
   */
  VertexBufferDesc VBO_Desc;
  VBO_Desc.BindFlag = GL_ARRAY_BUFFER;
  VBO_Desc.DataSize = 6 * sizeof(float);
  VBO_Desc.Data = Positions;
  VBO_Desc.Usage = GL_STATIC_DRAW;
  VBO.Init(VBO_Desc);

  /**
   * @brief : Set Input Layout
   */
  glEnableVertexAttribArray(0);
  InputLayoutDesc Input_LayoutDesc;
  Input_LayoutDesc.ShaderIndex = 0;
  Input_LayoutDesc.Size = 2;
  Input_LayoutDesc.Format = GL_FLOAT;
  Input_LayoutDesc.Normalized = GL_FALSE;
  Input_LayoutDesc.stride = sizeof(float) * 2;
  Input_LayoutDesc.Pointer = 0;
  Input_Layout.Init(Input_LayoutDesc);

  VBO.Unbind();
  /**
   * @brief : Set Vertex and Pixel Shader   
   */
  string VS =
    "#version 330 core\n"
    "\n"
    "layout(location = 0) in vec4 position;\n"
    "\n"
    "void main()\n"
    "{\n"
    "   gl_Position = position;\n"
    "}\n";

  string PS =
    "#version 330 core\n"
    "\n"
    "layout(location = 0) out vec4 albedo;\n"
    "\n"
    "void main()\n"
    "{\n"
    "   albedo = vec4( 1.0, 1.0, 0.0, 1.0 );\n"
    "}\n";

  unsigned int shader = ShaderObj.CreateShader(VS, PS);
  glUseProgram(shader);

  /* Loop until the user closes the window */
  while (!glfwWindowShouldClose(WindowObj.getInterface().ID))
  {
    Render();    
  }
  glfwTerminate();
  RenderManager::ShutDown();
  return 0;
}

void Render()
{
  RenderManager::getSingleton().ClearRenderTargetView(ClearColor);
  Draw();

  SwapchainObj.Present();
  /* Poll for and process events */
  glfwPollEvents();
}


void Draw()
{
  RenderManager::getSingleton().DrawIndexed(3, 0);
}