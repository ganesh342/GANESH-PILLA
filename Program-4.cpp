// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n value\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int freq[9]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<9;j++)
        {
            if((a[i]%(j+1)) == 0)
            {
                freq[j]++;
            }
        }
    }
    cout<<"{"<<" ";
    for(int i=0;i<9;i++)
    {
        cout<<i+1<<":"<<freq[i]<<","<<" ";
    }
    cout<<"}"<<endl;
}