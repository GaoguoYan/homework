#include<iostream>
#include<string>
#include<ctype.h>

using namespace std;

string make_plural(const string& word,const string& ending="s")
{
    return  word+ending;
}
int main()
{
    cout<<"please a string"<<endl;
    string s;
    cin>>s;
    cout<< make_plural(s);
    system("pause");
    return 0;
    
}