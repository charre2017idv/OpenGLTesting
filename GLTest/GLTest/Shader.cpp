#include "Shader.h"



Shader::Shader()
{
}


Shader::~Shader()
{
}

unsigned int Shader::CreateShader(string & _VertexShader, string & _PixelShader)
{
  unsigned int program = glCreateProgram(); // This function return an unsigned int
  unsigned int VShader = CompileShaderFromFile(GL_VERTEX_SHADER, _VertexShader);		// Assigns an id to the Vertex shader 
  unsigned int PShader = CompileShaderFromFile(GL_FRAGMENT_SHADER, _PixelShader);		// Assigns an id to the Pixel shader

  glAttachShader(program, VShader);	// Attach the Vertex shader to the created program
  glAttachShader(program, PShader);	// Attach the Pixel shader to the created program

  glLinkProgram(program);
  glValidateProgram(program);

  glDeleteShader(VShader); // Delete the Vertex Shader
  glDeleteShader(PShader); // Delete the Pixel Shader

  return program;
}

unsigned int Shader::CompileShaderFromFile(unsigned int _Type, const string & _Source)
{
  unsigned int id = glCreateShader(_Type);
  const char* src = _Source.c_str();
  glShaderSource(id, 1, &src, nullptr);
  glCompileShader(id);

  int result;
  glGetShaderiv(id, GL_COMPILE_STATUS, &result);
  if (result == GL_FALSE)
  {
    int length;
    glGetShaderiv(id, GL_INFO_LOG_LENGTH, &length);
    char* message = (char*)alloca(length * sizeof(char));
    glGetShaderInfoLog(id, length, &length, message);
    cout << "(!) Failed to compile " << (_Type == GL_VERTEX_SHADER ? "Vertex" : "Pixel") << " shader." << endl;
    cout << message << endl;
    glDeleteShader(id);
    return 0;
  }
  // Error Handling

  return id;
}

ShaderSources Shader::ParseShader(const string & filepath)
{
  ifstream stream(filepath);

  enum class ShaderType
  {
    NONE = -1, VERTEX = 0, FRAGMENT = 1
  };

  ShaderType type = ShaderType::NONE;
  string line;
  stringstream ss[2];

  while (getline(stream, line))
  {
    if (line.find("#shader") != string::npos)
    {
      if (line.find("vertex") != string::npos)
      {
        // Set Mode to vertex
        type = ShaderType::VERTEX;
      }
      else if (line.find("pixel") != string::npos)
      {
        // Set Mode to vertex
        type = ShaderType::FRAGMENT;
      }
    }
    else
    {
      ss[(int)type] << line << '\n';
    }
  }

  return { ss[0].str(), ss[1].str() };
}