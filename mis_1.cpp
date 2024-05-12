#include<iostream>
using namespace std;

int sqrt(int, int);

int main(){
    
    int number, degree,  num_pow;

    cout << "Ender your number: ";
    cin >> number;
    cout << endl;
    
    cout << "Enter the degree value: ";
    cin >> degree;

    num_pow = sqrt(number, degree);
    cout << "Number " << number << " to the power " << degree << " has the meaning: " << num_pow;

    return 0;
}

int sqrt (int number, int degree){

    if(degree == 0){
        return 1;
    }
    else{
        return number * sqrt(number, degree - 1);
    }
}