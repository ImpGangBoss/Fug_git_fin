/*
#include <iostream>

class Vector
{
public: 
	Vector(int x, int y);
	friend Vector operator +(const Vector& vector1, const Vector& vector2);
	friend Vector operator -(const Vector& vector1, const Vector& vector2);
	int GetX();
	int GetY();

private:
	int x, y;
};

Vector::Vector(int x, int y)
{
	this->x = x;
	this->y = y;
}

Vector operator +(const Vector& vector1, const Vector& vector2)
{
	return Vector(vector1.x + vector2.x, vector1.y + vector2.y);
}

Vector operator -(const Vector& vector1, const Vector& vector2)
{
	return Vector(vector1.x - vector2.x, vector1.y - vector2.y);
}

int Vector::GetX() { return x; }

int Vector::GetY() { return y; }

int main()
{
	int x1 = 0,
		x2 = 0,
		y1 = 0,
		y2 = 0;

	std::cout << "Enter your two vectors: ";
	std::cin >> x1 >> y1 >> x2 >> y2;

	Vector vector1(x1, y1);
	Vector vector2(x2, y2);

	std::cout << "Vector1: ";
	std::cout << " x: " << vector1.GetX() << " y: " << vector1.GetY() << std::endl;
	std::cout << std::endl;
	std::cout << "Vector2: ";
	std::cout << " x: " << vector2.GetX() << " y: " << vector2.GetY() << std::endl;
	std::cout << "Vector1 + Vector2: ";
	std::cout << " x: " << (vector1 + vector2).GetX() << " y: " << (vector1 + vector2).GetY() << std::endl;
	std::cout << "Vector1 - Vector2: ";
	std::cout << " x: " << (vector1 - vector2).GetX() << " y: " << (vector1 - vector2).GetY() << std::endl;

	system("pause >> void");
	return 0;
}
*/