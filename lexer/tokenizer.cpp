#include <iostream>
#include <cstring>
#include <string>
#include "tokenizer.h"

using namespace std;

int main() 
{
	Tokenizer tok;

	tok.tokenize("3+4-6*5");

	return 0;
}


char* Tokenizer::tokenize(string str)
{

	char tokenList[str.length()];

	char strArray[str.length() + 1];
	strcpy(strArray, str.c_str());
	
	for(int i = 0; i < str.length(); i++)
	{ 
		switch(strArray[i])
		{
			case '0': tokenList[i] = 'N';
				  break;
			case '1': tokenList[i] = 'N';
				  break;
			case '2': tokenList[i] = 'N';
				  break;
			case '3': tokenList[i] = 'N';
				  break;
			case '4': tokenList[i] = 'N';
				  break;
			case '5': tokenList[i] = 'N';
				  break;
			case '6': tokenList[i] = 'N';
				  break;		
			case '7': tokenList[i] = 'N';
				  break;
			case '8': tokenList[i] = 'N';
				  break;
			case '9': tokenList[i] = 'N';
				  break;
			
				  
			case '+': tokenList[i] = 'O';
				  break;
			case '-': tokenList[i] = 'O';
				  break;
			case '*': tokenList[i] = 'O';
				  break;
			case '/': tokenList[i] = 'O';
				  break;

			default: break;
		}

	}

	cout << tokenList;

	// returns char* of tokens
}
