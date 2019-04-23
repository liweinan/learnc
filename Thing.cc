#include <iostream>
#include <cstring>

using namespace std;

struct Thing {
    Thing() : _data(new int[100]) {
        cout << "default construct\n";
    }

    // Copy operator
    Thing(const Thing &other) : _data(new int[100]) {
        cout << "copy constructor\n";
        memcpy(_data, other._data, sizeof(int) * 100);
    }

    // Move constructor
    Thing(Thing &&other) noexcept : _data(other._data) {
        cout << "move constructor\n";
        other._data = nullptr;
    }

    // assignment operator
    Thing &operator=(const Thing &rhs) {
        cout << "copy operator\n";
        if (&rhs != this) {
            Thing tmp(rhs);
            std::swap(*this, tmp);
        }
        return *this;
    }

    // move assignment operator
    Thing &operator=(Thing &&rhs) noexcept {
        cout << "move operator\n";
        std::swap(_data, rhs._data);
        return *this;
    }


    // destructor necessary since we are working in dangerous new/delete territory
    ~Thing() noexcept {
        cout << "destructor " << (_data ? "object has data" : "object is empty") << "\n";
        delete[] _data;
    }

private:
    int *_data;
};

int main() {
    cout << "constructing a\n";
    Thing a;

    cout << "constructing b with copy of a\n";
    Thing b(a);

    cout << "moving a to newly constructed c\n";
    Thing c(std::move(a));

    cout << "moving c back to a\n";
    a = std::move(c);

    cout << "create a new d\n";
    Thing d;
    cout << "replace d with a copy of a\n";
    d = a;

    return 0;
}
