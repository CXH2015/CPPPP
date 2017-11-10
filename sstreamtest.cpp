#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
int val1=512,val2=1024;
ostringstream format_message;
format_message<<"val1: "<<val1<<"\n"
<<"val2: "<<val2<<"\n";
string fm=format_message.str();
cout<<fm<<endl;
istringstream input_istring(format_message.str());
string dump1;
string dump2;
input_istring>>dump1>>val1>>dump2>>val2;
cout<<"val "<<val1<<" "<<val2<<endl;
cout<<"dump "<<dump1<<" "<<dump2<<endl;
return 0;
}
