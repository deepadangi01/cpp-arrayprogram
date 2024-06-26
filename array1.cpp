 #include<iostream>
 using namespace std;
 
 int main(){
    int a[3][4],sum=0;
    cout<<"enter the row value";
  for(int r=0;r<3;++r){
    
  
    for(int c=0;c<4;++c){
        cin>>a[r][c];
    }
  }
  cout<<"array format\n";
  
    for(int r=0;r<3;++r){
        
        for(int c=0;c<4;++c){
          sum+=a[r][c];
           
        //    if(a[r][c]==1)
        //    {
        //     a[r][c]=0;
        //    }
            // cout<<a[r][c]*a[r][c]<<"\t";
            // if(a[r][c]%2!=0){
            //     a[r][c]=0;

            // }
        cout<<a[r][c]<<"\t";

        }
         cout<<endl; 

    }
    cout<<"sum of all array :"<<sum;


  return 0;
 }