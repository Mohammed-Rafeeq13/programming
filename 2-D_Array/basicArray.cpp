#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Enter The 2-D Array Elements : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The 2-D Array Elements Are : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"["<<arr[i][j]<<"]";
        }
        cout<<endl;
    }
    return 0;
}