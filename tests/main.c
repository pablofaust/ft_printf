#include "../ft_printf.h"

int			main()
{
	// ----- TEST FORMAT ----- //
	//
	// test un seul caractere //
	//
//	ft_printf(" ");	
//	ft_printf("a");
	//
	// test plusieurs caracteres//
	//
//	ft_printf("    ");	
//	ft_printf("abc");
//	ft_printf("abc abc ");	
//	ft_printf("abc\n");
	//
	// test conversion simple //
	// 
//	ft_printf("%s");	
//	ft_printf("%S");	
//	ft_printf("%p");	
//	ft_printf("%d");	
//	ft_printf("%D");	
//	ft_printf("%i");	
//	ft_printf("%o");	
//	ft_printf("%O");	
//	ft_printf("%u");	
//	ft_printf("%U");	
//	ft_printf("%x");	
//	ft_printf("%X");	
//	ft_printf("%c");	
//	ft_printf("%C");
	// test attributs //
	//
//	ft_printf("%#c");
//	ft_printf("%0c");
//	ft_printf("%-c");
//	ft_printf("%+c");
//	ft_printf("% c");
//	ft_printf("%#0-+ c");
	// 
	// test largeur //
	//
//	ft_printf("%3c");
//	ft_printf("%31c");
//	ft_printf("%#31c");
//	ft_printf("%#0-+ 31c");
	//
	// test precision //
	//
//	ft_printf("%.5c");
//	ft_printf("%.55c");
//	ft_printf("%31.55c");
//	ft_printf("%0.55c");
//	ft_printf("%#0-+ 31.55c");
	//
	// test modificateur //
	//
//	ft_printf("%hhc");
//	ft_printf("%hc");
//	ft_printf("%lc");
//	ft_printf("%llc");
//	ft_printf("%jc");
//	ft_printf("%zc");
//	ft_printf("%#hc");
//	ft_printf("%31hc");
//	ft_printf("%.5hc");
//	ft_printf("%#0-+ 31.55hc");
	//
	// test chaine + conversion //
	//
//	ft_printf("nombre = %d");
//	ft_printf("nombre = %d, caractere = %c\n");
//	ft_printf("nombre = %#034.54ld, caractere = %+- 23.54hhs\n");
//	
	// test un argument //
	//
	// test s //
	//printf("%s\n", "osidfosifj");
	//ft_printf("%s\n", "osidfosifj");
	//printf("%-s\n", "osidfosifj");
	//ft_printf("%-s\n", "osidfosifj");
	//printf("%19s\n", "osidfosifj");
	//ft_printf("%19s\n", "osidfosifj");
	//printf("%.5s\n", "osidfosifj");
	//ft_printf("%.5s\n", "osidfosifj");
	//printf("%19.5s\n", "osidfosifj");
	//ft_printf("%19.5s\n", "osidfosifj");
	// peut-etre qu'il faut gerer les cas d'erreur pour ls
	//
	// test p //
	//
	int		a;

	printf("%p\n", &a);
	ft_printf("%p\n", &a);
	printf("%-p\n", &a);
	ft_printf("%-p\n", &a);
	printf("%12p\n", &a);
	ft_printf("%12p\n", &a);
	printf("%-12p\n", &a);
	ft_printf("%-12p\n", &a);
	//
	// test d //
	//
	printf ("%d\n", 12);
	ft_printf ("%d\n", 12);
	printf ("%d\n", -12);
	ft_printf ("%d\n", -12);
	printf ("%0d\n", -12);
	ft_printf ("%0d\n", -12);
	printf ("%-d\n", -12);
	ft_printf ("%-d\n", -12);
	printf ("%+d\n", -12);
	ft_printf ("%+d\n", -12);
	printf ("% d\n", -12);
	ft_printf ("% d\n", -12);
	printf ("%12d\n", -12);
	ft_printf ("%12d\n", -12);
	printf ("%.5d\n", -12);
	ft_printf ("%.5d\n", -12);
	printf ("%12.5d\n", -12);
	ft_printf ("%12.5d\n", -12);
	printf ("%012.5d\n", -12);
	ft_printf ("%012.5d\n", -12);
	printf ("%-12.5d\n", -12);
	ft_printf ("%-12.5d\n", -12);
	printf ("%+12.5d\n", -12);
	ft_printf ("%+12.5d\n", -12);
	printf ("% 12.5d\n", -12);
	ft_printf ("% 12.5d\n", -12);
	printf ("%0+12.5d\n", -12);
	ft_printf ("%0+12.5d\n", -12);
	printf ("%0 12.5d\n", -12);
	ft_printf ("%0 12.5d\n", -12);
	printf ("%-+12.5d\n", -12);
	ft_printf ("%-+12.5d\n", -12);
	printf ("%- 12.5d\n", -12);
	ft_printf ("%- 12.5d\n", -12);

	unsigned char	c = 126;
	short			s = 234;
	long			l = 225345;
	long long		ll = 225345;
	printf ("%hhd\n", c);
	ft_printf ("%hhd\n", c);
	printf ("%0hhd\n", c);
	ft_printf ("%0hhd\n", c);
	printf ("%-hhd\n", c);
	ft_printf ("%-hhd\n", c);
	printf ("%+hhd\n", c);
	ft_printf ("%+hhd\n", c);
	printf ("%hd\n", s);
	ft_printf ("%hd\n", s);
	printf ("%ld\n", l);
	ft_printf ("%ld\n", l);
	printf ("%lld\n", ll);
	ft_printf ("%lld\n", ll);
	printf ("%jd\n", l);
	ft_printf ("%jd\n", l);
	printf ("%zd\n", l);
	ft_printf ("%zd\n", l);

	c = -126;
	s = -234;
	l = -225345;
	ll = -225345;
	printf ("%hhd\n", c);
	ft_printf ("%hhd\n", c);
	printf ("%0hhd\n", c);
	ft_printf ("%0hhd\n", c);
	printf ("%-hhd\n", c);
	ft_printf ("%-hhd\n", c);
	printf ("%+hhd\n", c);
	ft_printf ("%+hhd\n", c);
	printf ("%hd\n", s);
	ft_printf ("%hd\n", s);
	printf ("%ld\n", l);
	ft_printf ("%ld\n", l);
	printf ("%lld\n", ll);
	ft_printf ("%lld\n", ll);
	printf ("%jd\n", l);
	ft_printf ("%jd\n", l);
	printf ("%zd\n", l);
	ft_printf ("%zd\n", l);
	return (0);
}
