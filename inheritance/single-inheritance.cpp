#include<iostream>
using namespace std;

class X{
    public:
        int a,b,c;
};

class Y : public X{
    public:
        void setdata(){
            cout << "Enter The Value of a: ";
            cin >> a;
            cout << "Enter The Value of b: ";
            cin >> b;
            cout << "Enter The Value of c: ";
            cin >> c;
        }
        int getData(){
            int sum;
            a= a*a*a;
            b= b*b*b;
            c=c*c*c;
            cout << a <<" " << b << " " << c << endl;
            sum = a + b + c;
            cout << "The Sum of 3 numbers Cube is: " << sum << endl;
        }

};
int main(){
    Y y1;
    y1.setdata();
    y1.getData();
    return 0;
}