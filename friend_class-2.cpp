#include<iostream>
using namespace std;
class a{
    private:
    int pvt_a = 10;
    protected:
    int pro_a = 20;
    friend class f;
};
class b{
    private:
    int pvt_b = 30;
    protected:
    int pro_b = 40;
    friend class f;
};
class c{
    private:
    int pvt_c = 50;
    protected:
    int pro_c = 60;
    friend class f;
};
class f{
    public:
    void disp(a &o, b &ob, c &obj){
        cout<<"The private member of class a is "<<o.pvt_a<<endl;
        cout<<"The protected member of class a is "<<o.pro_a<<endl;
        cout<<"The private member of class b is "<<ob.pvt_b<<endl;
        cout<<"The private member of class b is "<<ob.pro_b<<endl;
        cout<<"The private member of class c is "<<obj.pvt_c<<endl;
        cout<<"The private member of class c is "<<obj.pro_c<<endl;
    }
};
int main(){
a o;
b ob;
c obj;
f fr;
fr.disp(o,ob,obj);
return 0;
}