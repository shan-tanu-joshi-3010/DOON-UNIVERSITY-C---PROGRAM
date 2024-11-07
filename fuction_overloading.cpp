#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}
int add(int a, int b, int c, int d){
    return a+b+c+d;
}
int main(){
 cout<<"The sum of two numbers is "<<add(5, 10)<<endl;
 cout<<"The sum of three numbers is "<<add(5, 10, 15)<<endl;
 cout<<"The sum of four numbers is "<<add(5, 10, 15, 20)<<endl;
return 0;
}