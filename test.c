
#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	int	test_p;

	test_p = 12;
	char	*test = "salut";
	char c = 'e';
	ft_printf("------------------------------        TEST 1        ------------------------------\n");
	ft_printf("Mon printf :    " "%p\n", test);
	printf("Vrai printf :   " "%p\n", test);
	ft_printf("------------------------------        TEST 2        ------------------------------\n");
	ft_printf("Mon printf :    " "%p\n", &c);
	printf("Vrai printf :   " "%p\n", &c);
	ft_printf("------------------------------        TEST 3        ------------------------------\n");
	ft_printf("Mon printf :    " "%s\n", "Salut a tous! Je suis ft_printf");
	printf("Vrai printf :   " "%s\n", "Salut a tous! Je suis le vrai printf");
	ft_printf("------------------------------        TEST 4        ------------------------------\n");
	ft_printf("Mon printf :    " "%d\n", 2147483647);
	printf("Vrai printf :   " "%d\n", 2147483647);
	ft_printf("------------------------------        TEST 5        ------------------------------\n");
	ft_printf("Mon printf :    " "%u\n", (unsigned int)4294967295);
	printf("Vrai printf :   " "%u\n", (unsigned int)4294967295);
	ft_printf("------------------------------        TEST 6        ------------------------------\n");
	ft_printf("Mon printf :    " "Salut a tous!\n");
	printf("Vrai printf :   " "Salut a tous!\n");
	ft_printf("------------------------------        TEST 7        ------------------------------\n");
	ft_printf("Mon printf :    " "Salut a tous!\n");
	printf("Vrai printf :   " "Salut a tous!\n");
	ft_printf("------------------------------        TEST 8        ------------------------------\n");
	ft_printf("Mon printf :    " "%x\n", 2147413647);
	printf("Vrai printf :   " "%x\n", 2147413647);
	ft_printf("------------------------------        TEST 9        ------------------------------\n");
	ft_printf("Mon printf :    " "%X\n", 2147413647);
	printf("Vrai printf :   " "%X\n", 2147413647);
	ft_printf("------------------------------        TEST 10        ------------------------------\n");
	ft_printf("                 ce test comporte plusieurs combinaisons de valeurs                \n");
	ft_printf("===================================================================================\n");
	ft_printf("                                    Mon printf :    \n" "%d | entier | \n%c | char | \n%s | string \n%x | valeure hexa minuscule | \n%X | valeure hexa majuscule | \n%u | unsigned int | \n%p | Addresse | \n ", 341, 'e', "test", 7654, 7654, (unsigned int)4134167265, &test_p);
	ft_printf("===================================================================================\n");
	printf("                                   Vrai printf :   \n" "%d | entier | \n%c | char | \n%s | string \n%x | valeure hexa minuscule | \n%X | valeure hexa majuscule | \n%u | unsigned int | \n%p | Addresse | \n ", 341, 'e', "test", 7654, 7654, (unsigned int)4134167265, &test_p);
	ft_printf("-----------      Si tous les résultats sont identiques, c'est bon.      -----------\n");
}
