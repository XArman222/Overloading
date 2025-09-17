// Arman Majhi
// 24070123022

#include <iostream>
using namespace std;

class UserInfo {
public:
    void show(string name) {
        cout << "Name: " << name << endl;
    }

    void show(string name, int age) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void show(string name, string city) {
        cout << "Name: " << name << ", City: " << city << endl;
    }

    void show(string name, int age, string city) {
        cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
    }
};

int main() {
    UserInfo u;

    u.show("Arman");
    u.show("Arman", 20);
    u.show("Arman", "Pune");
    u.show("Arman", 20, "Pune");

    return 0;
}

// OUTPUT
// Name: Arman
// Name: Arman, Age: 20
// Name: Arman, City: Pune

// Name: Arman, Age: 20, City: Pune
