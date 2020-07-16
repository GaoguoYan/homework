#include<iostream>

using namespace std;

int main()
{
    int aCnt=0;
    int eCnt=0;
    int iCnt=0;
    int oCnt=0;
    int uCnt=0;
    char ch;
    while(cin >> ch)
    {
        switch(ch)
        {
            case 'a':
                ++aCnt;
                break;
            case 'A':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'E':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
             case 'I':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
             case 'O':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
             case 'U':
                ++uCnt;
                break;           
        }
    }
    cout <<"Number of vowel a: "<< aCnt<<endl;
    cout <<"Number of vowel e: "<< eCnt<<endl;
    cout <<"Number of vowel i: "<< iCnt<<endl;
    cout <<"Number of vowel o: "<< oCnt<<endl;
    cout <<"Number of vowel u: "<< uCnt<<endl;
    system("pause");
    return 0;
}