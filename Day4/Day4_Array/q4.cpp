#include<IOSTREAM>
using namespace std;
int main()
{
    int greatnum=0;
    cout<<"enter the number of arry=\n";
    int arr[10];
    for(int i=0;i<=9;i++)
    {
        cin>>arr[i];
    }
    arr[0]=greatnum;
    cout<<"great number"<<endl;
    for(int i=0;i<=9;i++)
    {
        if(arr[i]>greatnum)
        {
            greatnum=arr[i];
        
        }
    }
    cout<<greatnum;
}