#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s{"Hello World"};
    for(auto it = s.begin(); it != s.end();++it)
    {
        *it = toupper(*it);
    }
    cout << s << endl;
    system("pause");
    return 0;
}