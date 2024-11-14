#include <iostream>

int fib(int number)
{
    if (number == 0)
        return 0;
    if (number == 1)
        return 1;
    return fib(number - 1) + fib(number - 2);
}

int main()
{
    std::cout << "Select a number" << std::endl;
    int n;
    std::cin >> n;
    int fibonacciSequence[n];
    for (int count = 0; count <= n; ++count)
        fibonacciSequence[count] = fib(count);
    std::cout << fibonacciSequence[n];
    return 0;
}
