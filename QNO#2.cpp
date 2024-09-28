#include<iostream>
using namespace std;

int main() {
    int Value;
    cout<<"Enter search value: "<<endl;
    cin>>Value;
    bool found=false;
    int numbers[10]={13, 14, 12, 15, 16, 32, 56, 47, 78, 29};
    for(int i=0; i<10; i++)
    {
        if(numbers[i]==Value)
        {
            found=true;
            cout<<"search found"<<endl;
            break;
        }
    }
    if(found==false)
    {
        cout<<"Search not found"<<endl;
    }

return 0;
}
