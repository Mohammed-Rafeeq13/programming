#include<bits/stdc++.h>

using namespace std;

int main(){

 // string define

 string s;

 // string define and intialize

 string s1 = "Hello";

 cout<< s1 << endl;

 // way 2 to define and intialize the string

 string s2(s1);

 cout<< s2 <<endl;

 // way 3 to define and intialize the string

 string s3 = s1;

 cout<< s3 << endl;



 // updation of the string

 s1 = "Hello World Kaise Ho";

 cout<< s1 <<endl;



 // concatenation means adding two strings

 string x = "India";

 string y = "Bharat";

 x = x + " " + y;

 cout<< x << endl;



 // Finding the specfic index of the String

 cout << s1[10] <<endl;

 // Another method to find a particular word in the string

 string st = "World";

 int idx = s1.find(st);

 cout << s1.find(st)<<endl;



 // Finding the length of the String

 cout<< s1.length() << endl;



 // Traversing in the string 

 for(int i=0;i<s1.length();i++){

  cout<<"string Index "<<i<<" Value is : "<<s1[i]<<endl;

 }



 // Erase a word string

 s1.erase(idx,st.length()+1);

 cout<< s1 << endl;



 return 0;

}
