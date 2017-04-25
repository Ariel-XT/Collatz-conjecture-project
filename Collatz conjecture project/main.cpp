#include <iostream>


int main()
{
    int n;
    int length = 1;
    
    std::cout << "Enter a Number" << std::endl;
    std::cin >> n;
    
    while (n != 1)
    {
        if (n%2 == 0)
        {
            n = n / 2;
            ++length;
        }
        
        else
        {
            n = (n * 3) + 1;
            ++length;
        }
    }
    std::cout << "the length of the total numbers is:"<< length << std::endl;
    
    return n;
}




