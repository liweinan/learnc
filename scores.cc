#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<unsigned> scores(11, 0);
    unsigned grade, i = 0;
    while (cin >> grade && i < scores.size()) {
        ++scores[grade / 10];
        i++;
    }

    for (auto iter = scores.begin(); iter != scores.end(); iter++) {
        cout << *iter << endl;
    }
    return 0;
}