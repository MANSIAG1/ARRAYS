#include <iostream>
#include <vector>  

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;


    int a[n];

    cout << "Enter the elements of the array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int key;
    cout << "Enter the key you want to search for: ";
    cin >> key;

    int start = 0;
    int end = n - 1;
    int mid;
    int ans = -1;

    // Binary search for last occurrence
    while (start <= end) {
        mid = start + (end - start) / 2;

        if (a[mid] == key) {
            ans = mid; // Store the answer
            start = mid + 1; // Continue searching in the right half
        } else if (key > a[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if (ans != -1) {
        cout << "Last occurrence or rightmost occurrence at index " << ans << endl;
    } else {
        cout << "Element not found" << endl;
    }        

    return 0;
}

