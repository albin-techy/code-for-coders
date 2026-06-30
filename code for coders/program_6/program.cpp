#include <iostream>
using namespace std;

class Swap {
    int a, b;
public:
    void input() {
        cin >> a >> b;
    }

    friend void swapNum(Swap &s);

    void display() {
        cout << a << " " << b << endl;
    }
};

void swapNum(Swap &s) {
    int t = s.a;
    s.a = s.b;
    s.b = t;
}

int main() {
    Swap s;
    cout << "Enter two numbers: ";
    s.input();
    swapNum(s);
    cout << "After swapping: ";
    s.display();
    return 0;
}
