/* Driver program for spell checker and auto correct */

#include <iostream>
#include "dictionary.h"
#include"spell_corrector.cpp"
#include <fstream>
#include <cstdlib>
#include <conio.h>
#define DICTIONARY "dictionary.txt" //put the name of file representing the dictionary here

using namespace std;

/*This function asks the user for a file name and checks that file load*/
void checkfile()
{
	//loading the dictionary from file in the memory
	char p[15] = "dictionary.txt";
	char *d1 = p;
	dictionary d(d1);

	if (!d.load())
	{
		cout << "could not load dictionary";
		return;
	}


	char text[80];  //stores the name of the file to be checked

	cout << "Enter the name of file ";
	cin >> text;

	fstream f;
	f.open(text, ios::in);

	if (!f.is_open())
	{
		cout << "Could not open file\n";
		//free up memory acquired by the dictionary words if the file does not exist
		d.unload();
		cout << "\nFile does not exists!\n";
	}
	else
	cout << "\nDictionary is loaded into memory.\n";
	_getch();
}

/* This funciton adds a word to the dictionary */

void addword()
{
	cout << "Enter the word you wish to add\n";
	string word;
	cin >> word;
	Spell_checker w;
	w.test(word);
	ofstream f;
	f.open(DICTIONARY, ios::app);
	if (!f.is_open())
		cout << "could not open" << DICTIONARY;
	f << word << "\n";

	cout << "Added!";
	_getch();
}

int main()
{
	/* Menu driver */
	while (1)
	{
		system("cls");
		cout << "Enter your choice\n";
		cout << "1. Check a file\n2. Write a file\n3. Add word to dictionary\n4. Exit\n";

		char  choice;

		choice = _getch();
		switch (choice)
		{
		case '1':
			checkfile();
			break;
		case '2':
		{
			Spell_checker t;
			t.writefile();
			break;
		}
		case '3':
		{
			addword();
			break;
		}
		case '4':
			return 0;
		}
	}
	return 0;
}