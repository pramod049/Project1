#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <assimp/Importer.hpp>
#include <assimp/postprocess.h>
#include <assimp/scene.h>

int main() {
	std::cout << "looks good to me " << std::endl;
	glm::vec3 glmVec3(0.2f, 0.3f, 0.4f);
	std::cout << glmVec3.x << "  " << glmVec3.y << "  " << glmVec3.z << std::endl;	
	std::cout << "checking for assimp here" << std::endl;
	const std::string path = "resources/3D_Model/girl.obj";
	Assimp::Importer importer;
	const aiScene* scene = importer.ReadFile(path, aiProcess_Triangulate | aiProcess_GenSmoothNormals | aiProcess_CalcTangentSpace);
	if (!scene || !scene->mRootNode || AI_SCENE_FLAGS_INCOMPLETE) {
		std::cout << "NOT SURE WHAT HAPPENED BUT I THINK SCENE IS EMPTY BECAUSE IT FAILED TO LOAD THE MODEL SINCE I JUST GAVE THE EMPTY ADDRESS" << std::endl;
	}std::cout << "thats all i guess" << std::endl;

	
	return 0;
}