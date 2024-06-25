#include <iostream>
using namespace std;

int grater(int arr[], int size)
{
    int max=arr[0];
    for (int j=0;j<5;j++)
    {
        if (arr[j]>=max)
        {
           max=arr[j];
        }
    }
    return max;
}
int main()
{
    int arr[5];
     cout<<"Enter 5 Numbers : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter a Number : ";
        cin>>arr[i];
        
    }
    int r = grater(arr, 5);
    cout<<endl<<endl<<"Greater Number is "<<r;
}