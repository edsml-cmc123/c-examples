//
// Created by Chan, Caoimhe M on 07/02/2024.
//

#include <iostream>

int main() {
    int count = 0;
    for (int i=2; i<1000 && count<=100; i++)  {
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
            count++;
        }
    }
    return 1;
}