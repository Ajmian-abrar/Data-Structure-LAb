#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int n[2][4],transpose[4][2],i,j;
  cout<<"Enter Matrix Elements "<<endl;
   for (i=0;i<2;i++)
   {
    for (j=0;j<4;j++)
    {
      cout<<"Enter the index of the matrix ["<<i<<"]["<<j<<"]";
      cin>>n[i][j];
    }
   }
   cout<<"The matrix is  "<<endl;
   for (i=0;i<2;i++){
    for (j=0;j<4;j++)
    {
      cout<<n[i][j]<<" ";
    }
    cout<<endl;
   }
   for (i=0;i<2;i++){
    for (j=0;j<4;j++)
    {
        transpose[j][i]=n[i][j];
    }
    cout<<"Transpose of the entered matrix is  "<<endl;
      }
   for (i=0;i<4;i++){
    for (j=0;j<2;j++)
    {
        cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;
}
