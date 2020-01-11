/* Implementation od tree and dictionary class*/
#ifndef dictionary_h
#define dictionary_h
#include<string>
using namespace std;

																											class tree ;
//A class representing dictionary
class dictionary
{
public:
	//contains the file name for text file containing the dictionary
	char* dict;
	tree* root;    //a pointer to the tree
	dictionary(char* file)
	{
		dict = file;
		root = NULL;
	}

	//This is used to load the words from the file to memory. 
	//Returns true if the operation is successful, else false
	bool load();

	//This is used to free the memory used by the tree data structure
	void unload();

	//This checks the given word in the dictionary file
	//returns true if present else false;
	bool check(string word);
};






class tree
{
	bool value;    
	//pointers to the various characters of english alphabet
	tree* pointers[26];    

public:
	tree()
	{
		//initialises all pointers as null
		value = 0;
		for (int i = 0; i < 26; i++)
			pointers[i] = NULL;
	}

	//This function adds a word to the tree
	void add(string s);

	//This function searches a word in the tree
	bool searchtree(string word, int i);

	//This function deletes a word from the triee
	void deletetree();

};

#endif
