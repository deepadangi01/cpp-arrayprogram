#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"enter size of row :";
    cin>>r;
    cout<<"enter size of column :";
    cin>>c;
    int **arr=new int*[r];
    for(int i=0;i<r;++i){
        arr[i]=new int[c];
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>arr[i][j];
        }
    }
    cout<<"shorted array \n";
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}