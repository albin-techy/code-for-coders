#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";

    cout << "Length: " << s1.length() << endl;

    reverse(s1.begin(), s1.end());
    cout << "Reverse: " << s1 << endl;

    s1 = "Hello";
    cout << "Concatenation: " << s1 + " " + s2 << endl;

    s1.replace(0, 5, "Hello");
    cout << "Replace: " << s1 << endl;

    return 0;
}