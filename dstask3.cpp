#include <iostream>
using namespace std;

void Odd(int i, int n)
{
    for(i;i<=n;i++)
    {
        if(i%2 !=0)
        {
            cout<<"The odd number is: "<< i <<endl;

        }
    }
}
int main()
{
    int i,n;
    cin>>i>>n;
    Odd(i,n);

}

