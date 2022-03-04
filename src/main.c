#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "debug.h"
#include "shader.h"

int main(){
	InitDebug();
	
	// for(int i = 0; i < 20; i++){
		Shader default_shader = ShaderOpen("../assets/default.shader");
		Shader axis_shader = ShaderOpen("../assets/axis.shader");
		Shader grid_shader = ShaderOpen("../assets/grid.shader");
		Shader mask_shader = ShaderOpen("../assets/mask.shader");
		Shader mesh_shader = ShaderOpen("../assets/mesh.shader");
		Shader quad_shader = ShaderOpen("../assets/quad_default.shader");
		Shader ui_shader = ShaderOpen("../assets/ui.shader");



		ShaderFree(&default_shader);
		ShaderFree(&axis_shader);
		ShaderFree(&grid_shader);
		ShaderFree(&mask_shader);
		ShaderFree(&mesh_shader);
		ShaderFree(&quad_shader);
		ShaderFree(&ui_shader);
	// }

	DebugLog(D_ACT, "-- DONE-- ");
	QuitDebug();

	// getchar();

	return 0;
}