#include<iostream>

using namespace std;

void compare(int i, int* p)
{
    if(i>*p)
        cout<<i<<endl;
    else
    {
        cout<<*p<<endl;
    }
    
}
int main()
{
    int i=1;
    int* p;
    *p=2;
    compare(i,p);
    system("pause");
    return 0;

}