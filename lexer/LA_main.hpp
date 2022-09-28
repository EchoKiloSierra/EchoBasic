#include <iostream> #include <string>
#include <fstream>
#include <utility>

class Lexer_Main
{
	public:

		void _lex(std::string input_file);

		void triggerNext_Token();

		std::pair <Token::Type,std::string> tokenPair;	

	private:
		
		File_Handle file;

		Token token;

		std::string tokenValue;

		Lexer_Lex lexer;

};

class Lexer_Lex
{
	public:

		void lexString(std::string fileCont);
	

	private:

		std::pair <Token::Type,std::string> tokenPair;	

		Token token;

		str::string tokenValue;

};

struct Token
{
	public:

		enum class Type
		{
			_keyWord,  // if, else, while, for, return, break
				   /* * */
			_accMod,   // public, private
				   /* * */
		        _operator, // {}, [], (), +, -, /, *, %, .
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

};


class File_Handle
{

	public: 

		std::string getFileCont(std::ifstream file);

};

