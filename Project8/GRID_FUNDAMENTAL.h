#pragma once
#include<glm/glm.hpp>
#include<string>
class GRID_FUNDAMENTAL
{
private:
	std::string name;
	std::string texture;
	glm::vec3 position; //z is height
	float temperature;
	bool IsCollide,IsExploeded;
public:
	std::string GetName() { return name; }
	glm::vec3 GetPosition() { return position; }
};

