#include<iostream>
using namespace std;
bool isPrime(int n){
 if(n<=1) return false;
 for(int i=2;i<n;i++){
  if(n%i==0){
   return false;
  }
 }
 return true;
}
int main(){
 int n;
 cout<<"Enter The Number : ";
 cin>>n;
 if(isPrime(n)){
  cout<<n<<" is a Prime Number";
 }
 else{
  cout<<n<<" is not a Prime Number";
 }
 return 0;
}