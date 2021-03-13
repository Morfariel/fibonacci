#include <iostream>

int main()
{
    int i = 0;
    int j = 1;
    int sum = i + j;
    int max = 0;
    int min = -1;

    while (true) {
        std::cout << "Please enter the minimum limit for fibonacci series: ";
        std::cin >> min;
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        if (min < 0) {
            std::cout << "The min must be equal to or greater than 0.\n";
            continue;
        }
        else if (min > 1000000000) {
            std::cout << "The min must be less than 1,000,000,000.\n";
            continue;
        }
        break;
    }

    while (true) {
        std::cout << "Please enter the maximum limit for fibonacci series: ";
        std::cin >> max;
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        if (max <= 0) {
            std::cout << "The max must be greater than 0.\n";
            continue;
        }
        else if (max > 1000000000) {
            std::cout << "The max must be less than 1,000,000,000.\n";
            continue;
        }
        else if (max <= min) {
            std::cout << "The max must be greater than the min.\n";
            continue;
        }
        break;
    }

    if (min == 0)
    {
        std::cout << i << std::endl;
    }
    if (min <= 1)
    {
        std::cout << j << std::endl;
    }

    while (sum <= max)
    {
        if (sum >= min)
        {
            std::cout << sum << std::endl;
        }
        i = j;
        j = sum;
        sum = i + j;
    }
    //for (int i = 0, j = 1, sum = i+j; sum <= 1000; i = j, j = sum, sum = i+j){
    //    std::cout << sum << std::endl;
    //}
}
