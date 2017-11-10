#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> ivec;
int ival;
cout<<"Enter your numbers:"<<endl;
while(cin>>ival)
{
ivec.push_back(ival);
}
cout<<"the results is: "<<endl;
int res=0;
vector<int>::iterator head,tail;
for(head=ivec.begin(),tail=ivec.end()-1;head<tail;head++,tail--)
{
res=*head+*tail;
cout<<res<<" ";
}
cout<<endl;
if(ivec.size()%2==1)
cout<<"the middle one is not been summed"<<endl;
return 0;
}
