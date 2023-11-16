#include <stdio.h>
#include <string.h>
#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
 #include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
//#include "ex09/ft_strcapitalize.c"
#include "ex10/ft_strlcpy.c"
#include "ex11/ft_putstr_non_printable.c"

int main()
{
    //ex00
    //  char dest[] = "ddqeqweqwe";
    //  char src[] = "casa55";
    // printf("%s\n",ft_strcpy(dest,src));
    //ex01 
   // strcpy(strcpy(dest,src));
    //  char	destination[] = "";
	// char	input[] = "To be or not to be";
	// printf("destination:%s\n", ft_strncpy(destination, input,0));
	// char	destination2[] = "Hfsgg troll!";
	// char	input2[] = "Hello Wor";
	// printf("destination:%s\n", ft_strncpy(destination2, input2, 1));
    //printf("%s\n",dest);
    //printf("%s\n",ft_strncpy(dest,src,2));
    //printf("%d\n",ft_str_is_alpha("mariaFhi"));
    //printf("%d\n",ft_str_is_numeric("5155545"));
    //printf("%d\n",ft_str_is_lowercase("ggzsdg"));
   // printf("%d\n",ft_str_is_uppercase("ds"));
    //printf("%d\n",ft_str_is_printable("casa"));
    //char c[] = "salut, coFFSDSmment tu vas ? 42mots quarante-deux; cinquante+et+un";
    //char x[] = "Coucofsdfs";
    
    //printf("%s\n",ft_strupcase(c));
    //printf("%s\n",ft_strlowcase(c));
    //printf("%s\n",ft_strcapitalize(c));
    
    // char	input[50] = "sad";
	// char	to[] = "Hello World!rewrw";
	// printf("ft_strlcpy: %u\n", ft_strlcpy(input, to, 0));
    char ex[] = "Coucou\ntu vas bi\ten ?";
     printf("%s\n",ft_putstr_non_printable(ex));
    //printf("%s",ft_putstr_non_printable(ex));


    //printf("%d\n",isalpha(""));
    //printf("%s",dest);
    return 0;
}