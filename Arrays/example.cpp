#include <iostream>
using namespace std;

int main() {
    int a = 5;  // binary: 0101
    int b = 3;  // binary: 0011

    int result = a ^ b;  // binary: 0110 (decimal 6)

    cout << "a ^ b = " << result << endl;  // Output: 6

    return 0;
}
