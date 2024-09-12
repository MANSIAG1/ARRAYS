#include<iostream>
using namespace std;
void print(int a[],int n)
{
    cout<<"inside the function"<<endl;
     a[0]=120; //updating first index element 
    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"go back to main"<<endl;
}

int main()
{
    int a[3]={1,2,3};
    print(a,3);
    cout<<"printing in main function"<<endl;
    // now i want to update index 0 element to 120
    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<endl;
    }
}