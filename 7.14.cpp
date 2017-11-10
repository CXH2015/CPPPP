#include<iostream>
#include<vector>
using namespace std;
double vecsum(vector<double>::iterator begin,
              vector<double>::iterator end)
{
   double sum=0;
   while(begin!=end)
{
     sum=sum+(*begin);
	begin++;
}
return sum;
}
int main()
{
cout<<"Enter double type values:"<<" "<<endl;
double ival=0;
vector<double> vec;
while(cin>>ival)
vec.push_back(ival);
cout<<"result of sum is:"<<endl;
cout<<vecsum(vec.begin(),vec.end())<<endl;
return 0;
}
