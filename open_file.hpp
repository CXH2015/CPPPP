#ifndef OPEN_FILE
#define OPEN_FILE
#include<fstream>
#include<string>
ifstream& open_file(ifstream &in,const string &file)
{
in.close();
in.clear();
in.open(file.c_str());
return in;
}
#endif 
