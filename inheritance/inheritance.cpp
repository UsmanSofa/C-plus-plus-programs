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
        public:
        void walking(){
            cout << "It is Walking" << endl;
        }
    };
int main(){
    Dog d1;
    d1.walking();
    d1.eating();
    
    return 0;
}