#include<iostream>
using namespace std;
class sum{
    public:
    int s;
    char su;
    float sm;
    sum(int a, int b){
        s = a+b;
        cout<<"The sum is "<<s<<endl;
    }
    sum(char a, char b){
        su = a+b;
        cout<<"The sum is "<<su<<endl;
    }
    sum(float a, float b){
        sm = a+b;
        cout<<"The sum is "<<sm<<endl;
    }

};
int main(){
    sum num(5,10);
    sum chr('a','b');
    sum flt(2.0f,4.0f);
    return 0;

}