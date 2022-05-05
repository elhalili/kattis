#include <iostream>

using std::cout; 
using std::cin;

struct ABCpattern {
    int n;
    char c;
};


int main() {
    int ABC[3];
    int tmp[3];
    int i = 0;
    //constraint of n <= 100
    while (i < 3) {
        cin >> ABC[i];
        tmp[i] = ABC[i];
        if(ABC[i] <= 100) i++;
    }

    //sorting
    for (i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            if(tmp[j] > tmp[j + 1]) {
                //swaping
                tmp[j] = tmp[j] + tmp[j + 1];
                tmp[j + 1] = tmp[j] - tmp[j + 1];
                tmp[j] = tmp[j] - tmp[j + 1];
            }
        
    
    ABCpattern arr[3];

    char a = 'A';
    //map every number to its caractere
    for (i = 0; i < 3; i++)
        arr[i] = {.n = tmp[i], .c = (a + i)};
    //print the resault
    for (i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if(ABC[i] == arr[j].n) cout << arr[j].c;

    return 0;
}