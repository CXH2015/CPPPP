#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
void func(string filename,vector<string>& vecs)
{
ifstream ifile(filename.c_str());
if(!ifile)
cerr<<"error"<<endl;
string s;
while(getline(ifile,s))        //while(ifile>>s)
{
vecs.push_back(s);
}
}
			
int main()
{
string filename;
cout<<"Enter file name:"<<endl;
cin>>filename;
vector<string> vecs;
func(filename,vecs);
for(vector<string>::iterator ite=vecs.begin();ite!=vecs.end();++ite)
cout<<*ite<<endl;
return 0;
}
