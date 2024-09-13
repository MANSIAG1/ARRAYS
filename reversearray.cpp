#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];  // Better to use std::vector instead of a VLA (variable length array)
    cout << "Enter the numbers in the array: " << endl;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int start = 0, end = n - 1;  // Initializing start and end pointers
    while (start < end)
    {
        // Swapping elements
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;  // Move start pointer towards the middle
        end--;    // Move end pointer towards the middle
    }

    cout << "Reversed array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
