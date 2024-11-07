#include<iostream>
using namespace std;

class a{
    private:
    int pvt_a=20;
    protected:
    int prot_a=10;
    friend class fr;
};

class fr{
    public:
    void disp(a &t){
    cout<<"The value of private variable is "<<t.pvt_a;
    cout<<"the value of protected variable is"<<t.prot_a;
    }
};

int main(){
    a obj;
    fr ob;
    ob.disp(obj);
    return 0;
}
