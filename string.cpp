#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter two numbers: " << endl;
    int v1, v2;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2
        << " is " << v1 + v2 << endl;

    string word;
    word.append("Hello, Martian!");
    cout << word << endl;

    string s1;
    string s2 = s1;
    string s3 = "hi";
    string s4(10, 'x');
    cout << s4 << endl;

    return 0;
}