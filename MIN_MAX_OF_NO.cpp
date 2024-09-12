#include <iostream>
#include <climits>  // For INT_MIN
using namespace std;

int getmax(int a[], int n)  // Corrected parameter list
{
    int max = INT_MIN;  // Start with the smallest possible value
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max)  // Accessing array elements with a[i]
        {
            max = a[i];  // Updating max if current element is larger
        }
    }
    return max;
}
int getmin(int a[], int n )
{
    int min= INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}


int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int a[n];
    cout << "Enter the elements in the array: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];  // Taking input for array elements
    }

    int maximum = getmax(a, n);  // Store the returned value from getmax
    cout << "The maximum element in the array is: " << maximum << endl;  // Print the maximum value
    int min=getmin(a,n);
    cout<<"the minimum element is "<<min<<endl;

    return 0;
}
