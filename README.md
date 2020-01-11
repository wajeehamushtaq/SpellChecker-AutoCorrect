# Spell checker and auto correct

## Description
Spell checker and auto corrector Project, which lets you check the spelling of words which stored in your tree and if spellings are incorrect it auto corrects the spelling of word and store in the dictionary.txt file. The technology used in this project is C++ language using Tree class. Software use in this project is Visual Studio Community.

## Modules:
* bool load()
This is used to load the words from the file to memory.Returns true if the operation is successful, else false.

* bool unload()
This is used to free the memory used by the tree data structure.

* bool check(string word)
This checks the given word in the dictionary file. It returns true if present else false

* void test(string word)
Function to check all conditions in below function to correct the word.

* void add(Node& root, Node& curr)
Function to add new word in tree.

* string getSimilarWords(Node& root, string& s)
Function to check similar words in tree

* int incorrectArrangement(string &input)
Function to show the correct spelling if arrangement of word is incorrect.
	
* int exchangedCharacters(string &input)
Function to show correct spelling if extra character is present in the given word
	
* int missingCharacter(string &input)
Function to show correct spelling when there is a missing character in the given word.
	
* int extraCharacter(string &input)
Function to show correct spelling of there is an extra character in given word.
	
* int mixedExtraMissing(string &input)
Function to show right spelling when given word has wrong extra character and right one is missing.
	
* void writefile()
Write words to custom created file.

* void PrintNodes()
Function to print correct words on screen.
