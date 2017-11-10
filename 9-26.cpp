#include<iostream>
#include<list>
#include<vector>
using namespace std;
int ia[]={0,1,1,2,3,5,8,13,21,55,89};
int main()
{
int size=sizeof(ia)/sizeof(int);
vector<int> vec(ia,ia+size);
vector<int>::iterator viter=vec.begin();
list<int> lec(ia,ia+size);
list<int>::iterator  liter=lec.begin();
for(viter=vec.begin();viter!=vec.end();++viter)
{
if(*viter%2==0)
{
cout<<"erase: "<<*viter<<endl;
vec.erase(viter);
--viter;
}
else
cout<<(*viter)<<endl;
}
cout<<endl;
for(liter=lec.begin();liter!=lec.end();++liter)
{
if(*liter%2)
{
cout<<"erase: "<<*liter<<endl;
lec.erase(liter);
--liter;
}
else 
cout<<*liter<<endl;
}
return 0;
}
