#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile
{
	private:
	
		ifstream input_file;
		bool _eof;
		bool closed;

   
    public:
   
		ReadFile** createReadFile(const char* file_name);	//Creates rf with file_name
		void destroyReadFile(ReadFile* rf);					//Destroys Readfile
		String* readLine(ReadFile* rf);						//Reads line from file and places into a string variable
		bool eof(ReadFile* rf);								//Searches rf for the end of the file
		void close(ReadFile* rf);							//Closes file at end of loop
		ReadFile(ReadFile* rf);								//Constructor accepts the ReadFile used to create a file
		~ReadFile();										//Destructor does not delete the file
   
};



#endif
