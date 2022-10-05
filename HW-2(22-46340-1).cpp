#include <iostream>
using namespace std;

int main()
{
    int arr1[10], arr2[10];
    int i, j, count;

    cout<<"Enter the numbers: ";
    for(i = 0; i < 10; i++)
    {
        cin>>arr1[i];

    }

    for(i = 0; i < 10; i++)
    {
        count = 1;
        for(j = i+1; j < 10; j++)
        {
            if(arr1[i]==arr1[j])
            {
                arr2[j] = 0;
                count++;
            }
        }
        if(arr2[i]!=0)
        {
            arr2[i] = count;
        }
    }

    for(i = 0; i<10; i++)
    {
        if(arr2[i] != 0)
        {
            cout<<arr1[i]<<" "<<"appears"<<" "<<arr2[i]<<" "<<"times"<<endl;
        }
    }

    return 0;
}
