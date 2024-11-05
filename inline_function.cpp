#include <iostream>
using namespace std;
inline int sum(int a, int b){ return a+b; }
int main (){
    int a,b;
    cout<<"Enter the number ";
    cin>>a;
    cout<<"\nEnter the second number";
    cin>>b;
    cout<<"\nThe sum of the two numbers is "<<sum(a,b);
    return 0;
}