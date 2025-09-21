#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subarray(int arr[],int n){
    int maxi= INT_MIN;
    // int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum=sum+arr[k];
                // cout<<arr[k]<<' ';
            }
            if(maxi<sum){
                maxi=sum;
            }
            // cout<<endl;
        }
    }
    cout<<"Maxi is : "<<maxi;
}
int main(){
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    subarray(arr,n);
    return 0;
}