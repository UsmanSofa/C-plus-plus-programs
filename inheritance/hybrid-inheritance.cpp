#include<iostream>
using namespace std;

class A{
    public:
    int a,b;

    void setA(){
        a=15;
        b=5;
    }
};
class B : public A{
    public:
        int c;
        void setB(){
            c=45;
        }
};
class C{
    public:
    int d;
    void setc(){
        d=34;
    }
};
class D : public B, public C{
    public:
    int sum;
    void sumof(){
        sum = a+b+c+d;
       cout << "Sum of 4 Number is: " << sum << endl;
    }

};
int main(){
    D obj;
    obj.setA();
    obj.setB();
    obj.setc();
    obj.sumof();
    return 0;
}