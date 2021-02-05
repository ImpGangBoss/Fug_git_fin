/*
#include <iostream>
#include <list>
#include <string>

class Animal
{
public:
	Animal();
	Animal(std::string specie, std::string name);
	std::string GetName();
	std::string GetType();

	friend bool operator == (const Animal& animal1, const Animal& animal2)
	{
		if (animal1.name == animal2.name && animal1.specie == animal2.specie)
			return true;
	}

private:
	std::string specie, name;
};

Animal::Animal() {};

Animal::Animal(std::string specie, std::string name)
{
	this->specie = specie;
	this->name = name;
}

std::string Animal::GetType() { return this->specie; }

std::string Animal::GetName() { return this->name; }

class Zoo
{
public:
	~Zoo();
	void AddAnimalToList(Animal& animal);
	void RemoveAnimalFromList(Animal& animal);
	std::list<Animal> GetAnimalList();

private:
	std::list<Animal> animal_list;
};

Zoo::~Zoo() { this->animal_list.clear(); }

void Zoo::AddAnimalToList(Animal& animal) { this->animal_list.push_back(animal); }

void Zoo::RemoveAnimalFromList(Animal& animal) { this->animal_list.remove(animal); }

std::list<Animal> Zoo::GetAnimalList() { return this->animal_list; }
int main()
{
	Animal dog("dog", "1");
	Animal cat("cat", "2");
	Animal horse("horse", "3");
	Animal lion("lion", "4");

	Zoo new_list;

	std::cout << std::endl;

	new_list.AddAnimalToList(dog);
	new_list.AddAnimalToList(cat);
	new_list.AddAnimalToList(horse);
	new_list.AddAnimalToList(lion);

	for (auto i : new_list.GetAnimalList())
		std::cout << i.GetName() << " " << i.GetType() << std::endl;

	std::cout << std::endl;

	new_list.RemoveAnimalFromList(cat);

	for (auto i : new_list.GetAnimalList())
		std::cout << i.GetName() << " " << i.GetType() << std::endl;

	system("pause >> void");
	return 0;
}
*/s