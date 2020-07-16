#include<iostream>

using namespace std;

void change(int* p1,int* p2)
{
    int m;    //do not define pointer because we want to change value not address
    m=*p1;
    *p1=*p2;   //must puls *
    *p2=m;
    cout<<*p1<<" "<<*p2<<endl;

}
int main()
{
    int i1=1;
    int i2=2;
    change(&i1,&i2);
    system("pause");
    return 0;
}