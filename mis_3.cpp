#include<iostream>
using namespace std;

class Employee{
    //методы доступа
public:
    unsigned int GetAge();
    void SetAge(unsigned int);
    unsigned int GetyearsOfService();
    void SetyearsOfService(unsigned int);
    unsigned int GetSalary();
    void SetSalary(unsigned int);

private:
    unsigned int age;
    unsigned int yearsOfService;
    unsigned int Salary;
};

//инициализация функций класса
unsigned int Employee::GetAge(){
    return age;
}

void Employee::SetAge(unsigned int set_age){
    age = set_age;
}

unsigned int Employee::GetyearsOfService(){
    return yearsOfService;
}

void Employee::SetyearsOfService(unsigned int set_yOfs){
    yearsOfService = set_yOfs;
}

unsigned int Employee::GetSalary(){
    return Salary;
}

void Employee::SetSalary(unsigned int set_salary){
    Salary = set_salary;
}

int main(){
    //
    return 0;
}