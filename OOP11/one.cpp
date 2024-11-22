


#include <iostream>
#include <print>
using namespace std;

class Price {
private: 
    float value;
    string currency;
public:
    Price(float v, string t):value(v),currency(t) {}
    void print() { cout << value << " " << currency << endl;  }
    Price& operator <(Price& other) { return (value < other.value) ? *this : other; }
};
class Lenght {
private:
    float value;

public:
    void print() { cout << value << " " << endl; }
    Lenght(float v) :value(v) {}
    bool operator<(Lenght& other) { return (value < other.value); }
};

template<typename T>

T& max(T& a, T& b) {
    if (a < b) return b;
    return a;
}

int main() {
    Lenght a(10), b(20);
    Lenght c = max(a, b);
    Price d(20, "лв"), e(19.99, "лв");
    Price f = max(d, e);

    f.print();
    c.print();
}
