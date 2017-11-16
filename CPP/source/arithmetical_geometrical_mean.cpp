#include <iostream>
#include <math.h>
#include "arithmetical_geometrical_mean.h"

void arithmetical_mean()
{
    float a1, a2, a3, a4, a5;
    std::cout << "-arithmetical_mean-\n";
    std::cout << "a1 = "; std::cin >> a1;
    std::cout << "a2 = "; std::cin >> a2;
    std::cout << "a3 = "; std::cin >> a3;
    std::cout << "a4 = "; std::cin >> a4;
    std::cout << "a5 = "; std::cin >> a5;
    a1 = (a1 + a2 + a3 + a4 + a5) / 5;
    std::cout << "arithmetical_mean = " << a1;
}

void geometrical_mean()
{
    float a1, a2, a3, a4, a5;
    std::cout << "-geometrical_mean-\n";
    std::cout << "a1 = "; std::cin >> a1;
    std::cout << "a2 = "; std::cin >> a2;
    std::cout << "a3 = "; std::cin >> a3;
    std::cout << "a4 = "; std::cin >> a4;
    std::cout << "a5 = "; std::cin >> a5;
    a1 = pow((a1 + a2 + a3 + a4 + a5), 0.2);
     std::cout << "geometrical_mean = " << a1;
}
