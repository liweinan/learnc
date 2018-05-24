#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    vector<int> ivec;
    ivec.push_back(42);
    ivec.push_back(24);
    cout << ivec[0] << endl;
    cout << ivec[1] << endl;

    string word;
    vector<string> text;

    cout << "Input your text: ";
    while(cin >> word && word.compare(".") != 0) {
        text.push_back(word);
    }

    for (auto iter = text.cbegin(); iter != text.cend() && !iter->empty(); ++iter) {
        cout << *iter << endl;
    }

    return 0;
}