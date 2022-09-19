#include <string>

using namespace std;

class Tokenizer
{
public:
	char* tokenize(string str);

	enum class TOKEN
	{
		_keyword,
		_identifier,
		_number,
	};

};
