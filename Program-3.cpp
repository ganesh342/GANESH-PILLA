#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter the value\n";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int val = 1;
        cout<<i<<": ";
        int col = (i%2==0)?i-1:i;
        for(int j=1;j<=col;j++)
        {
            cout<<val<<" ";
            val+=2;
        }
        cout<<endl;
    }
}