#include<iostream>
using namespace std;
bool checkPalindrome(string st){
    int i=0,j=st.length()-1;
    while(i<j){
        if(st[i] == st[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    string st;
    getline(cin,st);
    if(checkPalindrome(st)){
        cout<< st << " is a Palindrome String";
    }
    else{
        cout<< st << " is not a Palindrome String";
    }
    return 0;
}
