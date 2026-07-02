#include <bits/stdc++.h>
using namespace std;
int main () {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "The elements of the array are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int mid = size / 2;
    cout << "The first half of the array is: ";
    for (int i = 0; i < mid; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The second half of the array is: ";
    for (int i = mid; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}