#include "Sales_item.hpp"
#include<iostream>
using namespace std;
int main()
{
Sales_item item;
cout<<"Enter some transactions:"<<endl;
while(item.input(cin))
{
cout<<"The transaciton readed is:"<<endl;
item.output(cout);
cout<<endl;
}
return 0;
}
