#include <iostream>
using std::cout;
using std::cin;

int main() {
    int N;
    do {
        cin >> N;
    } while((N < 1) || (N > 10000));
    int n = N;
    return 0;
}