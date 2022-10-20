#include<bits/stdc++.h>
using namespace std;

int binarySearch(int nums[], int n, int acq)
{

    int low = 0, high = n-1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if (acq == nums[mid]) {
            return mid;
        }

        else if (acq < nums[mid]) {
            high = mid-1;
        }

        else {
            low = mid+1;
        }
    }

    return -1;
}

int main(void)
{
    int nums[] = { 2, 5, 6, 8, 9, 10,1,7 };
    int acq;
    cout<<"which number you want to search? "<<"  ";
    cin>>acq;
    int n = sizeof(nums)/sizeof(nums[0]);
    int index = binarySearch(nums, n, acq);

    if (index != -1) {
        cout<<"Element found at index "<<" "<< index;
    }
    else {
        cout<<"Element not found in the array"<<endl;
    }

    return 0;
}
