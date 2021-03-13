#include <iostream>

void fibonacci(int i, int j);

int main()
{
    std::cout << "0\n1\n";
    fibonacci(0, 1);
}

void fibonacci(int i, int j)
{
    int sum = i + j;

    if (sum >= 100)
    {
        return;
    }
    std::cout << sum << std::endl;
    fibonacci(j, sum);

}
