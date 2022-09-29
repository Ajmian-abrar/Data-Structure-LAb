#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"the size of arr is: ";
    cin>>x;

    int arr[x];
    cout<<" elements of arr: "<<endl;
    for(int i=0; i<x; i++)
        cin>>arr[i];

    cout<<"uncommon element's arr is: "<<endl;
    for(int i=0; i<x; i++)
    {
        int j;
        for(j=0; j<i; j++)
        {
            if(arr[i]==arr[j])
            {
                break;
            }

        }
        if (i == j)
            cout << arr[i] <<"  ";

    }

    return 0;
}
