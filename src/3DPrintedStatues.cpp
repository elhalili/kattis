#include <iostream>

using namespace std;

int pow(int b, int p) {
    int rs = b;
    for (size_t i = 1; i < p; i++)
    {
        b *= rs;
    }
    

    return b;
}

int main() {
    
    int n;
    do {
        cin >> n;
    } while ((n >= 10000) ||  (n <= 0));

    int rs = 0;
    while (n > pow(2, rs)) rs++;

    cout << ++rs;
    return 0;
}