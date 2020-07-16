#include<iostream>

using namespace std;

int main()
{
    int vowelCnt=0;
    char ch;
    while(cin >> ch)
    {
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        ++vowelCnt;
    cout << "Number of vowel: " << vowelCnt<<endl;
    system("pause");
    return 0;
    }
}