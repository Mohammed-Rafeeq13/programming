#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(char ch[]){
    int n=strlen(ch);
    int i=0,j=n-1;
    while(i<j){
        if(ch[i] == ch[j]){
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
    char ch[100];
    cin. getline(ch, 100);
    if(checkPalindrome(ch)){
        cout<<ch<<" is Palindrome String";
    }
    else{
        cout<<ch<<" is not Palindrome String";
    }
}
