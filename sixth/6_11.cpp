#include<iostream>

using namespace std;

void reset(int &i)
{
    i=0;
}
int main()
{
    int j=40;
    reset(j);
    cout<<j<<endl;
    system("pause");
    return 0;
}