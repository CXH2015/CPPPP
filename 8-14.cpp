#include"get.hpp"
#include"open_file.hpp"
#include<iostream>
#include<fstream>
int main()
{
string filename;
cout<<"Enter file name:"<<endl;
cin>>filename;
ifstream ifile;
get(open_file(ifile,filename));
//open_file(ifile,filename);
//get(ifile);
return 0;
}
