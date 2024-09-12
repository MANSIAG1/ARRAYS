//LINEAR SEARCH 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the sie of an element"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the number "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"enter the element you want to search for "<<endl;
    cin>>x;
    bool found=false;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<"element"<<x<<"found at index"<<i<<endl;
            found=true;
            break;
            
        }
    }
    if(!found)
    {
        cout<<"element not found"<<endl;
    }
    
    
}