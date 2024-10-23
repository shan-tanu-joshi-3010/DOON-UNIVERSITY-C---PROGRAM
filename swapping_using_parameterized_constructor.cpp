#include<iostream>
using namespace std;
class number{
    public:
    int t;
    number(int a, int b){
        t = a;
        a = b;
        b = t;
        cout<<"The numbers after swapping are "<<a<<" "<<b;
    }
};
int main(){
    int x,y;
    cout<<"Enter the two numbers "<<endl;
    cin>>x>>y;
    number num(x,y);
    return 0;
}