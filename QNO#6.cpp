#include <iostream>
using namespace std;
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
    result *= i;
}
    return result;
}

int main() {
    int size;
    cout<<"Enter the size of the array (1 to 5): ";
    cin>>size;
    while(size <1|| size >5) 
    {
    cout<<"Invalid size! Please enter a size between 1 and 5: ";
    cin>>size;
    }
    int arr[5];
    int sum=0;
    for (int i=0; i<size; i++) 
    {
    cout<<"Enter element "<<i+1<<" (0 to 5): ";
    cin>>arr[i];

    while (arr[i]<0 || arr[i]>5) 
    {
    cout<<"Invalid input! Please enter a number between 0 and 5: ";
    cin>>arr[i];
    }
    sum+=arr[i];
    }
    double average = static_cast<double>(sum) / size;
    cout<<"Average of the elements: " << average << endl;
    cout<<"Factorials of the elements: ";
    for (int i=0; i<size; i++) {
    cout<<factorial(arr[i]) << "   ";
    }

    return 0;
}
