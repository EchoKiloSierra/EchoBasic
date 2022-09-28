#include <iostream>
#include <string>
#include <fstream>
#include <utility>

class Lexer_Main
{
	public:

		void _lex();

		enum class lexer_tokens 
		{
			_keyWord,  // if, else, while, for, return, break
				   /* * */
			_accMod,   // public, private
				   /* * */
		        _operator, // {}, [], (), +, -, /, *, %
				   /* * */
		 	_dataType, // int, char, string, void, class, enum
				   /* * */
			_ident,    // Any identifier specified after a datatype 
				   /* * */
			_charStr,  // Any string of characters in double quotes
				   /* * */
			_number,   // Any number, integer or float
				   /* * */
			_char 	   // Any character in single quotes
		};

	private:

	std::pair <Lexer_Main::lexer_tokens, std::string> tokenPair;	

};


class File_Handle
{
	public: 

		std::string getFileCont(std::ifstream file);

};

