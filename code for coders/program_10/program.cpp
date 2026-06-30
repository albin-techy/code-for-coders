#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("student.txt");
    string name;
    int m1, m2, total;

    cout << "Name: ";
    cin >> name;
    cout << "Enter 2 Marks: ";
    cin >> m1 >> m2;

    total = m1 + m2;

    f << "Name: " << name << endl;
    f << "Mark1: " << m1 << endl;
    f << "Mark2: " << m2 << endl;
    f << "Total: " << total << endl;

    f.close();
    cout << "Data Saved!";
    return 0;
}