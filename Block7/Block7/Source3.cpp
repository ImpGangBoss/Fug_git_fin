/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	cout << "Enter a line of text: ";
	getline(cin, word);

	for (int i = 0; i < word.length(); ++i)
		if (word[i] != word[i] + 1 && word[i] == ' ')
			word[i + 1] = toupper(word[i + 1]);
		else if (word[i] != ' ' && i == 0)
			word[i] = toupper(word[i]);

	cout << word;

	system("pause >> void");
	return 0;
}
*/