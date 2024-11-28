#pragma once
#include<string>
#include<glm/glm.hpp>
class Creature
{
private:
	std::string name;
	int COUNTRY_ID,HOUSE_ID,GROUP_ID,LEADER_ID;//GROUP_ID give to us opportunity to attach creature to area work 
	unsigned int experience, health;
	glm::vec3 position;
    float speed, satinity, thirst, money, salary;
	bool isAlive = true;
	std::string texture;
public:
	Creature(std::string n, glm::vec3 p, float s,float sa,float th) : name(n), position(p), speed(s),satinity(sa),thirst(th) {}
	void Move(glm::vec3 to) 
	{
		float time = 0;
		glm::vec3 direction = glm::normalize(to - position);
		while (glm::length(direction) != 0)
		{
			direction = glm::normalize(to - position);
			position += direction * speed * time;
			time += 1.f;
		}
	}
	void Kill(bool IsExplosion = false)
	{
		if (satinity <= 0.f || thirst <= 0.f || health <= 0 || IsExplosion == true)
		{
			isAlive = false;
		}
	}
	void UpdateData()//in param UpdateData we are going to add class Time every Moth or Week actually we can update data and Tax system
	{
		satinity -= 0.1;
		thirst -= 0.1;
		//money += salary * TaxSystem.GetTax();
		Kill();
	}
	void SetGROUP_ID(int NEW_GROUP_ID)
	{
		GROUP_ID = NEW_GROUP_ID;
	}
	void SetSpeed(float new_speed)
	{
		speed = new_speed;
	}
	void SetSalary(float s)
	{
		salary = s;
	}
};