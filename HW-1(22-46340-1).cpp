#include <iostream>
using namespace std;
int main()
{
    int a[10],n,count=0;

    cout<<"Entered element: ";
    for(int i =0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"which number you want to check? "<<endl;
    cin>>n;
    for(int i=0;i<10;i++)
    {
        if(a[i]==n)
            count++;
    }
    cout<<n<<" "<<"is showing"<<" "<<count<< " "<<"times"<<endl;

    return 0;

}
