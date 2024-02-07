//
// Created by Chan, Caoimhe M on 04/02/2024.
//

// a simple primes calculator

#include <iostream>

int main() {
    for (int i=2; i<1000; i++)  {
        int j = 2;
        bool flag = true;
        while (j*j<=i)  {
            if (i%j==0) {
                flag = false;
                break;
            }
            j++;
        }
        if (flag) {
            std::cout << i << std::endl;
        }
    }
    return 1;
}
