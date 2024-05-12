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
    
    unsigned int GetSalaryOfyear(); //метод получения значения годовой зарплаты
    void SetSalaryOfyear(unsigned int); //метод назначения значения годовой зарплаты

//private:
    unsigned int age;
    unsigned int yearsOfService;
    unsigned int Salary;
    unsigned int SalaryOfyear; //новая переменная для годовой зарплаты
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

//инициализация 
unsigned int Employee::GetSalaryOfyear(){
    return SalaryOfyear * 12;
}
/*этот метод не нужен получаеться, если мы можем задать значение на прямую
void Employee::SetSalaryOfyear(unsigned int m_SalaryOfyear){
    SalaryOfyear = m_SalaryOfyear;
}*/

int main(){
    Employee Person_1;
    //пример
    Person_1.SalaryOfyear = 8000;

    cout << "An employee receives: " << Person_1.GetSalaryOfyear() << " per year";

    return 0;
}