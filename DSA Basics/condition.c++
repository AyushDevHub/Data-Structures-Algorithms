#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1,sum=0, even_num=2;
    cout<<"Enter a number: " << endl;
    cin>>num1;
    if (num1 >= 20 && num1 <= 40)
    {
        for (int i = 1; i <= num1; i++)
        {
            sum+=num1;
            num1+=2;
        }
        cout << "The sum is: " << sum << endl;
    }
    else
    {
        cout << "The number is not in the range of 20 to 40." << endl;
    }
    return 0;
}
