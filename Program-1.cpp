// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class operations {
public:
    double add(double a,double b)
    {
        return a+b;
    }
    double sub(double a,double b)
    {
        return a-b;
    }
    double mul(double a,double b)
    {
        return a*b;
    }
    double divi(double a,double b)
    {
        return a/b;
    }
};
int main() {
    double a,b;
    string type;
    cout<<"ENTER INPUTS A AND B\n";
    cin>>a>>b;
    cout<<"ENTER TYPE OF OPERATION\n";
    cin>>type;
    operations o;
    if(type == "ADDITION")
    {
        cout<<o.add(a,b)<<endl;
    }
    if(type == "SUBTRACTION")
    {
        cout<<o.sub(a,b)<<endl;
    }
    if(type == "MULTIPLICATION")
    {
        cout<<o.mul(a,b)<<endl;
    }
    if(type == "DIVISION")
    {
        if(b == 0)
        {
            cout<<"DIVISION NOT POSSIBLE"<<endl;
        }
        else 
        {
        cout<<o.divi(a,b)<<endl;
        }
    }
    return 0;
}