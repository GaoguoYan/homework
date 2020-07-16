#include<iostream>

using namespace std;

void change(int *p1,int *p2)
{
    int n;
    n=*p1;
    p1=p2;
    p2=&n;
}
int main()
{
    int a=1,b=2;
    change(&a,&b);
    cout<<a<< " " <<b<<endl;
    system("pause");
    return 0;
}