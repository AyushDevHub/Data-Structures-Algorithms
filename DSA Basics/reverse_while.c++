#include <bits/stdc++.h>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements of the array in reverse order are: ";
    int i = size -  1;
    while (i>=0)
    {
        cout << arr[i] << " ";
        i--;
    }
    return 0;

}