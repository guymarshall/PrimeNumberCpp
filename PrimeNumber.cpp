#include <iostream>
#include <math.h>
#include "prime.hpp"

int main()
{
    printf("Enter a positive integer: ");
    int user_input;
    std::cin >> user_input;

    int prime_number_count = 0;
    int number = 2;
    while (prime_number_count < user_input)
    {
        bool is_prime = is_prime_number(number);
        if (is_prime)
        {
            prime_number_count++;
            // printf("%d: %d\n", prime_number_count, number);
        }
        number++;
    }
}