#include<iostream>
#include<string>
#include<deque>
#include<list>
using namespace std;
int main()
{
list<int> l1;
int input=0;
cout<<"Enter the member of list (int)"<<endl;
while(cin>>input)
l1.push_back(input);
list<int>::iterator ite;
ite=l1.begin();
deque<int> d1;
deque<int> d2;
for(list<int>::iterator iter=l1.begin();iter!=l1.end();++iter)
{
if((*iter)%2)
d1.push_back(*iter);
else d2.push_back(*iter);
}
cout<<"d1: ";
for(deque<int>::iterator dite=d1.begin();dite!=d1.end();++dite)
cout<<*dite<<" ";
cout<<endl;
cout<<"d2: ";
for(deque<int>::iterator dite=d2.begin();dite!=d2.end();++dite)
cout<<*dite<<" ";
cout<<endl;
return 0;
}
