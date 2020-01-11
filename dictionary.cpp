#include "dictionary.h"
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

bool dictionary::load()
{
	fstream f;
	f.open(dict, ios::in);
	if (!f.is_open())
	{
		return false;
	}

	root = new tree;
	string str;

	while (!f.eof())
	{
		f >> str;
		root->add(str);
	}

	f.close();
	return true;
}

bool dictionary::check(string word)
{
	return root->searchtree(word, 0);
}


void dictionary::unload(void)
{
	root->deletetree();
}





// add word in tree
void tree::add(string s)
{
	tree* trav = this;
	for (int i = 0; i < s.length(); i++)
	{
		int pos = tolower(s[i] - 'a');
		if (trav->pointers[pos] == NULL)
			trav->pointers[pos] = new tree;
		trav = trav->pointers[pos];
	}

	trav->value = true;
}

//
bool tree::searchtree(string word, int i)
{
	if (i == word.length())
		return value;
	if (pointers[tolower(word[i]) - 'a'] == NULL)
		return false;
	return pointers[tolower(word[i]) - 'a']->searchtree(word, i + 1);
}

// deallocate tree
void tree::deletetree()
{
	for (int i = 0; i < 26; i++)
	{
		if (pointers[i] != NULL)
			pointers[i]->deletetree();
	}
	delete this;
}

