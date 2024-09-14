#include <iostream>
#include <vector>  // Include this for using std::vector

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Use std::vector for dynamic size
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

    // Binary search
    while (start <= end) {
        mid = (start + end) / 2;

        if (a[mid] == key) {
            cout << "Element found at index " << mid << endl;
            return 0;  // Exit with success
        }
        if (key > a[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    cout << "Element not found" << endl;
    return 0;  // Exit with success
}

