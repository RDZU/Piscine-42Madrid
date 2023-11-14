#include <stdio.h>
#include "ex00/ft_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"




int main (void)
{
    // ex00
    /*
    int n = 0; // asignamos valor a n
    int *pointer; // creamos un int puntero
    pointer = &n; // guardamos en pointer la direccion de memoria de "n" 0x7ff (pointer -> n)
    ft_ft(pointer); // enviamos la variable pointer que tiene la direccion de memoria de n (pointer -> n)
    printf("%d\n",n); // imprimimos n = 42 porque asignamos 42 a la direccion de memoria "n" (pointer -> n = 42)
    printf("%p\n",(void*)&n); // &n inprimimos la direccion de memoria de "n" 0x7ff
    printf("%p\n",(void*)pointer); // imprimimos la direccion de memoria que tiene almacenado pointer 0x7ff
    */

   /* ex02
    int x = 17;
    int y = 25;
    printf("%d %d \n",x,y);
    ft_swap(&x,&y);
    printf("%d %d \n",x,y);
    */

   //ex03
    
    //  int a = 55;
    //  int b = 25;
    // int div;
    // int mod;
   
    // ft_div_mod( a,  b,  &div,  &mod);
    // printf("%d %d", div, mod);
    

   //ex04
    //  printf("%d %d\n", a, b);
    //  ft_ultimate_div_mod(&a,&b);
    //  printf("%d %d", a, b);

   //ex05
   //ft_putstr("casas");

   //ex06
	//printf("%d",ft_strlen("razamora"));

    //ex07 && ex08
    int i = 0;
    int size = 5;
    int tab[5] = {7,9,335,98,6};
     //ft_rev_int_tab(*tab,size);
    //ft_rev_int_tab(tab,size);
    ft_sort_int_tab(tab,size);
    while(i < size)
    {
        printf("%d , ",tab[i]);
        i++;
    }
}
