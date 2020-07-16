#include<fstream>
#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    vector<string> s;
    ifstream infile("d:/code/vscode/test/c++/eighth/tmp.txt",ifstream::in);
    if(infile.fail()) cout<<"can't open file"<<endl;
    string sin;
    while(getline(infile,sin,'\n'))
    {
        cout<<sin<<endl;
        istringstream strm(sin);
        string word;
        while(strm >> word)
        {
            cout<<word<<endl;
        }
        
        s.push_back(sin);
    }
    infile.close();
   
    cout<<"run end"<<endl;
    system("pause");
    return 0;  

}