#include<iostream>
using namespace std;

class Employee{
    //методы доступа
public:
    unsigned int GetAge();
    unsigned int SetAge();
    unsigned int GetyearsOfService();
    unsigned int SetyearsOfService();
    unsigned int GetSalary();
    unsigned int SetSalary();

private:
    unsigned int age;
    unsigned int yearsOfService;
    unsigned int Salary;
};

int main(){
    //
    return 0;
}