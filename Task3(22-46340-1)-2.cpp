#include<iostream>
using namespace std;
int main()
{

    int x,y;
    string arr;

    cout<<"Enter Your Sentence: ";
    getline(cin,arr);

    cout<<"Your Sentence is : "<<endl;

    for(int i=0; i<arr.size(); i++)
        cout<<arr[i];
    cout<<endl;
    cout<<"Enter The Number of Changing Value: "<<endl;
    cin>>x;

    for(int i=2;i<arr.size();i+=3)
    {
        y=arr[i];
        arr[i]=char(y+x);

    }
    cout<<"Changed Sentence : "<<endl;

    for(int i=0;i<arr.size();i++){
        cout<<arr[i];

    }

}
