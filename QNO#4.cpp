#include<iostream>
using namespace std;

int main() {
    int value[] = {22, 34, 25, 32, 55};
    value[3]=value[4];
    value[4]=value[5];
    for(int i=0; (i+1)<5; i++)
    {
        cout<<value[i]<<"  ";
    }


return 0;
}
