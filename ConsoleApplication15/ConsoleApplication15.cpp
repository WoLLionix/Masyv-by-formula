#include <iostream>
#include <array>
#include <cmath>

int main()
{
    std::array<int, 25> masyv;

    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    if (n < 25)
    {
        for (int i = 0; i < n; i++)
            masyv[i] = std::pow(2, i);

        std::cout << "Masyv filled:" << std::endl;
        for (int i = 0; i < n; i++)
        {
            std::cout << "masyv[" << i << "] = " << masyv[i] << std::endl;
        }
    }
    else
        std::cout << "The number entered exceeds the allowed size of the array.";
}