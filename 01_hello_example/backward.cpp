//
// Created by Chan, Caoimhe M on 07/02/2024.
//

//
// Created by Chan, Caoimhe M on 04/02/2024.
//
#include <iostream>

double f(double y) {
    return -y;
}

int main(void){
    const int nsteps = 100;
    double y0 = 1;
    double t0 = 0;
    double t1 = 10;
    double h = t1/nsteps;

    double t[nsteps + 1];
    double y[nsteps+1];

    t[0] = t0;
    y[0] = y0;

    for (int i=1; i<=nsteps; i++)   {
        t[i] = t[i-1] + h;
        y[i] = y[i] + h*f(y[i]);
    }
    for (int i=0; i<nsteps; i++) {
        std::cout << t[i] << " " << std::endl;
    }
    return 0;
}