#include <iostream>
#include <vector>  

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

 
    int a[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int key;
    cout << "Enter the key you want to search for: ";
    cin >> key;

    int start = 0;
    int end = n - 1;
    int mid;
    int ans=-1;

    // Binary search
    while (start <= end) {
        mid = (start + end) / 2;

        if (a[mid] == key) {
             ans=mid;//we store the answer there for finding first occurence
            end=mid-1;
        }
        if (key > a[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    if(ans!=-1)
    {
    	cout<<"first occurence at index"<<ans<<endl;
    }
    else
    {
    	cout<<"element not found"<<endl;
    }		
}

