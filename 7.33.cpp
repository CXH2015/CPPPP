#include<iostream>
#include "Sales_item.hpp"
using namespace std;
int main()
{
Sales_item total,trans;
cout<<"Enter some transactions:"<<endl;
if(total.input(cin)){
while(trans.input(cin)){
if(total.same_isbn(trans)) total.add(trans);
else {
total.output(cout)<<endl;
total=trans;
}
}
total.output(cout)<<endl;
}
else{
cout<<"Nodata"<<endl;
return -1;
}
return 0;
}
