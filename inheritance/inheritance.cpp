#include<iostream>
using namespace std;

class Animal{
    public:
        char type[100];
    void eating(){
        cout << "He is Eating" << endl;
    }

};
    class Dog : public Animal{
        void walking(){
            cout << "It is Walking" << endl;
        }
    };