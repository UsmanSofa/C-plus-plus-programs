#include<iostream>
using namespace std;

int main(){
    int start_year, end_year,count= 0;
    cout << "Enter The Value of start year " << endl;
    cin >> start_year;
    cout << "Enter The Value of End Year" << endl;
    cin >> end_year;
    for(int i = start_year; i <= end_year; i++){
        if( i % 4 == 0){
             count++;
        }
    }

    int leap_year[count];
    int index = 0;

    for(int i = start_year ; i <=end_year; i++){
        if( i % 4 == 0){
            leap_year[index] = i;
            index++;
        }
    }
    cout << "Array of Leap Year is: " << endl;
     for(int i = 0 ; i <count; i++){
        cout << leap_year[i]<< " ";
    }
}