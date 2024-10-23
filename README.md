#include<iostream>
using namespace std;
class Number{
    public:
    int s=0;
    Number(){};
    Number(int n){
        
        for(int i=1;i<n;i++){
            s=s+n;
        }
    }
    void display(){
        cout<<"The sum of n natural numbers is "<<s<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter the number for finding the sum of natural numbers ";
    cin>>n;
    Number num(n);
    num.display();

    
    return 0;
}
