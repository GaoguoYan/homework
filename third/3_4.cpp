#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    //if(s1==s2)
        //cout << s1 << " and " << s2 <<" are equal" <<endl;
    int s1Size = s1.size();
    int s2Size = s2.size();
    if(s1Size == s2Size)
        cout << s1 << " and "<< s2 <<" have both long"<<endl;
    else if (s1Size > s2Size)
            cout << s1 << endl;
        else cout << s2 << endl;

    system("pause");
    return 0;
}