#include<iostream>
using namespace std;

int main(){
    int s;
    cout<<"enter size of array\n";
    cin>>s;
    int *arr=new int [s];
    for(int i=0;i<s;i++){
        cin>>arr[i];

    }
    cout<<"stored value in array\n";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}