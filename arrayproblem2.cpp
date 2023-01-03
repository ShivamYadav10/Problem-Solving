# include <iostream>

using namespace std;

 
int main(){
     cout<<"enter rows and column of matrix"<<endl;
     int m,n;
     
     cin>>m;
     cin>>n;
     int a[m][n];
     int b[m][n];
     cout<<"input matrix"<<endl;
     for(int i =0;i<m;i++)
      {
        for(int j =0 ;j<n;j++)
        {
        cin>>a[i][j];
      }}
      cout<<"print matrix"<<endl;
      for(int i =0;i<m;i++)
      {
        for(int j =0 ;j<n;j++){
        cout<<a[i][j]<<"   ";
      } cout<<endl;}
      
           

 cout<<"output matrix"<<endl;
      for( int i =0; i<m;i++)
       {
         int k = n-1;
         int k1 =0;
        while(k1<k)
         {
          int t = a[i][k1];
          a[i][k1]= a[i][k];
          a[i][k] =t; 
          k--;k1++;          
        
       }}
      for(int i =0;i<m;i++)
      {
        for(int j =0;j<n;j++){
        b[i][j] = a[j][i];
        
      }
      }
      

       
      for(int i =0;i<m;i++)
      {
        for(int j =0 ;j<n;j++){
        cout<<b[i][j]<<"  ";
      }cout<<endl;}


      
           return 0;
}