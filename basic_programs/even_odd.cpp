#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter The Number : ";
 cin>>n;
 for(int i=0;i<=n;i++){
  if(n%i==0){
   cout<<n<<" is a Even Number";
  }
  else{
   cout<<n<<" is a Odd Number";
  }
 }
}