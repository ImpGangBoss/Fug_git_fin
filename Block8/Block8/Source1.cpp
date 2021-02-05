/*
#include <iostream>

class fraction
{
public:
	fraction(int numerator, int denominator);
	bool CheckIfCommon();

private:
	int numerator;
	int denominator;
};

fraction::fraction(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

bool fraction::CheckIfCommon()
{
	if (this->numerator < this->denominator)
		return true;
	return false;
}

int main()                                          
{
	int numerator = 0,
		denominator = 0;

	std::cout << "enter numerator and denominator of your fraction: ";
	std::cin >> numerator >> denominator;

	if (denominator == 0)
	{
		std::cout << "Wrong denominator!" << std::endl;
		system("pause >> void");
		return 0;
	}

	fraction user_fraction (numerator, denominator);

	if (user_fraction.CheckIfCommon())
	{
		std::cout << "its common";

		system("pause >> void");
		return 0;
	}

	std::cout << "it isnt common";

	system("pause >> void");
	return 0;
}
*/