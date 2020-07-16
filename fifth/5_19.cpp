#include<iostream>
#include<string>

using namespace std;

int main()
{
    do
    {
        cout <<"please input two string"<<endl;
        string s1,s2;
        cin >>s1 >>s2;
        int s1Size=s1.size();
        int s2Size=s2.size();
        s1Size<s2Size? cout<<"most short string is: "<<s1<<endl:cout<<"most short string is: "<<s2<<endl;
    }
    while(cin);
    system("pause");
    return 0;
}