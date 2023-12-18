// lab c++.cpp: определяет точку входа для приложения.
//
#include <iostream>
#include "lab c++.h"

using namespace std;

int main() {
  
    Point<int> p1(1, 1);
    Point<float> p2(1.1, 1.2);
    Point<double> p3(1.4, 1.5);
    Point<double> p4(1.6, 1.7);
    Point<std::complex<int>> p5((1.2 + 2i), (1.7 - 3i));
    
    BrokenLine<double> l1;
    BrokenLine<double> l2(1,9,2);
    BrokenLine<double> l3(1, 9, 2);
    BrokenLine<double> l4;
    
    //l4 = l2 + l3;
    //l2= p3 + l2;
    //l2 = l2 + p3;
    double a = 1.0;
    double b = 3.0;
    double h = 2.0;
    l1 = trapezion(a, b, h);


    //std::cout << p1;
    //std::cout << p2;
    //std::cout << p3;
    //std::cout << l2;
    //std::cout << l3;
    //std::cout << l4;
    std::cout << "Length of trapezoidLine: " << l1.length() << std::endl;
    return 0;
}