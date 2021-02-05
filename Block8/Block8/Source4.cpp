/*
#include <iostream>
#include <vector>
#include <math.h>

class Dot
{
public:
	Dot();
	Dot(int x, int y);
	void SetDot(Dot dot);
	int GetX();
	int	GetY();

private:
	int x, y;
};

Dot::Dot()
{
	this->x = 0;
	this->y = 0;
}

Dot::Dot(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Dot::SetDot(Dot dot)
{
	this->x = dot.x;
	this->y = dot.y;
}

int Dot::GetX() { return this->x; }

int Dot::GetY() { return this->y; }

class Segment : public Dot
{
public:
	Segment();
	Segment(Dot dot1, Dot dot2);
	float GetLength();

private:
	std::vector<Dot> dots_list;
};

Segment::Segment()
{
	this->dots_list.push_back(Dot(0, 0));
	this->dots_list.push_back(Dot(1, 1));
}

Segment::Segment(Dot dot1, Dot dot2)
{
	this->dots_list.push_back(dot1);
	this->dots_list.push_back(dot2);
}

float Segment::GetLength()
{
	std::unique_ptr<Dot> dot1(new Dot), dot2(new Dot);

	dot1->SetDot(this->dots_list[0]);
	dot2->SetDot(this->dots_list[1]);

	return sqrt(pow(dot1->GetX(), 2) + pow(dot1->GetY(), 2) + pow(dot2->GetX(), 2) + pow(dot2->GetY(), 2));
}

class Triangle : public Segment
{
public:
	Triangle();
	Triangle(Segment side1, Segment side2, Segment side3);
	float GetP();

private:
	std::vector<Segment> triangle;
};

Triangle::Triangle()
{
	this->triangle.push_back(Segment(Dot(0, 0), Dot(1, 0)));
	this->triangle.push_back(Segment(Dot(1, 0), Dot(0, 2)));
	this->triangle.push_back(Segment(Dot(0, 2), Dot(0, 0)));
}

Triangle::Triangle(Segment side1, Segment side2, Segment side3)
{
	this->triangle.push_back(side1);
	this->triangle.push_back(side2);
	this->triangle.push_back(side3);
}

float Triangle::GetP()
{
	auto side1 = this->triangle[0],
		side2 = this->triangle[1],
		side3 = this->triangle[2];

	return side1.GetLength() + side2.GetLength() + side3.GetLength();
}

int main()
{
	Dot dot(1, 0);

	std::cout << "X: " << dot.GetX() << " Y: " << dot.GetY() << std::endl;

	Segment line(dot, Dot(0, 2));

	std::cout << "Length: " << line.GetLength() << std::endl;

	Triangle tria(line, Segment(Dot(0, 2), Dot(0, 0)), Segment(Dot(0, 0), Dot(1, 0)));

	std::cout << "Perimeter: " << tria.GetP() << std::endl;

	system("pause >> void");
	return 0;
}
*/