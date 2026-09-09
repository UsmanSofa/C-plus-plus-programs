#include<iostream>
#include<cstring>
using namespace std;

class Cafe{
    private:
        int cafe_id;
        char cafe_name[100];
        char cafe_type[30];
        char cafe_rating[15];
        char cafe_location[30];
        int cafe_establish_year;
        int cafe_staff_quantity;
    public:
        Cafe(){
            cout << "Default Constructor" << endl;
        }
};

int main(){
    int n;

    return 0;
}