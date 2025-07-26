#include<iostream>
using namespace std;
int main()
{
    int sumeven=0,sumodd=0;
    int arr[10];
    cout<<"enter the number of array=\n";
    for(int i=0;i<=9;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=9;i++)
    {
        if(arr[i]%2==0)
        {
            sumeven += arr[i];
        }
        else{
            sumodd += arr[i];
        }

    }
    cout<<"sum of even ="<<sumeven;
    cout<<"sum of odd="<<sumodd;
}