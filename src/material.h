#ifndef MATERIAL_H_
#define MATERIAL_H_

#include "shader.h"

typedef struct Material{
	char *path;
	char *name;

	char *shader_path;
	int shader_id;

	unsigned int num_uniforms;
	ShaderUniformObject *uniforms;
}Material;

/*

	Start by finding the shader (deal with failure case)

	Copy the shader's uniforms over to the material
	(only the exposed uniforms)

	Now uniforms are edited per material.

	When we want to render a mesh with a material, we copy the material's uniforms back to the shader
	and send the uniforms to the shader program (ShaderPassUniforms)


	When reloading a shader, the material also needs to be reloaded to gain access to any new uniforms



	All of the above assumes the uniform array never changes once the shader is loaded in
*/

#endif