#include <iostream>
int main()

{
    int i = 0;
    int j = 1;
    int sum = i + j;

    std::cout << "0\n1\n"; 

    while (sum <= 100)
    {
        std::cout << sum << std::endl;
        i = j;
        j = sum;
        sum = i + j;
    }
    
}


