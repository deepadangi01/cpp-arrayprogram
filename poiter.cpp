#include<iostream>
using namespace std;

int main(){
//     int a=9;
//     cout<<&a;
//    // int *p;//wild pointer
//     int *p=NULL;//null pointer
//     p = &a;
//     cout<<" address of a="<<p<<"\n";
//     cout<<" value ="<<*p<<endl;
//     p++;
//     cout<<p;
   
  
//     cout<<p;
int a[]={2,25,5,66,78,33,6};
int *p=a;
p=p+4;
cout<<*p<<endl;
int **k=&p;
cout<<**k;

    return 0;
}