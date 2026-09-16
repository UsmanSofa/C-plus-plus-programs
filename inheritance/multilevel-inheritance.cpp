#include<iostream>
using namespace std;

class P{
    public:
    float temp;
};
class Q : public P {
    public:
        float toFarhenheit(float t){
            float f;
            f = (t *(9.0/5.0)) + 32;
            cout << "Celcius to Farehenit is: ";
            return f;
        }
};
class R : public Q{
    public: 
        float toCelcius(float t){
            float c;
            c = (t-32) *(5.0/9.0);
            cout << "Faremheit to celius is: ";
            return c;
        }
};
int main(){
    R temp;
    cout << temp.toFarhenheit(45.3) << endl;
    cout << temp.toCelcius(103.6) << endl;;
    return 0;
}