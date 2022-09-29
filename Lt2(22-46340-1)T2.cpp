#include<iostream>

using namespace std;

int main()
{
   int arr1[7], arr2[5], arr3[10], i, j, k=0, a, total;
   cout<<" Elements for First Array: ";
   for(i=0; i<7; i++)
      cin>>arr1[i];
   cout<<" Elements for Second Array: ";
   for(i=0; i<5; i++)
      cin>>arr2[i];
   for(i=0; i<5; i++)
   {
      for(j=0; j<5; j++)
      {
         if(arr1[i]==arr2[j])
         {
            total = 0;
            for(a=0; a<k; a++)
            {
               if(arr1[i]==arr3[a])
                  total++;
            }
            if(total==0)
            {
               arr3[k] = arr1[i];
               k++;
            }
         }
      }
   }


   cout<<"Common Elements are:"<<endl;
   for(i=0; i<k; i++)
      cout<<arr3[i]<<" ";

   cout<<endl;
   return 0;
}
