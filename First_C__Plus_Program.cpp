#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Jambo Africa, Hello Kenya" << " Mko Sawa Lakini?" << std::endl;
    int number_1 = 20;
    int number_2 = 35;
    std::cout << "The sum of number 1 and 2 is " << number_1 + number_2 << std::endl;


    //double and float are the same datatypes
    double pie = 3.142;
    double radius = 3.5;
    double area = pie * radius * radius;
    std::cout << "The area of the circle of radius 3.5 is " << area << std::endl;


    // working with bool, a true statememt returns 1 and a false statement returns 0,

    auto statement_1 = 40 < 50;
    auto statement_2 = 40 == 63;
    std::cout << "The statement 1 returns " << statement_1 << " while statement 2 prints " << statement_2 << std::endl;

    // Type conversion
    double long_pie = 3.142159;
    int concat_pie = static_cast<int>(long_pie);
    std::cout << "The conversion from double to int is cast using this method " << std::endl;
    std::cout << "The long pie is rounded off to a number " << concat_pie << std::endl;


    

}

