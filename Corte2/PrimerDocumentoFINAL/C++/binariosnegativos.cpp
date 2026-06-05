#include <iostream>
#include <cstdint>
using namespace std;

void binario(int8_t n) {

    for(int i = 7; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
}

int main() {

    binario(-1); cout << endl;
    binario(-2); cout << endl;
    binario(-5); cout << endl;
    binario(-128);

    return 0;
}
