#include<iostream>
using namespace std;

int main(){
  int f=0,r,c;
  int a[3][3] ,  b[3][3];
  cout<<"enter the value";
  for( r=0;r<3;++r){
    for( c=0;c<3;++c){
        cin>>a[r][c];
    }
  }

    cout<<"enter the value";
  for( r=0;r<3;++r){
    for( c=0;c<3;++c){
        cin>>b[r][c];
       
        
    }
     if(a[r][c]!=b[r][c]){
          f=1;
          break;
        }
    
  }
  
  
  for(int r=0;r<3;++r){
    for(c=0;c<3;++c){
        cout<<a[r][c]<<"\t ";

    }
    cout<<endl;
  }
  cout<<"second array "<<endl;
  for(int r=0;r<3;++r){
    for(c=0;c<3;++c){
      cout<<b[r][c]<<"\t ";

    }
    cout<<endl;
  }
  
  if(f==1){
    cout<<"not identical";
  }
  else{
    cout<<"identical";
  }
   

    return 0;
}