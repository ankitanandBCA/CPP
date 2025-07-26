#include<IOSTREAM>
using namespace std;
int main()
{
    int smallnum=0;
    cout<<"enter the number of arry=\n";
    int arr[10];
    for(int i=0;i<=9;i++)
    {
        cin>>arr[i];
    }
    smallnum=0;
    cout<<"small number"<<endl;
    for(int i=0;i<=9;i++)
    {
        if(arr[i]<smallnum)
        {
            smallnum=arr[i];
        
        }
    }
    cout<<smallnum;
}