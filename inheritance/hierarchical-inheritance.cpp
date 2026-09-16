#include<iostream>
using namespace std;

class RBI{
    public:
        float rate;
};

class BOB : public RBI{
    public:
        BOB(){
            rate = 7.4;
        }
        void getROI(){
            cout << "Rate of Intrest is: " << rate << endl;
        }
};
class SBI : public RBI{
    public:
        SBI(){
            rate = 7.6;
        }
        void getROI(){
            cout << "Rate of Intrest is: " << rate << endl;
        }
};
class ICICI : public RBI{
    public:
        ICICI(){
            rate = 8.6;
        }
        void getROI(){
            cout << "Rate of Intrest is: " << rate << endl;
        }
};

int main(){
    BOB b;
    SBI s;
    ICICI i;
    b.getROI();
    s.getROI();
    i.getROI();

    return 0;
}