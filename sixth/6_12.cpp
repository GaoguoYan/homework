#include<iostream>

using namespace std;

void change(int &i, int &j)
{
    int n;
    n=i;
    i=j;
    j=n;
}
int main()
{
    int a=1,b=2;
    change(a,b);
    cout<<a<<" "<<b<<endl;
    system("pause");
    return 0;
}