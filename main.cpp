/**
 * @ Author: Colin Dickey
 * @ Create Time: 2025-01-26 17:31:29
 * @ Modified by: Colin Dickey
 * @ Modified time: 2025-01-26 20:19:24
 * @ Description: Going to whip a wee calculator up for fun.
 */

#include "operations.h"
#include <iostream>

int main()
{
    while (true)
    {
        //Request if user wants to do a basic operation or use a function like sin
        std::cout<<"Basic mathematical operator or function? [b/f] \n"<<"Leave program [y]\n";

        char input{};
        std::cin>>input;

        if (input == 'y')
        {
            break;
        }

        if (input == 'b')
        {
            float float_1{user_input()};
            std::cout<<"[+ / * / - / / ]: ";
            char operation{};
            std::cin>>operation;
            float float_2{user_input()};

            if (operation == '+')
            {
                std::cout<<addition(float_1,float_2);
            }

            if (operation == '*')
            {
                std::cout<<multiplication(float_1,float_2);
            }

            if (operation == '-')
            {
                std::cout<<subtraction(float_1,float_2);
            }

            if (operation == '/')
            {
                if (float_2==0)
                {
                    std::cout<<"You can't divide by zero u numpty";
                    break;
                }
                std::cout<<division(float_1,float_2);
            }



        }
    }
    //List of if cases

    //Output value of function and request if user wants to perform another
    //calculation, if not end loop.


    return 0;
}