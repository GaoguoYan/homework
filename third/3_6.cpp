#include<iostream>
#include<string>
#include<cctype>

using namespace std;

 int main()
 {
     string s;
     char x='X';
     cin  >> s;
     for(auto &c : s)
        //c = toupper(c);
        c = x;
    cout << s << endl;
    system("pause");
    return 0;
 }