#include <sstream>

#include "LA_main.hpp"

std::string File_Handle::getFileCont(std::ifstream file) 
{
	
	std::ifstream input_File(file);
	std::string fileCont;

	if(input_File) 
	{
		std::ostringstream contStream;
		contStream << input_File.rdbuf(); // reads file contents into sstream buffer	
		fileContents = contStream.str();  // converts sstream buffer to string
		
		return fileContents;

	}
       	else 
	{ 
		return null;
	}
}
