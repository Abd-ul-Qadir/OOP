#include <iostream>
using namespace std;
int main()
{
    int num1,num2 , *ptr1, *ptr2;
    ptr1=&num1;
    ptr2=&num2;
    cout<<"Enter First Number : ";
    cin>>num1;
    cout<<"Enter Seond Number : ";
    cin>>num2;
    int add= *ptr1 +*ptr2 ;
    cout<<endl<<endl<<"The Sum of "<<*ptr1<<" + "<<*ptr2<<" = "<<add;
}
