#include <string>

using namespace std;

class Tokenizer
{
public:
	void tokenize(string str);

	enum class TOKEN
	{
		_keyword,
		_identifier,
		_number,
	};

};
