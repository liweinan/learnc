#include <vector>
#include <iostream>

using namespace std;

int main() {
    int window = 3;

    vector<unsigned> scores(window, 0);
    unsigned grade, i = 0;
    while (cin >> grade && i < scores.size()) {
        ++scores[grade / window];
        i++;
    }

    for (auto iter = scores.begin(); iter != scores.end(); iter++) {
        cout << *iter << endl;
    }

    auto iter = scores.begin();
    cout << *iter << endl;

    return 0;
}