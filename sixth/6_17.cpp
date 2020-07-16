#include<iostream>
#include<string>

using namespace std;

void check(const string& s)
{
    for(auto c : s)
    {
        if(isupper(c))
            cout<<"include captial "<<endl;
        else
        {
            cout<<"not include captial"<<endl;
        }
        
    }
}
void change(string& s)
{
    for(auto &c : s)
    {
        c=tolower(c);
    }
    cout<<s<<endl;
}
int main()
{ 
    cout<<"please input a string"<<endl;
    string s;
    cin>>s;
    //check(s);
    change(s);
    system("pause");
    return 0;
}