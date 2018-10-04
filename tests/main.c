#include "../ft_printf.h"

int			main()
{
	// ----- TEST FORMAT ----- //
	//
	// test un seul caractere //
	//
	ft_printf(" ");	
	ft_printf("a");
	//
	// test plusieurs caracteres//
	//
	ft_printf("    ");	
	ft_printf("abc");
	ft_printf("abc abc ");	
	ft_printf("abc\n");
	//
	// test conversion simple //
	// 
	ft_printf("%s");	
	ft_printf("%S");	
	ft_printf("%p");	
	ft_printf("%d");	
	ft_printf("%D");	
	ft_printf("%i");	
	ft_printf("%o");	
	ft_printf("%O");	
	ft_printf("%u");	
	ft_printf("%U");	
	ft_printf("%x");	
	ft_printf("%X");	
	ft_printf("%c");	
	ft_printf("%C");
	// test attributs //
	//
	ft_printf("%#c");
	ft_printf("%0c");
	ft_printf("%-c");
	ft_printf("%+c");
	ft_printf("% c");
	ft_printf("%#0-+ c");
	// chaine + conversion //
	//
	ft_printf("nombre = %d");
	ft_printf("nombre = %d, caractere = %c\n");
	ft_printf("nombre = %#0d, caractere = %+- c\n");
	return (0);
}
