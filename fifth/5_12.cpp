#include<iostream>
#include<string>

using namespace std;

int main()
{
    int ffCnt=0;
    int flCnt=0;
    int fiCnt=0;
    string s;
    while(cin >> s)
    {
        if(s=="ff")
            ++ffCnt;
        else if(s=="fl")
            ++flCnt;
        else if(s=="fi")
            ++fiCnt;
    }

    cout <<"Number of vowel ff: "<< ffCnt<<endl;
    cout <<"Number of vowel fl: "<< flCnt<<endl;
    cout <<"Number of vowel fi: "<< fiCnt<<endl;
    system("pause");
    return 0;
}