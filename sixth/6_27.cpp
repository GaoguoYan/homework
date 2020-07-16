#include<iostream>
#include<initializer_list>

using namespace std;

void sum(initializer_list<int> li)
{
    int sum=0;
    for(auto beg=li.begin();beg!=li.end();++beg)
    {
        sum+=(*beg);
    } 
    cout<<sum<<endl;
}
int main()
{
    initializer_list<int> i{1,2,3};
    sum(i);
    system("pause");
    return 0;
}