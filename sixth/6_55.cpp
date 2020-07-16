#include<iostream>
#include<vector>

using namespace std;

//have a bug

int sum(vector<int>::iterator, vector<int>::iterator);

int (*p)(vector<int>::iterator, vector<int>::iterator) 
    =sum;
                
int ponter(vector<int>::iterator beg, vector<int>::iterator end)
{
    int sum=0;
    while(beg!=end)
    {
        sum=sum+(*beg);
        ++beg;
    }
    cout<<sum<<endl;
}

int main()
{
    vector<int> v{1,2,3};

    p(v.begin(),v.end());

    system("pause");
    return 0;
}