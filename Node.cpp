//#include"pch.h"
#include<iostream>
#include<string>
#include<vector>
#include "bits.h" 
using namespace std;

// maximum number of words in dict[] 
#define MAXN 100 
																								#define TOL  2 
// defines maximum length of a word 
#define LEN 10 

class Node
{
public:
	// stores the word of the current Node 
	string word;

	// links to other Node in the tree 
	int next[2 * LEN];

	// constructors 
	Node(string x) :word(x)
	{
		// initializing next[i] = 0 
		for (int i = 0; i < 2 * LEN; i++)
			next[i] = 0;
	}
	Node() {}
};
