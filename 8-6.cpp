#include<iostream>
#include"get.hpp"
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string fileName;
	cout<<"Enter file name:"<<endl;
	cin>>fileName;
	ifstream ifile(fileName.c_str());
	if(!ifile)
	{
		cerr<<"error:can not open input file:"<<fileName<<endl;
		return -1;
	}
	get(ifile);
	return 0;
}
