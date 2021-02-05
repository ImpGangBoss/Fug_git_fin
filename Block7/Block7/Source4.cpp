/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word, the_longest_word, temp_word;
	cout << "Enter a line of text: ";
	getline(cin, word);

	for (auto i : word)
	{
		if (i != ' ')
			temp_word += i;
		else
			temp_word = "";
		if (the_longest_word.length() < temp_word.length())
			the_longest_word = temp_word;
	}

	cout << the_longest_word;

	system("pause >> void");
	return 0;
}
*/