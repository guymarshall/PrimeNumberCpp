#include <iostream>
#include <math.h>
#include "prime.hpp"
#include <vector>
#include <fstream>

int main()
{
    printf("Enter a positive integer: ");
    int user_input;
    std::cin >> user_input;

    std::vector<int> prime_numbers;
    int prime_number_count = 0;
    int number = 2;
    while (prime_number_count < user_input)
    {
        if (is_prime_number(number))
        {
            prime_numbers.push_back(number);
            prime_number_count++;
            // printf("%d: %d\n", prime_number_count, number);
        }
        number++;
    }

    // for (int prime: prime_numbers)
    // {
    //     std::cout << prime << "\n";
    // }

    std::ofstream file;
    file.open("prime_numbers.txt");
    for (int prime_number : prime_numbers)
    {
        file << prime_number << std::endl;
    }
    file.close();
}