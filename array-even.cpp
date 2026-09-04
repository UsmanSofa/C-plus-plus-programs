#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter The Size of Array: ";
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cout << "Enter value of arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << endl << "The Elements of Array are: " << endl;
      for(int i = 0; i < size; i++){
        cout << arr[i] << endl; 
    } 
    cout << "Even Numbers of Array is: " << endl;
    for( int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            cout << arr[i] << endl;
        }
    }
    return 0;
}