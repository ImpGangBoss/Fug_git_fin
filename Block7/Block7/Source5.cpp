
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int WordCounter(string word) 
{
	int word_counter = 0;
	string temp_word;

	for (auto i : word)
	{
		if (i != ' ')
			temp_word += i;
		else if (temp_word.length() != 0)
		{
			word_counter++;
			temp_word = "";
		}
	}

	if (word[word.length() - 1] != ' ')
		++word_counter;

	return word_counter;
}

int main(int argc, char** argv)
{

	for (int i = 1; i < argc; ++i)
	{
		if (strcmp(argv[i], "-h") == 0)
		{
			cout << ":INFO" << endl;
			cout << "This program show number of word in entered line" << endl;

			return 0;
		}
		else if (strcmp(argv[i], "-c") == 0)
		{
			int word_counter = 0;

			for (int j = i; j < argc; ++j)
					++word_counter;

			cout << word_counter - 1 << endl;

			//cout << WordCounter(word) << endl;

			return 0;
		}
	}

	string word;
	cout << "Enter a line of text: ";
	getline(cin, word);

	cout << WordCounter(word) << endl;

	system("pause >> void");
	return 0;
}
