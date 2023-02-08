#include <iostream>

void RandNumber(int num);

int main()
{
    srand((unsigned) time(NULL));
    RandNumber(10);
}

void RandNumber(int num)
{
    int i;
    double random = rand() / (double)RAND_MAX;
    std::cout << random << std::endl;
    double prev_random = random;

    for (i = 0; i < num; i++)
    {
        random = 1 - (prev_random * prev_random);
        prev_random = random;
        std::cout << random << std::endl;
    }
    
}
