#include <iostream>


int main(int ac, char **av)
{
    int i;
    int x;

    i = 1;
    if(ac > 1)
    {
        while (av[i])
        {
            x = 0;
            while(av[i][x])
            {
                if(av[i][x] >=97 && av[i][x] <=122)
                {
                    av[i][x] -= 32;
                }
                std::cout << av[i][x];
                x++;
            }
            i++;
        }
        std::cout << std::endl;  
    }
    else
    {
         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return(0);
}