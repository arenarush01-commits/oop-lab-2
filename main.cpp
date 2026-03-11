#include <iostream>
#include <string>

using namespace std;

// ===== Клас Company =====
class Company {
private:
    string name;
    int foundedYear;

public:

    // конструктор за замовчуванням
    Company() : name("Unknown Company"), foundedYear(2000) {
        cout << "Company default constructor\n";
    }

    // конструктор з параметрами
    Company(string n, int y) : name(n), foundedYear(y) {
        cout << "Company constructor with parameters\n";
    }

    // перевантажений (делегування)
    Company(string n) : Company(n, 2020) {
        cout << "Company overloaded constructor\n";
    }

    void showInfo() {
        cout << "Company: " << name << " | Founded: " << foundedYear << endl;
    }

    ~Company() {
        cout << "Company destructor\n";
    }
};


// ===== Клас Employee =====
class Employee {
private:
    string name;
    double salary;

public:

    // конструктор за замовчуванням
    Employee() : name("NoName"), salary(0) {
        cout << "Employee default constructor\n";
    }

    // конструктор з параметрами
    Employee(string n, double s) : name(n), salary(s) {
        cout << "Employee constructor with parameters\n";
    }

    // перевантажений (делегування)
    Employee(string n) : Employee(n, 1000) {
        cout << "Employee overloaded constructor\n";
    }

    void showEmployee() {
        cout << "Employee: " << name << " | Salary: " << salary << endl;
    }

    ~Employee() {
        cout << "Employee destructor\n";
    }
};


// ===== Клас Department =====
class Department {
private:
    string depName;
    int workers;

public:

    // конструктор за замовчуванням
    Department() : depName("Unknown Department"), workers(0) {
        cout << "Department default constructor\n";
    }

    // конструктор з параметрами
    Department(string d, int w) : depName(d), workers(w) {
        cout << "Department constructor with parameters\n";
    }

    // перевантажений (делегування)
    Department(string d) : Department(d, 5) {
        cout << "Department overloaded constructor\n";
    }

    void showDepartment() {
        cout << "Department: " << depName << " | Workers: " << workers << endl;
    }

    ~Department() {
        cout << "Department destructor\n";
    }
};


// ===== Головна функція =====
int main() {

    Company c1;
    Company c2("TechCorp", 2015);
    Company c3("SoftCompany");

    cout << endl;

    Employee e1;
    Employee e2("Ivan", 1500);
    Employee e3("Petro");

    cout << endl;

    Department d1;
    Department d2("IT", 10);
    Department d3("HR");

    cout << "\n----- Information -----\n";

    c1.showInfo();
    c2.showInfo();
    c3.showInfo();

    cout << endl;

    e1.showEmployee();
    e2.showEmployee();
    e3.showEmployee();

    cout << endl;

    d1.showDepartment();
    d2.showDepartment();
    d3.showDepartment();

    return 0;
}