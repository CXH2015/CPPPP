#include<iostream>
#include<vector>
using namespace std;
int ia[]={8,2,3};
static int res=0;
int sum(vector<int>::iterator begin, vector<int>::iterator end,int n)
{
while(n>0&&begin!=end)
{
res+=*begin++;
n--;
}
return res;   
}

int main()
{
int *p=ia;
cout<<*p<<endl;
p++;
cout<<*p<<endl;
*p=0;
cout<<*p<<endl;
cout<<"Enter(double) n: "<<endl;
double n;
cin>>n;
cout<<"Enter the numbers in vector: "<<endl;
vector<int> vec;
int ival=0;
while(cin>>ival)
vec.push_back(ival);
cout<<"sum = "<<sum(vec.begin(),vec.end(),n)<<endl;

return 0;
}
