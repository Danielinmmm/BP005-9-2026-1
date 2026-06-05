#include <iostream>
using namespace std;

void binario(unsigned char n) {

    for(int i = 7; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
}

int main() {

    binario(0);   cout << endl;
    binario(1);   cout << endl;
    binario(5);   cout << endl;
    binario(127); cout << endl;
    binario(255);

    return 0;
}
