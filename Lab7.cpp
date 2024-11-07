#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortByParity(vector<int>&arr) {
    vector<int> even, odd;

    for(int num : arr) {
        if(num % 2 == 0) {
            even.push_back(num);
        } else {
            odd.push_back(num);
        }
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());

    arr.clear();
    arr.insert(arr.begin(), odd.begin(), odd.end());
    arr.insert(arr.begin(), even.begin(), even.end());
}

int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout<<"Enter elements: "<<endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sortByParity(arr);

    cout<<"Sorted elements: "<<endl;
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}
