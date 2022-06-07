#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "debug.h"
#include "shader.h"
#include "material.h"

Shader default_shader;

int main(){
	InitDebug();
	
	default_shader = ShaderOpen("../assets/default.shader");
	Material default_material = MaterialOpen("../assets/default.mat");

	printf("Tint.v[2] = %f\n", MaterialUniformGet(&default_material, "tint_u")->value._vec3.z);

	MaterialShaderSet(&default_material, &default_shader);
	MaterialShaderPassUniforms(&default_material);

	MaterialReload(&default_material);

	MaterialFree(&default_material);
	ShaderFree(&default_shader);

	DebugLog(D_ACT, "-- DONE-- ");
	QuitDebug();

	getchar();

	return 0;
}