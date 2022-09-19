#include <iostream>
#include <cstring>
#include <string>
#include <utility>

#include "tokenizer.h"

using namespace std;

int main() 
{
	Tokenizer tok;

	tok.tokenize("3+4-6*5");

	return 0;
}


void Tokenizer::tokenize(string str)
{

	pair<const char*, int> passPAIR;

	char strArray[str.length() + 1];
	strcpy(strArray, str.c_str());
	
	string convStr = "";

	for(int i = 0; i < str.length(); i++)
	{ 
		convStr = strArray[i];
	
		

		switch(strArray[i])
		{
			case '0': passPAIR.first = {"_number"};
				  passPAIR.second = stoi(convStr);
				  break;
			case '1': passPAIR.first = {"_number"};
				  passPAIR.second = stoi(convStr);
				  break;
			case '2': passPAIR.first = {"_number"};
				  passPAIR.second = stoi(convStr);
				  break;
			case '3': passPAIR.first = {"_number"};
				  passPAIR.second = stoi(convStr);
				  break;	
			case '4': passPAIR.first = {"_number"};
				  passPAIR.second = stoi(convStr);
				  break;		
			case '5': passPAIR.first = {"_number"};
				  passPAIR.second = stoi(convStr);
				  break;	
			case '6': passPAIR.first = {"_number"};
				  passPAIR.second = stoi(convStr);
				  break;		
			case '7': passPAIR.first = {"_number"};
				  passPAIR.second = stoi(convStr);
				  break;	
			case '8': passPAIR.first = {"_number"};
				  passPAIR.second = stoi(convStr);
				  break;	
			case '9': passPAIR.first = {"_number"};
				  passPAIR.second = stoi(convStr);
				  break;	
	  			  
				  
/*			case '+': tokenList[i] = 'O';
				  break;
			case '-': tokenList[i] = 'O';
				  break;
			case '*': tokenList[i] = 'O';
				  break;
			case '/': tokenList[i] = 'O';
				  break;	*/

			default: break;
		}

	}

}
