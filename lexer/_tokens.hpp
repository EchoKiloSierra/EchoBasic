#include <string>
#include <utility>

using namespace std;

class _tokens
{
public:
	void tokenize(string str);
		
	enum class TOKEN
	{
		 keyword_,
		 identifier_,
		 number_,

	};

	pair <_tokens::TOKEN, string> _passToken; 
};
