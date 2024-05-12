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
    //Создаем двух сотрудников (объекта)
    Employee Person_1;

    Person_1.SetAge(22);
    Person_1.SetyearsOfService(2);
    Person_1.SetSalary(12000);

    Employee Person_2;

    Person_2.SetAge(31);
    Person_2.SetyearsOfService(8);
    Person_2.SetSalary(15500);

    cout << "First employee:" << endl;
    cout << "Age: " << Person_1.GetAge() << " years" << endl;
    cout << "Setyears Of servic: " << Person_1.GetyearsOfService() << " years" << endl;
    cout << "Salary: " << Person_1.GetSalary() << " dolars" << endl;

    cout << endl;

    cout << "Second employee:" << endl;
    cout << "Age: " << Person_2.GetAge() << " years" << endl;
    cout << "Setyears Of servic: " << Person_2.GetyearsOfService() << " years" << endl;
    cout << "Salary: " << Person_2.GetSalary() << " dolars" << endl;

    return 0;
}