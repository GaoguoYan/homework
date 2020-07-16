#include<iostream>
#include<string>
#include<cctype>

using namespace std;

 int main()
 {
     string s;
     string temp;
     int n = s.size();
	 cout << "input string include punctuation : "<<endl;
     cin >> s;
        
	 for(string::size_type i = 0; i!=s.size(); i++){
		 	if(!ispunct(s[i]))
	 			temp += s[i];
	 }
	cout << temp << endl;
    system("pause");
     return 0;
 }