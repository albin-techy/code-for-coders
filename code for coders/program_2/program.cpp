#include <iostream>
using namespace std;

class Employee {
    int id;
    float basic, gross;
public:
    void input() {
        cout << "Enter ID and Basic Salary: ";
        cin >> id >> basic;
    }

    void calculate() {
        gross = basic + (0.2 * basic) + (0.1 * basic);
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Gross Salary: " << gross << endl;
    }
};

int main() {
    Employee e;
    e.input();
    e.calculate();
    e.display();
    return 0;
}