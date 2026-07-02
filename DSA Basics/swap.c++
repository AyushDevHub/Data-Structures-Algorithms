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
    cout << "The array before swapping is: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "The array after swapping is: " << endl;
    int left = 0;
    int right = size - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    cout << "The array after swapping is: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

