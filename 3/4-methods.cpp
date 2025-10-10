#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct iface {
    void m1 (int a) {}
    void m2 (int a, int b) {}
    void m3 (int a, int b, int c) {}
};

struct FucntionInfo {
    string name;
    int argCount;
};

vector<FucntionInfo> Info() {
    return {
        {"m1", 1},
        {"m2", 2},
        {"m3", 3}
    };
}

int main() {
    vector<FucntionInfo> methods = Info ();
    for (const auto& method : methods) {
        cout << "Method Name: " << method.name << ", Argument Count: " << method.argCount << endl;
    }
    return 0;
}

