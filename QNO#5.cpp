#include <iostream>
using namespace std;

int main() {
    const int number=6;
    int arr[number];
    cout << "Enter 6 integer values:"<<endl;
    for (int i=0; i<number; i++) 
    {
        cin>>arr[i];
    }
    bool isPalindrome=true;
    for (int i=0; i<number /2; i++) {
    if (arr[i]!= arr[number-1-i]) {
    isPalindrome = false;
    break;
    }
    }
    if (isPalindrome) {
        cout << "The array is a palindrome" << endl;
    } else {
        cout << "The array is not a palindrome" << endl;
    }

    return 0;
}
