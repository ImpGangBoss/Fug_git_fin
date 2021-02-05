/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word,
		check_word = "aouiey";
	cout << "Enter a word: ";
	getline(cin, word);

	for (auto &i : word)
		for (auto j : check_word)
			if (i == j)
				i = '_';
	
	cout << word;

	system("pause >> void");
	return 0;
}
*/