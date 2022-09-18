#include <iostream>
#include <string>
#include <regex>

#include "tokenizer.h"

using namespace std;

/*int main()  //TEST FUNCTION
{
	Lexer lex;

	lex.init("Hello, World");
	return 0;
}*/

class Token
{
	enum class Type 
	{
		identifier,
		keyword,
		number,
		char_,
		string_,
		symbol_,
		operator_,
		paren_
	};


	bool isType(Type type, Type checkType)
	{
		return (type == checkType);
	}

	bool isNotType(Type type, Type checkType)
	{
		return(type != checkType);
	}

};

	void Lexer::init(std::string s) 
	{
		string _untokenized_Str = s;
		int str_Len = _untokenized_Str-length()
		int lexPos = 0;

		cout << _string; //TEST FUNCTION
	}
	
	char[] getNextTokenizableObj(string castableString)
	{
		char strConv = new char [str_Len + 1];
		std::strcpy (strConv, castableString);
	
		for(int i = 0; i < str_Len; i++)
	       	{
			
		}

		cout << stringAsChar; //TEST FUNCTION	
		
		char[] nextTokenizableObj;

		return nextTokenizableObj;
	}
	
	
	void identifier()
	{
	}
	void keyword() 
	{
	}
	void number()
	{
	}
	void char_() 
	{
	}
	void string_() 
	{
	}
	void symbol_() 
	{
	}
	void operator_()
	{
	}
	void paren_() 
	{
	}
