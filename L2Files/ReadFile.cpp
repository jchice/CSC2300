#include "ReadFile.h"
#include <iostream>
#include <string>

ReadFile::ReadFile()
{
	file_name = ReadFile;
	
	return file_name;
}

ReadFile::ReadFile createReadFile(const char* file_name)
{
   ReadFile* rf = new ReadFile;

   rf->input_file.open(file_name);
   rf->closed = false;
   rf->_eof = false;

   return rf;
}

void ReadFile::destroyReadFile(ReadFile* rf)
{
   close(rf);
   delete rf;
}

bool ReadFile::eof(ReadFile* rf)
{
   return rf->_eof;
}

void ReadFile::close(ReadFile* rf)
{
   if (!rf->closed)
   {
      rf->input_file.close();
      rf->closed = true;
   }
   
String* ReadFile:: readLine(ReadFile* rf)
{
   if (rf->closed) return NULL;
   if (rf->_eof) return NULL;

   string text;
   rf->_eof = !(getline(rf->input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
