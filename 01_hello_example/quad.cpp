//
// Created by Chan, Caoimhe M on 04/02/2024.
//

#include <iostream>
#include <cmath>

// double midpoint_rule defines a function that will return a double (just a more precise float)
// double a, double b, (*func)(double), int number_intervals=10) are the function parameters
// where a and b are the lower and upper bounds of the integration interval
// pointer variables point to variables or functions...they allow you to indirectly reference objects
// through their memory address.
// in this example, we don't need to hardcode the function we want to integrate, we can simply use the pointer variable

double midpoint_rule(double a, double b, double (*func)(double), int number_intervals=10)  {
    double interval_size = (b - a) / number_intervals;
    double I_M = 0.0;
    double mid = a + (interval_size/2.0);
    while (mid < b) {
        I_M += interval_size * func(mid);
        mid += interval_size;
    }
return I_M;
}

double trapezium_rule(double a, double b, double(*func)(double), int number_intervals=10)   {
    double interval_size = (b - a)/number_intervals;

    double I_T = 0.0;
    double x = a + interval_size;
    while (x< b)    {
        I_T += interval_size * (func(x) + func(x - interval_size))/2.0;
        x += interval_size;
    }
    return I_T;
}

double f(double x)  {
    return std::sin(x);
}

double simpsonsRule(double a, double b, double(*func)(double), int number_intervals=10) {

    double h = (b-a) / number_intervals;

    double integral = func(a) + func(b);

    for(int i=1; i<number_intervals; i++) {
        double x = a + i*h;
        if(i%2 == 0) {
            integral += 2*func(x);
        }
        else {
            integral += 4*func(x);
        }
    }

    integral = integral*h/3;
    return integral;
}

int main(void)  {
    std::cout << midpoint_rule(0, M_PI, f) << std::endl;
    std::cout << trapezium_rule(0, M_PI, f) << std::endl;
    std::cout << simpsonsRule(0, M_PI, f) << std::endl;
    return 0;
}