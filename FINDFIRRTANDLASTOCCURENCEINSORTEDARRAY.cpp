#include <vector>
#include <utility>
using namespace std;

int findFirst(const vector<int>& arr, int n, int k) {
    int start = 0;
    int end = arr.size() - 1;
    int mid;
    int ans = -1;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == k) {
            ans = mid;
            end = mid - 1; // Continue searching in the left half
        } else if (k > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int findLast(const vector<int>& arr, int n,int k) {
    int start = 0;
    int end = arr.size() - 1;
    int mid;
    int ans = -1;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == k) {
            ans = mid;
            start = mid + 1; // Continue searching in the right half
        } else if (k > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(const vector<int>& arr, int n,int k) {
    pair<int,int>p;
    p.first=findFirst(arr,n,k);
    p.second=findLast(arr,n,k);
    return p;
}

