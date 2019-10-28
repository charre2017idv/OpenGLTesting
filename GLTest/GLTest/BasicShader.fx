#shader vertex
#version 330 core

layout(location = 0) in vec4 position;

void main()
{
   gl_Position = position;
};

#shader pixel
#version 330 core

layout(location = 0) out vec4 albedo;

void main()
{
   albedo = vec4( 1.0, 1.0, 0.0, 1.0 );
};