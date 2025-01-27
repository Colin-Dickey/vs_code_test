/**
 * @ Author: Colin Dickey
 * @ Create Time: 2025-01-26 17:31:56
 * @ Modified by: Colin Dickey
 * @ Modified time: 2025-01-26 19:59:53
 * @ Description: Function file for calculator.
 */

#include "operations.h"
#include <iostream>

float addition(float x, float y)
{
    return x + y;
}

float multiplication(float x, float y)
{
    return x * y;
}

float subtraction(float x, float y)
{
    return x - y;
}

float division(float x, float y)
{
    return x / y;
}

float user_input()
{
    std::cout<<"Float: ";
    float float_{};
    std::cin>>float_;

    return float_;
}