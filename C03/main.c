#include <stdio.h>
#include <string.h>
//#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
//#include "ex02/ft_strcat.c"
//#include "ex03/ft_strncat.c"
//#include "ex04/ft_strstr.c"
///#include "ex05/ft_strlcat.c"




int main ()
{
    //printf("%d\n",ft_strcmp("casado","casade"));
    //printf("%d",strcmp("casade","casade"));

   // printf("%d\n",ft_strcmp("casade","casadc"));
   // printf("%d\n",ft_strncmp("casada","casadoe",7));
    printf("%d\n",strncmp("casada","casadoe",7));
    //char buffer1[30] = "compu_";
    //char  source[30] = "programacion";
    //ft_strcat( buffer1, source );
   // printf( "buffer1_str = %s\n", strcat( buffer1, source ));
    //printf( "buffer1_cat = %s\n", strcat( buffer1, source ));

    //printf( "buffer1_str = %s\n", ft_strncat( buffer1, source,5));
    //printf( "buffer1_cat = %s\n", strncat( buffer1, source,15));
    //printf( "buffer1 = %s\n", ft_strncat( buffer1, source,5));


    //ex04
    //char a[] = "la casa es amarilla";
   // char b[] = " ";

   // printf("%s\n",ft_strstr(a,b));
   // char c[] = "la casa es amarilla";
    //char d[] = " ";

    //printf("%s\n",ft_strstr(c,d));

    //ex05
    //char e[30] = "razamora";
    //char ex[30] = "david";
    //printf("%u",ft_strlcat(e,ex,12));
    //printf("%lu",strlcat(e,ex,4));
    //printf("%s",e);
    return 0;
}//