
#include <stdio.h>
#include <math.h>

#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
//#include "ex05/ft_sqrt.c"
//#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

int ft_atoi(const char *str)
{
    int i = 0;
    int num = 0;
    int neg = 1;

    while (str[i] == ' ')
        i++;

    if (str[i] == '-')
    {
        neg = -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }

    return num * neg;
}

int main(int argc, char **argv)
{
    int a;
    int b;
    if(argc == 2)
    {
         a = ft_atoi(argv[1]);
    }
    
    if(argc == 3)
    {
        a = ft_atoi(argv[1]);
        b = ft_atoi(argv[2]);
    }
   // printf("%d %d\n",a,b);
    //printf("%d\n",ft_iterative_factorial(a));
    //printf("%d\n",ft_recursive_factorial(a));
    //printf("%d\n",ft_iterative_power(a,b));
    //printf("%d\n",ft_recursive_power(a,b));
   
    //printf("%d\n",ft_fibonacci(a));
    //printf("%d\n", ft_sqrt(a));
    //printf("%d\n", ft_is_prime(a));
    printf("%d\n", ft_find_next_prime(a));
   
   
	return 0;

}

