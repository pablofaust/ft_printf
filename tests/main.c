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

	printf("--- TEST CONVERSION %%s ---\n\n");
	printf("--- TEST  %%s ---\n\n");
	
	printf ("\033[32;01m%s\033[00m\n", "Jusqu'ici tout va bien");
	ft_printf ("%s\n", "Jusqu'ici tout va bien");
	printf ("\033[32;01m%s\033[00m\n", "034958");
	ft_printf ("%s\n\n", "034958");

	printf("--- TEST %%s avec attributs ---\n\n");

	printf ("\033[32;01m%-s\033[00m\n", "Jusqu'ici tout va bien");
	ft_printf ("%-s\n\n", "Jusqu'ici tout va bien");
	
	printf("--- TEST %%s avec largeur ---\n\n");

	printf ("\033[32;01m%25s\033[00m\n", "Jusqu'ici tout va bien");
	ft_printf ("%25s\n", "Jusqu'ici tout va bien");
	printf ("\033[32;01m%-25s\033[00m\n", "Jusqu'ici tout va bien");
	ft_printf ("%-25s\n\n", "Jusqu'ici tout va bien");

	printf("--- TEST %%s avec precision ---\n\n");

	printf ("\033[32;01m%.5s\033[00m\n", "Jusqu'ici tout va bien");
	ft_printf ("%.5s\n", "Jusqu'ici tout va bien");
	printf ("\033[32;01m%-.5s\033[00m\n", "Jusqu'ici tout va bien");
	ft_printf ("%-.5s\n", "Jusqu'ici tout va bien");
	printf ("\033[32;01m%12.5s\033[00m\n", "Jusqu'ici tout va bien");
	ft_printf ("%12.5s\n", "Jusqu'ici tout va bien");
	printf ("\033[32;01m%-12.5s\033[00m\n", "Jusqu'ici tout va bien");
	ft_printf ("%-12.5s\n\n", "Jusqu'ici tout va bien");


	printf("--- TEST CONVERSION %%p ---\n\n");
	printf("--- TEST  %%p ---\n\n");

	char	a;
	int		b;

	printf ("\033[32;01m%p\033[00m\n", &a);
	ft_printf ("%p\n", &a);
	printf ("\033[32;01m%p\033[00m\n", &b);
	ft_printf ("%p\n\n", &b);
	
	printf("--- TEST  %%p avec attributs ---\n\n");

	printf ("\033[32;01m%-p\033[00m\n", &a);
	ft_printf ("%-p\n\n", &a);

	printf("--- TEST %%p avec largeur ---\n\n");

	printf ("\033[32;01m%25p\033[00m\n", &a);
	ft_printf ("%25p\n\n", &a);
	printf ("\033[32;01m%-25p\033[00m\n", &a);
	ft_printf ("%-25p\n\n", &a);

	printf("--- TEST CONVERSION %%o ---\n\n");

	printf("--- TEST  %%o positif ---\n\n");

	printf ("\033[32;01m%o\033[00m\n", 34545);
	ft_printf ("%o\n\n", 34545);

	printf("--- TEST  %%o negatif ---\n\n");

	printf ("\033[32;01m%o\033[00m\n", -34545);
	ft_printf ("%o\n\n", -34545);

	printf("--- TEST  %%o positif avec attributs ---\n\n");

	printf ("\033[32;01m%#o\033[00m\n", 34545);
	ft_printf ("%#o\n", 34545);
	printf ("\033[32;01m%0o\033[00m\n", 34545);
	ft_printf ("%0o\n", 34545);
	printf ("\033[32;01m%-o\033[00m\n", 34545);
	ft_printf ("%-o\n", 34545);
	printf ("\033[32;01m%#0o\033[00m\n", 34545);
	ft_printf ("%#0o\n", 34545);
	printf ("\033[32;01m%#-o\033[00m\n", 34545);
	ft_printf ("%#-o\n\n", 34545);

	printf("--- TEST  %%o negatif avec attributs ---\n\n");

	printf ("\033[32;01m%#o\033[00m\n", -34545);
	ft_printf ("%#o\n", -34545);
	printf ("\033[32;01m%0o\033[00m\n", -34545);
	ft_printf ("%0o\n", -34545);
	printf ("\033[32;01m%-o\033[00m\n", -34545);
	ft_printf ("%-o\n", -34545);
	printf ("\033[32;01m%#0o\033[00m\n", -34545);
	ft_printf ("%#0o\n", -34545);
	printf ("\033[32;01m%#-o\033[00m\n", -34545);
	ft_printf ("%#-o\n\n", -34545);

	printf("--- TEST  %%o positif avec largeur ---\n\n");

	printf ("\033[32;01m%34o\033[00m\n", 34545);
	ft_printf ("%34o\n", 34545);
	printf ("\033[32;01m%#34o\033[00m\n", 34545);
	ft_printf ("%#34o\n", 34545);
	printf ("\033[32;01m%034o\033[00m\n", 34545);
	ft_printf ("%034o\n", 34545);
	printf ("\033[32;01m%-34o\033[00m\n", 34545);
	ft_printf ("%-34o\n", 34545);
	printf ("\033[32;01m%#034o\033[00m\n", 34545);
	ft_printf ("%#034o\n", 34545);
	printf ("\033[32;01m%#-34o\033[00m\n", 34545);
	ft_printf ("%#-34o\n\n", 34545);

	printf("--- TEST  %%o negatif avec largeur ---\n\n");

	printf ("\033[32;01m%34o\033[00m\n", -34545);
	ft_printf ("%34o\n", -34545);
	printf ("\033[32;01m%#34o\033[00m\n", -34545);
	ft_printf ("%#34o\n", -34545);
	printf ("\033[32;01m%034o\033[00m\n", -34545);
	ft_printf ("%034o\n", -34545);
	printf ("\033[32;01m%-34o\033[00m\n", -34545);
	ft_printf ("%-34o\n", -34545);
	printf ("\033[32;01m%#034o\033[00m\n", -34545);
	ft_printf ("%#034o\n", -34545);
	printf ("\033[32;01m%#-34o\033[00m\n", -34545);
	ft_printf ("%#-34o\n\n", -34545);

	printf("--- TEST CONVERSION %%u ---\n\n");

	printf("--- TEST  %%u positif ---\n\n");

	printf ("\033[32;01m%u\033[00m\n", 34545);
	ft_printf ("%u\n\n", 34545);

	printf("--- TEST  %%u negatif ---\n\n");

	printf ("\033[32;01m%u\033[00m\n", -34545);
	ft_printf ("%u\n\n", -34545);

	printf("--- TEST  %%u positif avec attributs ---\n\n");

	printf ("\033[32;01m%0u\033[00m\n", 34545);
	ft_printf ("%0u\n", 34545);
	printf ("\033[32;01m%-u\033[00m\n", 34545);
	ft_printf ("%-u\n", 34545);

	printf("--- TEST  %%u negatif avec attributs ---\n\n");

	printf ("\033[32;01m%0u\033[00m\n", -34545);
	ft_printf ("%0u\n", -34545);
	printf ("\033[32;01m%-u\033[00m\n", -34545);
	ft_printf ("%-u\n", -34545);

	printf("--- TEST  %%u positif avec largeur ---\n\n");

	printf ("\033[32;01m%34u\033[00m\n", 34545);
	ft_printf ("%34u\n", 34545);
	printf ("\033[32;01m%034u\033[00m\n", 34545);
	ft_printf ("%034u\n", 34545);
	printf ("\033[32;01m%-34u\033[00m\n", 34545);
	ft_printf ("%-34u\n", 34545);

	printf("--- TEST  %%u negatif avec largeur ---\n\n");

	printf ("\033[32;01m%34u\033[00m\n", -34545);
	ft_printf ("%34u\n", -34545);
	printf ("\033[32;01m%034u\033[00m\n", -34545);
	ft_printf ("%034u\n", -34545);
	printf ("\033[32;01m%-34u\033[00m\n", -34545);
	ft_printf ("%-34u\n", -34545);

//	printf("--- TEST %%ls ---\n\n");
 	
//	setlocale(LC_ALL, "en_US.UTF-8"); 

//	printf ("\033[32;01m%ls\033[00m\n", L"Ѡ");
//	ft_printf ("%ls\n\n", L"ܐܭܜܞ");
//
//	printf("--- TEST CONVERSION %%d ---\n\n");
//	printf("--- TEST %%d positif ---\n\n");
//	//
//	printf ("\033[32;01m%d\033[00m\n", 12);
//	ft_printf ("%d\n\n", 12);
//
//	printf("--- TEST %%d negatif ---\n\n");
//
//	printf ("\033[32;01m%d\033[00m\n", -12);
//	ft_printf ("%d\n\n", -12);
//	
//	printf("--- TEST %%d positif avec attributs ---\n\n");
//
//	printf ("\033[32;01m%0d\033[00m\n", 12);
//	ft_printf ("%0d\n", 12);
//	printf ("\033[32;01m%-d\033[00m\n", 12);
//	ft_printf ("%-d\n", 12);
//	printf ("\033[32;01m%+d\033[00m\n", 12);
//	ft_printf ("%+d\n", 12);
//	printf ("\033[32;01m% d\033[00m\n", 12);
//	ft_printf ("% d\n", 12);
//	printf ("\033[32;01m%0+d\033[00m\n", 12);
//	ft_printf ("%0+d\n", 12);
//	printf ("\033[32;01m%0 d\033[00m\n", 12);
//	ft_printf ("%0 d\n", 12);
//	printf ("\033[32;01m%-+d\033[00m\n", 12);
//	ft_printf ("%-+d\n", 12);
//	printf ("\033[32;01m%- d\033[00m\n", 12);
//	ft_printf ("%- d\n\n", 12);
//
//
//	printf("--- TEST %%d negatif avec attributs ---\n\n");
//
//	printf ("\033[32;01m%0d\033[00m\n", -12);
//	ft_printf ("%0d\n", -12);
//	printf ("\033[32;01m%-d\033[00m\n", -12);
//	ft_printf ("%-d\n", -12);
//	printf ("\033[32;01m%+d\033[00m\n", -12);
//	ft_printf ("%+d\n", -12);
//	printf ("\033[32;01m% d\033[00m\n", -12);
//	ft_printf ("% d\n", -12);
//	printf ("\033[32;01m%0+d\033[00m\n", -12);
//	ft_printf ("%0+d\n", -12);
//	printf ("\033[32;01m%0 d\033[00m\n", -12);
//	ft_printf ("%0 d\n", -12);
//	printf ("\033[32;01m%-+d\033[00m\n", -12);
//	ft_printf ("%-+d\n", -12);
//	printf ("\033[32;01m%- d\033[00m\n", -12);
//	ft_printf ("%- d\n\n", -12);
//
//	printf("--- TEST %%d positif avec largeur ---\n\n");
//
//	printf ("\033[32;01m%12d\033[00m\n", 12);
//	ft_printf ("%12d\n", 12);
//	printf ("\033[32;01m%012d\033[00m\n", 12);
//	ft_printf ("%012d\n", 12);
//	printf ("\033[32;01m%-12d\033[00m\n", 12);
//	ft_printf ("%-12d\n", 12);
//	printf ("\033[32;01m%+12d\033[00m\n", 12);
//	ft_printf ("%+12d\n", 12);
//	printf ("\033[32;01m% 12d\033[00m\n", 12);
//	ft_printf ("% 12d\n", 12);
//	printf ("\033[32;01m%0+12d\033[00m\n", 12);
//	ft_printf ("%0+12d\n", 12);
//	printf ("\033[32;01m%0 12d\033[00m\n", 12);
//	ft_printf ("%0 12d\n", 12);
//	printf ("\033[32;01m%-+12d\033[00m\n", 12);
//	ft_printf ("%-+12d\n", 12);
//	printf ("\033[32;01m%- 12d\033[00m\n", 12);
//	ft_printf ("%- 12d\n\n", 12);
//
//	printf("--- TEST %%d negatif avec largeur ---\n\n");
//
//	printf ("\033[32;01m%12d\033[00m\n", -12);
//	ft_printf ("%12d\n", -12);
//	printf ("\033[32;01m%012d\033[00m\n", -12);
//	ft_printf ("%012d\n", -12);
//	printf ("\033[32;01m%-12d\033[00m\n", -12);
//	ft_printf ("%-12d\n", -12);
//	printf ("\033[32;01m%+12d\033[00m\n", -12);
//	ft_printf ("%+12d\n", -12);
//	printf ("\033[32;01m% 12d\033[00m\n", -12);
//	ft_printf ("% 12d\n", -12);
//	printf ("\033[32;01m%0+12d\033[00m\n", -12);
//	ft_printf ("%0+12d\n", -12);
//	printf ("\033[32;01m%0 12d\033[00m\n", -12);
//	ft_printf ("%0 12d\n", -12);
//	printf ("\033[32;01m%-+12d\033[00m\n", -12);
//	ft_printf ("%-+12d\n", -12);
//	printf ("\033[32;01m%- 12d\033[00m\n", -12);
//	ft_printf ("%- 12d\n\n", -12);
//
//	printf("--- TEST %%d positif avec precision ---\n\n");
//
//	printf ("\033[32;01m%.5d\033[00m\n", 1288888);
//	ft_printf ("%.5d\n", 1288888);
//	printf ("\033[32;01m%.5d\033[00m\n", 12);
//	ft_printf ("%.5d\n", 12);
//	printf ("\033[32;01m%0.5d\033[00m\n", 137);
//	ft_printf ("%0.5d\n", 137);
//	printf ("\033[32;01m%-.5d\033[00m\n", 137);
//	ft_printf ("%-.5d\n", 137);
//	printf ("\033[32;01m%+.5d\033[00m\n", 137);
//	ft_printf ("%+.5d\n", 137);
//	printf ("\033[32;01m% .5d\033[00m\n", 137);
//	ft_printf ("% .5d\n", 137);
//	printf ("\033[32;01m%12.5d\033[00m\n", 137);
//	ft_printf ("%12.5d\n", 137);
//	printf ("\033[32;01m%012.5d\033[00m\n", 137);
//	ft_printf ("%012.5d\n", 137);
//	printf ("\033[32;01m%-12.5d\033[00m\n", 137);
//	ft_printf ("%-12.5d\n", 137);
//	printf ("\033[32;01m%+12.5d\033[00m\n", 137);
//	ft_printf ("%+12.5d\n", 137);
//	printf ("\033[32;01m% 12.5d\033[00m\n", 137);
//	ft_printf ("% 12.5d\n", 137);
//	printf ("\033[32;01m%0+12.5d\033[00m\n", 137);
//	ft_printf ("%0+12.5d\n", 137);
//	printf ("\033[32;01m%0 12.5d\033[00m\n", 137);
//	ft_printf ("%0 12.5d\n", 137);
//	printf ("\033[32;01m%- 12.5d\033[00m\n", 137);
//	ft_printf ("%-+12.5d\n", 137);
//	printf ("\033[32;01m%- 12.5d\033[00m\n", 137);
//	ft_printf ("%- 12.5d\n\n", 137);
//
//
//	printf("--- TEST %%d negatif avec precision ---\n\n");
//
//	printf ("\033[32;01m%.5d\033[00m\n", -1288888);
//	ft_printf ("%.5d\n", -1288888);
//	printf ("\033[32;01m%.5d\033[00m\n", -12);
//	ft_printf ("%.5d\n", -12);
//	printf ("\033[32;01m%0.5d\033[00m\n", -12);
//	ft_printf ("%0.5d\n", -12);
//	printf ("\033[32;01m%-.5d\033[00m\n", -12);
//	ft_printf ("%-.5d\n", -12);
//	printf ("\033[32;01m%+.5d\033[00m\n", -12);
//	ft_printf ("%+.5d\n", -12);
//	printf ("\033[32;01m% .5d\033[00m\n", -12);
//	ft_printf ("% .5d\n", -12);
//	printf ("\033[32;01m%12.5d\033[00m\n", -12);
//	ft_printf ("%12.5d\n", -12);
//	printf ("\033[32;01m%012.5d\033[00m\n", -12);
//	ft_printf ("%012.5d\n", -12);
//	printf ("\033[32;01m%-12.5d\033[00m\n", -12);
//	ft_printf ("%-12.5d\n", -12);
//	printf ("\033[32;01m%+12.5d\033[00m\n", -12);
//	ft_printf ("%+12.5d\n", -12);
//	printf ("\033[32;01m% 12.5d\033[00m\n", -12);
//	ft_printf ("% 12.5d\n", -12);
//	printf ("\033[32;01m%0+12.5d\033[00m\n", -12);
//	ft_printf ("%0+12.5d\n", -12);
//	printf ("\033[32;01m%0 12.5d\033[00m\n", -12);
//	ft_printf ("%0 12.5d\n", -12);
//	printf ("\033[32;01m%- 12.5d\033[00m\n", -12);
//	ft_printf ("%-+12.5d\n", -12);
//	printf ("\033[32;01m%- 12.5d\033[00m\n", -12);
//	ft_printf ("%- 12.5d\n\n", -12);
//
//	printf("--- TEST %%hhd positif ---\n\n");
//
//	unsigned char	c = 126;
//
//	printf ("\033[32;01m%hhd\033[00m\n", c);
//	ft_printf ("%hhd\n\n", c);
//	
//	printf("--- TEST %%hhd negatif ---\n\n");
//
//	c = -126;
//
//	printf ("\033[32;01m%hhd\033[00m\n", c);
//	ft_printf ("%hhd\n\n", c);
//
//	printf("--- TEST %%hhd positif avec attributs ---\n\n");
//	
//	c = 126;
//
//	printf ("\033[32;01m%0hhd\033[00m\n", c);
//	ft_printf ("%0hhd\n", c);
//	printf ("\033[32;01m%-hhd\033[00m\n", c);
//	ft_printf ("%-hhd\n", c);
//	printf ("\033[32;01m%+hhd\033[00m\n", c);
//	ft_printf ("%+hhd\n", c);
//	printf ("\033[32;01m% hhd\033[00m\n", c);
//	ft_printf ("% hhd\n", c);
//	printf ("\033[32;01m%0+hhd\033[00m\n", c);
//	ft_printf ("%0+hhd\n", c);
//	printf ("\033[32;01m%0 hhd\033[00m\n", c);
//	ft_printf ("%0 hhd\n", c);
//	printf ("\033[32;01m%-+hhd\033[00m\n", c);
//	ft_printf ("%-+hhd\n", c);
//	printf ("\033[32;01m%- hhd\033[00m\n", c);
//	ft_printf ("%- hhd\n\n", c);
//	
//	printf("--- TEST %%hhd negatif avec attributs ---\n\n");
//	
//	c = -126;
//
//	printf ("\033[32;01m%0hhd\033[00m\n", c);
//	ft_printf ("%0hhd\n", c);
//	printf ("\033[32;01m%-hhd\033[00m\n", c);
//	ft_printf ("%-hhd\n", c);
//	printf ("\033[32;01m%+hhd\033[00m\n", c);
//	ft_printf ("%+hhd\n", c);
//	printf ("\033[32;01m% hhd\033[00m\n", c);
//	ft_printf ("% hhd\n", c);
//	printf ("\033[32;01m%0+hhd\033[00m\n", c);
//	ft_printf ("%0+hhd\n", c);
//	printf ("\033[32;01m%0 hhd\033[00m\n", c);
//	ft_printf ("%0 hhd\n", c);
//	printf ("\033[32;01m%-+hhd\033[00m\n", c);
//	ft_printf ("%-+hhd\n", c);
//	printf ("\033[32;01m%- hhd\033[00m\n", c);
//	ft_printf ("%- hhd\n\n", c);
//	
//	printf("--- TEST %%hhd positif avec largeur ---\n\n");
//	
//	c = 126;
//
//	printf ("\033[32;01m%12hhd\033[00m\n", c);
//	ft_printf ("%12hhd\n", c);
//	printf ("\033[32;01m%012hhd\033[00m\n", c);
//	ft_printf ("%012hhd\n", c);
//	printf ("\033[32;01m%-12hhd\033[00m\n", c);
//	ft_printf ("%-12hhd\n", c);
//	printf ("\033[32;01m%+12hhd\033[00m\n", c);
//	ft_printf ("%+12hhd\n", c);
//	printf ("\033[32;01m% 12hhd\033[00m\n", c);
//	ft_printf ("% 12hhd\n", c);
//	printf ("\033[32;01m%0+12hhd\033[00m\n", c);
//	ft_printf ("%0+12hhd\n", c);
//	printf ("\033[32;01m%0 12hhd\033[00m\n", c);
//	ft_printf ("%0 12hhd\n", c);
//	printf ("\033[32;01m%-+12hhd\033[00m\n", c);
//	ft_printf ("%-+12hhd\n", c);
//	printf ("\033[32;01m%- 12hhd\033[00m\n", c);
//	ft_printf ("%- 12hhd\n\n", c);
//	
//	printf("--- TEST %%hhd negatif avec largeur ---\n\n");
//	
//	c = -126;
//
//	printf ("\033[32;01m%012hhd\033[00m\n", c);
//	ft_printf ("%012hhd\n", c);
//	printf ("\033[32;01m%012hhd\033[00m\n", c);
//	ft_printf ("%012hhd\n", c);
//	printf ("\033[32;01m%-12hhd\033[00m\n", c);
//	ft_printf ("%-12hhd\n", c);
//	printf ("\033[32;01m%+12hhd\033[00m\n", c);
//	ft_printf ("%+12hhd\n", c);
//	printf ("\033[32;01m% 12hhd\033[00m\n", c);
//	ft_printf ("% 12hhd\n", c);
//	printf ("\033[32;01m%0+12hhd\033[00m\n", c);
//	ft_printf ("%0+12hhd\n", c);
//	printf ("\033[32;01m%0 12hhd\033[00m\n", c);
//	ft_printf ("%0 12hhd\n", c);
//	printf ("\033[32;01m%-+12hhd\033[00m\n", c);
//	ft_printf ("%-+12hhd\n", c);
//	printf ("\033[32;01m%- 12hhd\033[00m\n", c);
//	ft_printf ("%- 12hhd\n\n", c);
//
//	printf("--- TEST %%hhd positif avec precision ---\n\n");
//
//	c = 126;
//	printf ("\033[32;01m%.5hhd\033[00m\n", c);
//	ft_printf ("%.5hhd\n", c);
//	printf ("\033[32;01m%.5hhd\033[00m\n", c);
//	ft_printf ("%.5hhd\n", c);
//	printf ("\033[32;01m%0.5hhd\033[00m\n", c);
//	ft_printf ("%0.5hhd\n", c);
//	printf ("\033[32;01m%-.5hhd\033[00m\n", c);
//	ft_printf ("%-.5hhd\n", c);
//	printf ("\033[32;01m%+.5hhd\033[00m\n", c);
//	ft_printf ("%+.5hhd\n", c);
//	printf ("\033[32;01m% .5hhd\033[00m\n", c);
//	ft_printf ("% .5hhd\n", c);
//	printf ("\033[32;01m%12.5hhd\033[00m\n", c);
//	ft_printf ("%12.5hhd\n", c);
//	printf ("\033[32;01m%012.5hhd\033[00m\n", c);
//	ft_printf ("%012.5hhd\n", c);
//	printf ("\033[32;01m%-12.5hhd\033[00m\n", c);
//	ft_printf ("%-12.5hhd\n", c);
//	printf ("\033[32;01m%+12.5hhd\033[00m\n", c);
//	ft_printf ("%+12.5hhd\n", c);
//	printf ("\033[32;01m% 12.5hhd\033[00m\n", c);
//	ft_printf ("% 12.5hhd\n", c);
//	printf ("\033[32;01m%0+12.5hhd\033[00m\n", c);
//	ft_printf ("%0+12.5hhd\n", c);
//	printf ("\033[32;01m%0 12.5d\033[00m\n", c);
//	ft_printf ("%0 12.5hhd\n", c);
//	printf ("\033[32;01m%- 12.5hhd\033[00m\n", c);
//	ft_printf ("%-+12.5hhd\n", c);
//	printf ("\033[32;01m%- 12.5hhd\033[00m\n", c);
//	ft_printf ("%- 12.5hhd\n\n", c);
//
//
//	printf("--- TEST %%hhd negatif avec precision ---\n\n");
//
//	c = -126;
//
//	printf ("\033[32;01m%.5hhd\033[00m\n", c);
//	ft_printf ("%.5hhd\n", c);
//	printf ("\033[32;01m%.5hhd\033[00m\n", c);
//	ft_printf ("%.5hhd\n", c);
//	printf ("\033[32;01m%0.5hhd\033[00m\n", c);
//	ft_printf ("%0.5hhd\n", c);
//	printf ("\033[32;01m%-.5hhd\033[00m\n", c);
//	ft_printf ("%-.5hhd\n", c);
//	printf ("\033[32;01m%+.5hhd\033[00m\n", c);
//	ft_printf ("%+.5hhd\n", c);
//	printf ("\033[32;01m% .5hhd\033[00m\n", c);
//	ft_printf ("% .5hhd\n", c);
//	printf ("\033[32;01m%12.5hhd\033[00m\n", c);
//	ft_printf ("%12.5hhd\n", c);
//	printf ("\033[32;01m%012.5hhd\033[00m\n", c);
//	ft_printf ("%012.5hhd\n", c);
//	printf ("\033[32;01m%-12.5hhd\033[00m\n", c);
//	ft_printf ("%-12.5hhd\n", c);
//	printf ("\033[32;01m%+12.5hhd\033[00m\n", c);
//	ft_printf ("%+12.5hhd\n", c);
//	printf ("\033[32;01m% 12.5hhd\033[00m\n", c);
//	ft_printf ("% 12.5hhd\n", c);
//	printf ("\033[32;01m%0+12.5hhd\033[00m\n", c);
//	ft_printf ("%0+12.5hhd\n", c);
//	printf ("\033[32;01m%0 12.5hhd\033[00m\n", c);
//	ft_printf ("%0 12.5hhd\n", c);
//	printf ("\033[32;01m%- 12.5hhd\033[00m\n", c);
//	ft_printf ("%-+12.5hhd\n", c);
//	printf ("\033[32;01m%- 12.5hhd\033[00m\n", c);
//	ft_printf ("%- 12.5hhd\n\n", c);
//
//	printf("--- TEST %%hd positif ---\n\n");
//
//	short			s = 234;
//
//	printf ("\033[32;01m%hd\033[00m\n", s);
//	ft_printf ("%hd\n\n", s);
//	
//	printf("--- TEST %%hd negatif ---\n\n");
//
//	s = -234;
//
//	printf ("\033[32;01m%hd\033[00m\n", s);
//	ft_printf ("%hd\n\n", s);
//
//	printf("--- TEST %%hd positif aves attributs ---\n\n");
//	
//	s = 234;
//
//	printf ("\033[32;01m%0hd\033[00m\n", s);
//	ft_printf ("%0hd\n", s);
//	printf ("\033[32;01m%-hd\033[00m\n", s);
//	ft_printf ("%-hd\n", s);
//	printf ("\033[32;01m%+hd\033[00m\n", s);
//	ft_printf ("%+hd\n", s);
//	printf ("\033[32;01m% hd\033[00m\n", s);
//	ft_printf ("% hd\n", s);
//	printf ("\033[32;01m%0+hd\033[00m\n", s);
//	ft_printf ("%0+hd\n", s);
//	printf ("\033[32;01m%0 hd\033[00m\n", s);
//	ft_printf ("%0 hd\n", s);
//	printf ("\033[32;01m%-+hd\033[00m\n", s);
//	ft_printf ("%-+hd\n", s);
//	printf ("\033[32;01m%- hd\033[00m\n", s);
//	ft_printf ("%- hd\n\n", s);
//	
//	printf("--- TEST %%hd negatif avec attributs ---\n\n");
//	
//	s = -234;
//
//	printf ("\033[32;01m%0hd\033[00m\n", s);
//	ft_printf ("%0hd\n", s);
//	printf ("\033[32;01m%-hd\033[00m\n", s);
//	ft_printf ("%-hd\n", s);
//	printf ("\033[32;01m%+hd\033[00m\n", s);
//	ft_printf ("%+hd\n", s);
//	printf ("\033[32;01m% hd\033[00m\n", s);
//	ft_printf ("% hd\n", s);
//	printf ("\033[32;01m%0+hd\033[00m\n", s);
//	ft_printf ("%0+hd\n", s);
//	printf ("\033[32;01m%0 hd\033[00m\n", s);
//	ft_printf ("%0 hd\n", s);
//	printf ("\033[32;01m%-+hd\033[00m\n", s);
//	ft_printf ("%-+hd\n", s);
//	printf ("\033[32;01m%- hd\033[00m\n", s);
//	ft_printf ("%- hd\n\n", s);
//	
//	printf("--- TEST %%hd positif avec largeur ---\n\n");
//	
//	s = 234;
//
//	printf ("\033[32;01m%12hd\033[00m\n", s);
//	ft_printf ("%12hd\n", s);
//	printf ("\033[32;01m%012hd\033[00m\n", s);
//	ft_printf ("%0hd\n", s);
//	printf ("\033[32;01m%-12hd\033[00m\n", s);
//	ft_printf ("%-12hd\n", s);
//	printf ("\033[32;01m%+12hd\033[00m\n", s);
//	ft_printf ("%+12hd\n", s);
//	printf ("\033[32;01m% 12hd\033[00m\n", s);
//	ft_printf ("% 12hd\n", s);
//	printf ("\033[32;01m%0+12hd\033[00m\n", s);
//	ft_printf ("%0+12hd\n", s);
//	printf ("\033[32;01m%0 12hd\033[00m\n", s);
//	ft_printf ("%0 12hd\n", s);
//	printf ("\033[32;01m%-+12hd\033[00m\n", s);
//	ft_printf ("%-+12hd\n", s);
//	printf ("\033[32;01m%- 12hd\033[00m\n", s);
//	ft_printf ("%- 12hd\n\n", s);
//	
//	printf("--- TEST %%hd negatif avec largeur ---\n\n");
//	
//	s = -234;
//
//	printf ("\033[32;01m%012hd\033[00m\n", s);
//	ft_printf ("%012hd\n", s);
//	printf ("\033[32;01m%012hd\033[00m\n", s);
//	ft_printf ("%012hd\n", s);
//	printf ("\033[32;01m%-12hd\033[00m\n", s);
//	ft_printf ("%-12hd\n", s);
//	printf ("\033[32;01m%+12hd\033[00m\n", s);
//	ft_printf ("%+12hd\n", s);
//	printf ("\033[32;01m% 12hd\033[00m\n", s);
//	ft_printf ("% 12hd\n", s);
//	printf ("\033[32;01m%0+12hd\033[00m\n", s);
//	ft_printf ("%0+12hd\n", s);
//	printf ("\033[32;01m%0 12hd\033[00m\n", s);
//	ft_printf ("%0 12hd\n", s);
//	printf ("\033[32;01m%-+12hd\033[00m\n", s);
//	ft_printf ("%-+12hd\n", s);
//	printf ("\033[32;01m%- 12hd\033[00m\n", s);
//	ft_printf ("%- 12hd\n\n", s);
//
//	printf("--- TEST %%hd positif avec precision ---\n\n");
//
//	s = 234;
//
//	printf ("\033[32;01m%.5hd\033[00m\n", s);
//	ft_printf ("%.5hd\n", s);
//	printf ("\033[32;01m%.5hd\033[00m\n", s);
//	ft_printf ("%.5hd\n", s);
//	printf ("\033[32;01m%0.5hd\033[00m\n", s);
//	ft_printf ("%0.5hd\n", s);
//	printf ("\033[32;01m%-.5hd\033[00m\n", s);
//	ft_printf ("%-.5hd\n", s);
//	printf ("\033[32;01m%+.5hd\033[00m\n", s);
//	ft_printf ("%+.5hd\n", s);
//	printf ("\033[32;01m% .5hd\033[00m\n", s);
//	ft_printf ("% .5hd\n", s);
//	printf ("\033[32;01m%12.5hd\033[00m\n", s);
//	ft_printf ("%12.5hd\n", s);
//	printf ("\033[32;01m%012.5hd\033[00m\n", s);
//	ft_printf ("%012.5hd\n", s);
//	printf ("\033[32;01m%-12.5hd\033[00m\n", s);
//	ft_printf ("%-12.5hd\n", s);
//	printf ("\033[32;01m%+12.5hd\033[00m\n", s);
//	ft_printf ("%+12.5hd\n", s);
//	printf ("\033[32;01m% 12.5hd\033[00m\n", s);
//	ft_printf ("% 12.5hd\n", s);
//	printf ("\033[32;01m%0+12.5hd\033[00m\n", s);
//	ft_printf ("%0+12.5hd\n", s);
//	printf ("\033[32;01m%0 12.5d\033[00m\n", s);
//	ft_printf ("%0 12.5hd\n", s);
//	printf ("\033[32;01m%- 12.5hd\033[00m\n", s);
//	ft_printf ("%-+12.5hd\n", s);
//	printf ("\033[32;01m%- 12.5hd\033[00m\n", s);
//	ft_printf ("%- 12.5hd\n\n", s);
//
//
//	printf("--- TEST %%hd negatif avec precision ---\n\n");
//
//	s = -234;
//
//	printf ("\033[32;01m%.5hd\033[00m\n", s);
//	ft_printf ("%.5hd\n", s);
//	printf ("\033[32;01m%.5hd\033[00m\n", s);
//	ft_printf ("%.5hd\n", s);
//	printf ("\033[32;01m%0.5hd\033[00m\n", s);
//	ft_printf ("%0.5hd\n", s);
//	printf ("\033[32;01m%-.5hd\033[00m\n", s);
//	ft_printf ("%-.5hd\n", s);
//	printf ("\033[32;01m%+.5hd\033[00m\n", s);
//	ft_printf ("%+.5hd\n", s);
//	printf ("\033[32;01m% .5hd\033[00m\n", s);
//	ft_printf ("% .5hd\n", s);
//	printf ("\033[32;01m%12.5hd\033[00m\n", s);
//	ft_printf ("%12.5hd\n", s);
//	printf ("\033[32;01m%012.5hd\033[00m\n", s);
//	ft_printf ("%012.5hd\n", s);
//	printf ("\033[32;01m%-12.5hd\033[00m\n", s);
//	ft_printf ("%-12.5hd\n", s);
//	printf ("\033[32;01m%+12.5hd\033[00m\n", s);
//	ft_printf ("%+12.5hd\n", s);
//	printf ("\033[32;01m% 12.5hd\033[00m\n", s);
//	ft_printf ("% 12.5hd\n", s);
//	printf ("\033[32;01m%0+12.5hd\033[00m\n", s);
//	ft_printf ("%0+12.5hd\n", s);
//	printf ("\033[32;01m%0 12.5hd\033[00m\n", s);
//	ft_printf ("%0 12.5hd\n", s);
//	printf ("\033[32;01m%- 12.5hd\033[00m\n", s);
//	ft_printf ("%-+12.5hd\n", s);
//	printf ("\033[32;01m%- 12.5hd\033[00m\n", s);
//	ft_printf ("%- 12.5hd\n\n", s);
//
//	printf("--- TEST %%ld positif ---\n\n");
//
//	long			l = 225345;
//
//	printf ("\033[32;01m%ld\033[00m\n", l);
//	ft_printf ("%ld\n\n", l);
//	
//	printf("--- TElT %%ld negatif ---\n\n");
//
//	l = -225345;
//
//	printf ("\033[32;01m%ld\033[00m\n", l);
//	ft_printf ("%ld\n\n", l);
//
//	printf("--- TEST %%ld positif aves attributs ---\n\n");
//	
//	l = 225345;
//
//	printf ("\033[32;01m%0ld\033[00m\n", l);
//	ft_printf ("%0ld\n", l);
//	printf ("\033[32;01m%-ld\033[00m\n", l);
//	ft_printf ("%-ld\n", l);
//	printf ("\033[32;01m%+ld\033[00m\n", l);
//	ft_printf ("%+ld\n", l);
//	printf ("\033[32;01m% ld\033[00m\n", l);
//	ft_printf ("% ld\n", l);
//	printf ("\033[32;01m%0+ld\033[00m\n", l);
//	ft_printf ("%0+ld\n", l);
//	printf ("\033[32;01m%0 ld\033[00m\n", l);
//	ft_printf ("%0 ld\n", l);
//	printf ("\033[32;01m%-+ld\033[00m\n", l);
//	ft_printf ("%-+ld\n", l);
//	printf ("\033[32;01m%- ld\033[00m\n", l);
//	ft_printf ("%- ld\n\n", l);
//	
//	printf("--- TEST %%ld negatif avec attributs ---\n\n");
//	
//	l = -225345;
//
//	printf ("\033[32;01m%0ld\033[00m\n", l);
//	ft_printf ("%0ld\n", l);
//	printf ("\033[32;01m%-ld\033[00m\n", l);
//	ft_printf ("%-ld\n", l);
//	printf ("\033[32;01m%+ld\033[00m\n", l);
//	ft_printf ("%+ld\n", l);
//	printf ("\033[32;01m% ld\033[00m\n", l);
//	ft_printf ("% ld\n", l);
//	printf ("\033[32;01m%0+ld\033[00m\n", l);
//	ft_printf ("%0+ld\n", l);
//	printf ("\033[32;01m%0 ld\033[00m\n", l);
//	ft_printf ("%0 ld\n", l);
//	printf ("\033[32;01m%-+ld\033[00m\n", l);
//	ft_printf ("%-+ld\n", l);
//	printf ("\033[32;01m%- ld\033[00m\n", l);
//	ft_printf ("%- ld\n\n", l);
//	
//	printf("--- TEST %%ld positif avec largeur ---\n\n");
//	
//	l = 225345;
//
//	printf ("\033[32;01m%12ld\033[00m\n", l);
//	ft_printf ("%12ld\n", l);
//	printf ("\033[32;01m%012ld\033[00m\n", l);
//	ft_printf ("%012ld\n", l);
//	printf ("\033[32;01m%-12ld\033[00m\n", l);
//	ft_printf ("%-12ld\n", l);
//	printf ("\033[32;01m%+12ld\033[00m\n", l);
//	ft_printf ("%+12ld\n", l);
//	printf ("\033[32;01m% 12ld\033[00m\n", l);
//	ft_printf ("% 12ld\n", l);
//	printf ("\033[32;01m%0+12ld\033[00m\n", l);
//	ft_printf ("%0+12ld\n", l);
//	printf ("\033[32;01m%0 12ld\033[00m\n", l);
//	ft_printf ("%0 12ld\n", l);
//	printf ("\033[32;01m%-+12ld\033[00m\n", l);
//	ft_printf ("%-+12ld\n", l);
//	printf ("\033[32;01m%- 12ld\033[00m\n", l);
//	ft_printf ("%- 12ld\n\n", l);
//	
//	printf("--- TEST %%ld negatif avec largeur ---\n\n");
//	
//	l = -225345;
//
//	printf ("\033[32;01m%012ld\033[00m\n", l);
//	ft_printf ("%012ld\n", l);
//	printf ("\033[32;01m%012ld\033[00m\n", l);
//	ft_printf ("%012ld\n", l);
//	printf ("\033[32;01m%-12ld\033[00m\n", l);
//	ft_printf ("%-12ld\n", l);
//	printf ("\033[32;01m%+12ld\033[00m\n", l);
//	ft_printf ("%+12ld\n", l);
//	printf ("\033[32;01m% 12ld\033[00m\n", l);
//	ft_printf ("% 12ld\n", l);
//	printf ("\033[32;01m%0+12ld\033[00m\n", l);
//	ft_printf ("%0+12ld\n", l);
//	printf ("\033[32;01m%0 12ld\033[00m\n", l);
//	ft_printf ("%0 12ld\n", l);
//	printf ("\033[32;01m%-+12ld\033[00m\n", l);
//	ft_printf ("%-+12ld\n", l);
//	printf ("\033[32;01m%- 12ld\033[00m\n", l);
//	ft_printf ("%- 12ld\n\n", l);
//
//	printf("--- TEST %%ld positif avec precision ---\n\n");
//
//	l = 225345;
//
//	printf ("\033[32;01m%.5ld\033[00m\n", l);
//	ft_printf ("%.5ld\n", l);
//	printf ("\033[32;01m%.5ld\033[00m\n", l);
//	ft_printf ("%.5ld\n", l);
//	printf ("\033[32;01m%0.5ld\033[00m\n", l);
//	ft_printf ("%0.5ld\n", l);
//	printf ("\033[32;01m%-.5ld\033[00m\n", l);
//	ft_printf ("%-.5ld\n", l);
//	printf ("\033[32;01m%+.5ld\033[00m\n", l);
//	ft_printf ("%+.5ld\n", l);
//	printf ("\033[32;01m% .5ld\033[00m\n", l);
//	ft_printf ("% .5ld\n", l);
//	printf ("\033[32;01m%12.5ld\033[00m\n", l);
//	ft_printf ("%12.5ld\n", l);
//	printf ("\033[32;01m%012.5ld\033[00m\n", l);
//	ft_printf ("%012.5ld\n", l);
//	printf ("\033[32;01m%-12.5ld\033[00m\n", l);
//	ft_printf ("%-12.5ld\n", l);
//	printf ("\033[32;01m%+12.5ld\033[00m\n", l);
//	ft_printf ("%+12.5ld\n", l);
//	printf ("\033[32;01m% 12.5ld\033[00m\n", l);
//	ft_printf ("% 12.5ld\n", l);
//	printf ("\033[32;01m%0+12.5ld\033[00m\n", l);
//	ft_printf ("%0+12.5ld\n", l);
//	printf ("\033[32;01m%0 12.5ld\033[00m\n", l);
//	ft_printf ("%0 12.5ld\n", l);
//	printf ("\033[32;01m%- 12.5ld\033[00m\n", l);
//	ft_printf ("%-+12.5ld\n", l);
//	printf ("\033[32;01m%- 12.5ld\033[00m\n", l);
//	ft_printf ("%- 12.5ld\n\n", l);
//
//
//	printf("--- TEST %%ld negatif avec precision ---\n\n");
//
//	l = -225345;
//
//	printf ("\033[32;01m%.5ld\033[00m\n", l);
//	ft_printf ("%.5ld\n", l);
//	printf ("\033[32;01m%.5ld\033[00m\n", l);
//	ft_printf ("%.5ld\n", l);
//	printf ("\033[32;01m%0.5ld\033[00m\n", l);
//	ft_printf ("%0.5ld\n", l);
//	printf ("\033[32;01m%-.5ld\033[00m\n", l);
//	ft_printf ("%-.5ld\n", l);
//	printf ("\033[32;01m%+.5ld\033[00m\n", l);
//	ft_printf ("%+.5ld\n", l);
//	printf ("\033[32;01m% .5ld\033[00m\n", l);
//	ft_printf ("% .5ld\n", l);
//	printf ("\033[32;01m%12.5ld\033[00m\n", l);
//	ft_printf ("%12.5ld\n", l);
//	printf ("\033[32;01m%012.5ld\033[00m\n", l);
//	ft_printf ("%012.5ld\n", l);
//	printf ("\033[32;01m%-12.5ld\033[00m\n", l);
//	ft_printf ("%-12.5ld\n", l);
//	printf ("\033[32;01m%+12.5ld\033[00m\n", l);
//	ft_printf ("%+12.5ld\n", l);
//	printf ("\033[32;01m% 12.5ld\033[00m\n", l);
//	ft_printf ("% 12.5ld\n", l);
//	printf ("\033[32;01m%0+12.5ld\033[00m\n", l);
//	ft_printf ("%0+12.5ld\n", l);
//	printf ("\033[32;01m%0 12.5ld\033[00m\n", l);
//	ft_printf ("%0 12.5ld\n", l);
//	printf ("\033[32;01m%- 12.5ld\033[00m\n", l);
//	ft_printf ("%-+12.5ld\n", l);
//	printf ("\033[32;01m%- 12.5ld\033[00m\n", l);
//	ft_printf ("%- 12.5ld\n\n", l);
//	
//	printf("--- TEST %%lld positif ---\n\n");
//
//	long long		ll = 225345;
//
//	printf ("\033[32;01m%lld\033[00m\n", ll);
//	ft_printf ("%lld\n\n", ll);
//	
//	printf("--- TElT %%lld negatif ---\n\n");
//
//	ll = -225345;
//
//	printf ("\033[32;01m%lld\033[00m\n", ll);
//	ft_printf ("%lld\n\n", ll);
//
//	printf("--- TEST %%lld positif aves attributs ---\n\n");
//	
//	ll = 225345;
//
//	printf ("\033[32;01m%0lld\033[00m\n", ll);
//	ft_printf ("%0lld\n", ll);
//	printf ("\033[32;01m%-lld\033[00m\n", ll);
//	ft_printf ("%-lld\n", ll);
//	printf ("\033[32;01m%+lld\033[00m\n", ll);
//	ft_printf ("%+lld\n", ll);
//	printf ("\033[32;01m% lld\033[00m\n", ll);
//	ft_printf ("% lld\n", ll);
//	printf ("\033[32;01m%0+lld\033[00m\n", ll);
//	ft_printf ("%0+lld\n", ll);
//	printf ("\033[32;01m%0 lld\033[00m\n", ll);
//	ft_printf ("%0 lld\n", ll);
//	printf ("\033[32;01m%-+lld\033[00m\n", ll);
//	ft_printf ("%-+lld\n", ll);
//	printf ("\033[32;01m%- lld\033[00m\n", ll);
//	ft_printf ("%- lld\n\n", ll);
//	
//	printf("--- TEST %%lld negatif avec attributs ---\n\n");
//	
//	ll = -225345;
//
//	printf ("\033[32;01m%0lld\033[00m\n", ll);
//	ft_printf ("%0lld\n", ll);
//	printf ("\033[32;01m%-lld\033[00m\n", ll);
//	ft_printf ("%-lld\n", ll);
//	printf ("\033[32;01m%+lld\033[00m\n", ll);
//	ft_printf ("%+lld\n", ll);
//	printf ("\033[32;01m% lld\033[00m\n", ll);
//	ft_printf ("% lld\n", ll);
//	printf ("\033[32;01m%0+lld\033[00m\n", ll);
//	ft_printf ("%0+lld\n", ll);
//	printf ("\033[32;01m%0 lld\033[00m\n", ll);
//	ft_printf ("%0 lld\n", ll);
//	printf ("\033[32;01m%-+lld\033[00m\n", ll);
//	ft_printf ("%-+lld\n", ll);
//	printf ("\033[32;01m%- lld\033[00m\n", ll);
//	ft_printf ("%- lld\n\n", ll);
//	
//	printf("--- TEST %%lld positif avec largeur ---\n\n");
//	
//	ll = 225345;
//
//	printf ("\033[32;01m%12lld\033[00m\n", ll);
//	ft_printf ("%12lld\n", ll);
//	printf ("\033[32;01m%012lld\033[00m\n", ll);
//	ft_printf ("%012lld\n", ll);
//	printf ("\033[32;01m%-12lld\033[00m\n", ll);
//	ft_printf ("%-12lld\n", ll);
//	printf ("\033[32;01m%+12lld\033[00m\n", ll);
//	ft_printf ("%+12lld\n", ll);
//	printf ("\033[32;01m% 12lld\033[00m\n", ll);
//	ft_printf ("% 12lld\n", ll);
//	printf ("\033[32;01m%0+12lld\033[00m\n", ll);
//	ft_printf ("%0+12lld\n", ll);
//	printf ("\033[32;01m%0 12lld\033[00m\n", ll);
//	ft_printf ("%0 12lld\n", ll);
//	printf ("\033[32;01m%-+12lld\033[00m\n", ll);
//	ft_printf ("%-+12lld\n", ll);
//	printf ("\033[32;01m%- 12lld\033[00m\n", ll);
//	ft_printf ("%- 12lld\n\n", ll);
//	
//	printf("--- TEST %%lld negatif avec largeur ---\n\n");
//	
//	ll = -225345;
//
//	printf ("\033[32;01m%012lld\033[00m\n", ll);
//	ft_printf ("%012lld\n", ll);
//	printf ("\033[32;01m%012lld\033[00m\n", ll);
//	ft_printf ("%012lld\n", ll);
//	printf ("\033[32;01m%-12lld\033[00m\n", ll);
//	ft_printf ("%-12lld\n", ll);
//	printf ("\033[32;01m%+12lld\033[00m\n", ll);
//	ft_printf ("%+12lld\n", ll);
//	printf ("\033[32;01m% 12lld\033[00m\n", ll);
//	ft_printf ("% 12lld\n", ll);
//	printf ("\033[32;01m%0+12lld\033[00m\n", ll);
//	ft_printf ("%0+12lld\n", ll);
//	printf ("\033[32;01m%0 12lld\033[00m\n", ll);
//	ft_printf ("%0 12lld\n", ll);
//	printf ("\033[32;01m%-+12lld\033[00m\n", ll);
//	ft_printf ("%-+12lld\n", ll);
//	printf ("\033[32;01m%- 12lld\033[00m\n", ll);
//	ft_printf ("%- 12lld\n\n", ll);
//
//	printf("--- TEST %%lld positif avec precision ---\n\n");
//
//	ll = 225345;
//
//	printf ("\033[32;01m%.5lld\033[00m\n", ll);
//	ft_printf ("%.5lld\n", ll);
//	printf ("\033[32;01m%.5lld\033[00m\n", ll);
//	ft_printf ("%.5lld\n", ll);
//	printf ("\033[32;01m%0.5lld\033[00m\n", ll);
//	ft_printf ("%0.5lld\n", ll);
//	printf ("\033[32;01m%-.5lld\033[00m\n", ll);
//	ft_printf ("%-.5lld\n", ll);
//	printf ("\033[32;01m%+.5lld\033[00m\n", ll);
//	ft_printf ("%+.5lld\n", ll);
//	printf ("\033[32;01m% .5lld\033[00m\n", ll);
//	ft_printf ("% .5lld\n", ll);
//	printf ("\033[32;01m%12.5lld\033[00m\n", ll);
//	ft_printf ("%12.5lld\n", ll);
//	printf ("\033[32;01m%012.5lld\033[00m\n", ll);
//	ft_printf ("%012.5lld\n", ll);
//	printf ("\033[32;01m%-12.5lld\033[00m\n", ll);
//	ft_printf ("%-12.5lld\n", ll);
//	printf ("\033[32;01m%+12.5lld\033[00m\n", ll);
//	ft_printf ("%+12.5lld\n", ll);
//	printf ("\033[32;01m% 12.5lld\033[00m\n", ll);
//	ft_printf ("% 12.5lld\n", ll);
//	printf ("\033[32;01m%0+12.5lld\033[00m\n", ll);
//	ft_printf ("%0+12.5lld\n", ll);
//	printf ("\033[32;01m%0 12.5lld\033[00m\n", ll);
//	ft_printf ("%0 12.5lld\n", ll);
//	printf ("\033[32;01m%- 12.5lld\033[00m\n", ll);
//	ft_printf ("%-+12.5lld\n", ll);
//	printf ("\033[32;01m%- 12.5lld\033[00m\n", ll);
//	ft_printf ("%- 12.5lld\n\n", ll);
//
//
//	printf("--- TEST %%lld negatif avec precision ---\n\n");
//
//	ll = -225345;
//
//	printf ("\033[32;01m%.5lld\033[00m\n", ll);
//	ft_printf ("%.5lld\n", ll);
//	printf ("\033[32;01m%.5lld\033[00m\n", ll);
//	ft_printf ("%.5lld\n", ll);
//	printf ("\033[32;01m%0.5lld\033[00m\n", ll);
//	ft_printf ("%0.5lld\n", ll);
//	printf ("\033[32;01m%-.5lld\033[00m\n", ll);
//	ft_printf ("%-.5lld\n", ll);
//	printf ("\033[32;01m%+.5lld\033[00m\n", ll);
//	ft_printf ("%+.5lld\n", ll);
//	printf ("\033[32;01m% .5lld\033[00m\n", ll);
//	ft_printf ("% .5lld\n", ll);
//	printf ("\033[32;01m%12.5lld\033[00m\n", ll);
//	ft_printf ("%12.5lld\n", ll);
//	printf ("\033[32;01m%012.5lld\033[00m\n", ll);
//	ft_printf ("%012.5lld\n", ll);
//	printf ("\033[32;01m%-12.5lld\033[00m\n", ll);
//	ft_printf ("%-12.5lld\n", ll);
//	printf ("\033[32;01m%+12.5lld\033[00m\n", ll);
//	ft_printf ("%+12.5lld\n", ll);
//	printf ("\033[32;01m% 12.5lld\033[00m\n", ll);
//	ft_printf ("% 12.5lld\n", ll);
//	printf ("\033[32;01m%0+12.5lld\033[00m\n", ll);
//	ft_printf ("%0+12.5lld\n", ll);
//	printf ("\033[32;01m%0 12.5lld\033[00m\n", ll);
//	ft_printf ("%0 12.5lld\n", ll);
//	printf ("\033[32;01m%- 12.5lld\033[00m\n", ll);
//	ft_printf ("%-+12.5lld\n", ll);
//	printf ("\033[32;01m%- 12.5lld\033[00m\n", ll);
//	ft_printf ("%- 12.5lld\n\n", ll);
//
//	printf("--- TEST %%jd positif ---\n\n");
//
//	l = 225345;
//
//	printf ("\033[32;01m%jd\033[00m\n", l);
//	ft_printf ("%jd\n\n", l);
//	
//	printf("--- TEST %%jd negatif ---\n\n");
//
//	l = -225345;
//
//	printf ("\033[32;01m%jd\033[00m\n", l);
//	ft_printf ("%jd\n\n", l);
//
//	printf("--- TEST %%jd positif aves attributs ---\n\n");
//	
//	l = 225345;
//
//	printf ("\033[32;01m%0jd\033[00m\n", l);
//	ft_printf ("%0jd\n", l);
//	printf ("\033[32;01m%-jd\033[00m\n", l);
//	ft_printf ("%-jd\n", l);
//	printf ("\033[32;01m%+jd\033[00m\n", l);
//	ft_printf ("%+jd\n", l);
//	printf ("\033[32;01m% jd\033[00m\n", l);
//	ft_printf ("% jd\n", l);
//	printf ("\033[32;01m%0+jd\033[00m\n", l);
//	ft_printf ("%0+jd\n", l);
//	printf ("\033[32;01m%0 jd\033[00m\n", l);
//	ft_printf ("%0 jd\n", l);
//	printf ("\033[32;01m%-+jd\033[00m\n", l);
//	ft_printf ("%-+jd\n", l);
//	printf ("\033[32;01m%- jd\033[00m\n", l);
//	ft_printf ("%- jd\n\n", l);
//	
//	printf("--- TEST %%jd negatif avec attributs ---\n\n");
//	
//	l = -225345;
//
//	printf ("\033[32;01m%0jd\033[00m\n", l);
//	ft_printf ("%0jd\n", l);
//	printf ("\033[32;01m%-jd\033[00m\n", l);
//	ft_printf ("%-jd\n", l);
//	printf ("\033[32;01m%+jd\033[00m\n", l);
//	ft_printf ("%+jd\n", l);
//	printf ("\033[32;01m% jd\033[00m\n", l);
//	ft_printf ("% jd\n", l);
//	printf ("\033[32;01m%0+jd\033[00m\n", l);
//	ft_printf ("%0+jd\n", l);
//	printf ("\033[32;01m%0 jd\033[00m\n", l);
//	ft_printf ("%0 jd\n", l);
//	printf ("\033[32;01m%-+jd\033[00m\n", l);
//	ft_printf ("%-+jd\n", l);
//	printf ("\033[32;01m%- jd\033[00m\n", l);
//	ft_printf ("%- jd\n\n", l);
//	
//	printf("--- TEST %%jd positif avec largeur ---\n\n");
//	
//	l = 225345;
//
//	printf ("\033[32;01m%12jd\033[00m\n", l);
//	ft_printf ("%12jd\n", l);
//	printf ("\033[32;01m%012jd\033[00m\n", l);
//	ft_printf ("%012jd\n", l);
//	printf ("\033[32;01m%-12jd\033[00m\n", l);
//	ft_printf ("%-12jd\n", l);
//	printf ("\033[32;01m%+12jd\033[00m\n", l);
//	ft_printf ("%+12jd\n", l);
//	printf ("\033[32;01m% 12jd\033[00m\n", l);
//	ft_printf ("% 12jd\n", l);
//	printf ("\033[32;01m%0+12jd\033[00m\n", l);
//	ft_printf ("%0+12jd\n", l);
//	printf ("\033[32;01m%0 12jd\033[00m\n", l);
//	ft_printf ("%0 12jd\n", l);
//	printf ("\033[32;01m%-+12jd\033[00m\n", l);
//	ft_printf ("%-+12jd\n", l);
//	printf ("\033[32;01m%- 12jd\033[00m\n", l);
//	ft_printf ("%- 12jd\n\n", l);
//	
//	printf("--- TEST %%jd negatif avec largeur ---\n\n");
//	
//	l = -225345;
//
//	printf ("\033[32;01m%012jd\033[00m\n", l);
//	ft_printf ("%012jd\n", l);
//	printf ("\033[32;01m%012jd\033[00m\n", l);
//	ft_printf ("%012jd\n", l);
//	printf ("\033[32;01m%-12jd\033[00m\n", l);
//	ft_printf ("%-12jd\n", l);
//	printf ("\033[32;01m%+12jd\033[00m\n", l);
//	ft_printf ("%+12jd\n", l);
//	printf ("\033[32;01m% 12jd\033[00m\n", l);
//	ft_printf ("% 12jd\n", l);
//	printf ("\033[32;01m%0+12jd\033[00m\n", l);
//	ft_printf ("%0+12jd\n", l);
//	printf ("\033[32;01m%0 12jd\033[00m\n", l);
//	ft_printf ("%0 12jd\n", l);
//	printf ("\033[32;01m%-+12jd\033[00m\n", l);
//	ft_printf ("%-+12jd\n", l);
//	printf ("\033[32;01m%- 12jd\033[00m\n", l);
//	ft_printf ("%- 12jd\n\n", l);
//
//	printf("--- TEST %%jd positif avec precision ---\n\n");
//
//	l = 225345;
//
//	printf ("\033[32;01m%.5jd\033[00m\n", l);
//	ft_printf ("%.5jd\n", l);
//	printf ("\033[32;01m%.5jd\033[00m\n", l);
//	ft_printf ("%.5jd\n", l);
//	printf ("\033[32;01m%0.5jd\033[00m\n", l);
//	ft_printf ("%0.5jd\n", l);
//	printf ("\033[32;01m%-.5jd\033[00m\n", l);
//	ft_printf ("%-.5jd\n", l);
//	printf ("\033[32;01m%+.5jd\033[00m\n", l);
//	ft_printf ("%+.5jd\n", l);
//	printf ("\033[32;01m% .5jd\033[00m\n", l);
//	ft_printf ("% .5jd\n", l);
//	printf ("\033[32;01m%12.5jd\033[00m\n", l);
//	ft_printf ("%12.5jd\n", l);
//	printf ("\033[32;01m%012.5jd\033[00m\n", l);
//	ft_printf ("%012.5jd\n", l);
//	printf ("\033[32;01m%-12.5jd\033[00m\n", l);
//	ft_printf ("%-12.5jd\n", l);
//	printf ("\033[32;01m%+12.5jd\033[00m\n", l);
//	ft_printf ("%+12.5jd\n", l);
//	printf ("\033[32;01m% 12.5jd\033[00m\n", l);
//	ft_printf ("% 12.5jd\n", l);
//	printf ("\033[32;01m%0+12.5jd\033[00m\n", l);
//	ft_printf ("%0+12.5jd\n", l);
//	printf ("\033[32;01m%0 12.5jd\033[00m\n", l);
//	ft_printf ("%0 12.5jd\n", l);
//	printf ("\033[32;01m%- 12.5jd\033[00m\n", l);
//	ft_printf ("%-+12.5jd\n", l);
//	printf ("\033[32;01m%- 12.5jd\033[00m\n", l);
//	ft_printf ("%- 12.5jd\n\n", l);
//
//
//	printf("--- TEST %%jd negatif avec precision ---\n\n");
//
//	l = -225345;
//
//	printf ("\033[32;01m%.5jd\033[00m\n", l);
//	ft_printf ("%.5jd\n", l);
//	printf ("\033[32;01m%.5jd\033[00m\n", l);
//	ft_printf ("%.5jd\n", l);
//	printf ("\033[32;01m%0.5jd\033[00m\n", l);
//	ft_printf ("%0.5jd\n", l);
//	printf ("\033[32;01m%-.5jd\033[00m\n", l);
//	ft_printf ("%-.5jd\n", l);
//	printf ("\033[32;01m%+.5jd\033[00m\n", l);
//	ft_printf ("%+.5jd\n", l);
//	printf ("\033[32;01m% .5jd\033[00m\n", l);
//	ft_printf ("% .5jd\n", l);
//	printf ("\033[32;01m%12.5jd\033[00m\n", l);
//	ft_printf ("%12.5jd\n", l);
//	printf ("\033[32;01m%012.5jd\033[00m\n", l);
//	ft_printf ("%012.5jd\n", l);
//	printf ("\033[32;01m%-12.5jd\033[00m\n", l);
//	ft_printf ("%-12.5jd\n", l);
//	printf ("\033[32;01m%+12.5jd\033[00m\n", l);
//	ft_printf ("%+12.5jd\n", l);
//	printf ("\033[32;01m% 12.5jd\033[00m\n", l);
//	ft_printf ("% 12.5jd\n", l);
//	printf ("\033[32;01m%0+12.5jd\033[00m\n", l);
//	ft_printf ("%0+12.5jd\n", l);
//	printf ("\033[32;01m%0 12.5jd\033[00m\n", l);
//	ft_printf ("%0 12.5jd\n", l);
//	printf ("\033[32;01m%- 12.5jd\033[00m\n", l);
//	ft_printf ("%-+12.5jd\n", l);
//	printf ("\033[32;01m%- 12.5jd\033[00m\n", l);
//	ft_printf ("%- 12.5jd\n\n", l);
//
//	printf("--- TEST %%zd positif ---\n\n");
//
//	l = 225345;
//
//	printf ("\033[32;01m%zd\033[00m\n", l);
//	ft_printf ("%zd\n\n", l);
//	
//	printf("--- TEST %%zd negatif ---\n\n");
//
//	l = -225345;
//
//	printf ("\033[32;01m%zd\033[00m\n", l);
//	ft_printf ("%zd\n\n", l);
//
//	printf("--- TEST %%zd positif aves attributs ---\n\n");
//	
//	l = 225345;
//
//	printf ("\033[32;01m%0zd\033[00m\n", l);
//	ft_printf ("%0zd\n", l);
//	printf ("\033[32;01m%-zd\033[00m\n", l);
//	ft_printf ("%-zd\n", l);
//	printf ("\033[32;01m%+zd\033[00m\n", l);
//	ft_printf ("%+zd\n", l);
//	printf ("\033[32;01m% zd\033[00m\n", l);
//	ft_printf ("% zd\n", l);
//	printf ("\033[32;01m%0+zd\033[00m\n", l);
//	ft_printf ("%0+zd\n", l);
//	printf ("\033[32;01m%0 zd\033[00m\n", l);
//	ft_printf ("%0 zd\n", l);
//	printf ("\033[32;01m%-+zd\033[00m\n", l);
//	ft_printf ("%-+zd\n", l);
//	printf ("\033[32;01m%- zd\033[00m\n", l);
//	ft_printf ("%- zd\n\n", l);
//	
//	printf("--- TEST %%zd negatif avec attributs ---\n\n");
//	
//	l = -225345;
//
//	printf ("\033[32;01m%0zd\033[00m\n", l);
//	ft_printf ("%0zd\n", l);
//	printf ("\033[32;01m%-zd\033[00m\n", l);
//	ft_printf ("%-zd\n", l);
//	printf ("\033[32;01m%+zd\033[00m\n", l);
//	ft_printf ("%+zd\n", l);
//	printf ("\033[32;01m% zd\033[00m\n", l);
//	ft_printf ("% zd\n", l);
//	printf ("\033[32;01m%0+zd\033[00m\n", l);
//	ft_printf ("%0+zd\n", l);
//	printf ("\033[32;01m%0 zd\033[00m\n", l);
//	ft_printf ("%0 zd\n", l);
//	printf ("\033[32;01m%-+zd\033[00m\n", l);
//	ft_printf ("%-+zd\n", l);
//	printf ("\033[32;01m%- zd\033[00m\n", l);
//	ft_printf ("%- zd\n\n", l);
//	
//	printf("--- TEST %%zd positif avec largeur ---\n\n");
//	
//	l = 225345;
//
//	printf ("\033[32;01m%12zd\033[00m\n", l);
//	ft_printf ("%12zd\n", l);
//	printf ("\033[32;01m%012zd\033[00m\n", l);
//	ft_printf ("%012zd\n", l);
//	printf ("\033[32;01m%-12zd\033[00m\n", l);
//	ft_printf ("%-12zd\n", l);
//	printf ("\033[32;01m%+12zd\033[00m\n", l);
//	ft_printf ("%+12zd\n", l);
//	printf ("\033[32;01m% 12zd\033[00m\n", l);
//	ft_printf ("% 12zd\n", l);
//	printf ("\033[32;01m%0+12zd\033[00m\n", l);
//	ft_printf ("%0+12zd\n", l);
//	printf ("\033[32;01m%0 12zd\033[00m\n", l);
//	ft_printf ("%0 12zd\n", l);
//	printf ("\033[32;01m%-+12zd\033[00m\n", l);
//	ft_printf ("%-+12zd\n", l);
//	printf ("\033[32;01m%- 12zd\033[00m\n", l);
//	ft_printf ("%- 12zd\n\n", l);
//	
//	printf("--- TEST %%zd negatif avec largeur ---\n\n");
//	
//	l = -225345;
//
//	printf ("\033[32;01m%012zd\033[00m\n", l);
//	ft_printf ("%012zd\n", l);
//	printf ("\033[32;01m%012zd\033[00m\n", l);
//	ft_printf ("%012zd\n", l);
//	printf ("\033[32;01m%-12zd\033[00m\n", l);
//	ft_printf ("%-12zd\n", l);
//	printf ("\033[32;01m%+12zd\033[00m\n", l);
//	ft_printf ("%+12zd\n", l);
//	printf ("\033[32;01m% 12zd\033[00m\n", l);
//	ft_printf ("% 12zd\n", l);
//	printf ("\033[32;01m%0+12zd\033[00m\n", l);
//	ft_printf ("%0+12zd\n", l);
//	printf ("\033[32;01m%0 12zd\033[00m\n", l);
//	ft_printf ("%0 12zd\n", l);
//	printf ("\033[32;01m%-+12zd\033[00m\n", l);
//	ft_printf ("%-+12zd\n", l);
//	printf ("\033[32;01m%- 12zd\033[00m\n", l);
//	ft_printf ("%- 12zd\n\n", l);
//
//	printf("--- TEST %%zd positif avec precision ---\n\n");
//
//	l = 225345;
//
//	printf ("\033[32;01m%.5zd\033[00m\n", l);
//	ft_printf ("%.5zd\n", l);
//	printf ("\033[32;01m%.5zd\033[00m\n", l);
//	ft_printf ("%.5zd\n", l);
//	printf ("\033[32;01m%0.5zd\033[00m\n", l);
//	ft_printf ("%0.5zd\n", l);
//	printf ("\033[32;01m%-.5zd\033[00m\n", l);
//	ft_printf ("%-.5zd\n", l);
//	printf ("\033[32;01m%+.5zd\033[00m\n", l);
//	ft_printf ("%+.5zd\n", l);
//	printf ("\033[32;01m% .5zd\033[00m\n", l);
//	ft_printf ("% .5zd\n", l);
//	printf ("\033[32;01m%12.5zd\033[00m\n", l);
//	ft_printf ("%12.5zd\n", l);
//	printf ("\033[32;01m%012.5zd\033[00m\n", l);
//	ft_printf ("%012.5zd\n", l);
//	printf ("\033[32;01m%-12.5zd\033[00m\n", l);
//	ft_printf ("%-12.5zd\n", l);
//	printf ("\033[32;01m%+12.5zd\033[00m\n", l);
//	ft_printf ("%+12.5zd\n", l);
//	printf ("\033[32;01m% 12.5zd\033[00m\n", l);
//	ft_printf ("% 12.5zd\n", l);
//	printf ("\033[32;01m%0+12.5zd\033[00m\n", l);
//	ft_printf ("%0+12.5zd\n", l);
//	printf ("\033[32;01m%0 12.5zd\033[00m\n", l);
//	ft_printf ("%0 12.5zd\n", l);
//	printf ("\033[32;01m%- 12.5zd\033[00m\n", l);
//	ft_printf ("%-+12.5zd\n", l);
//	printf ("\033[32;01m%- 12.5zd\033[00m\n", l);
//	ft_printf ("%- 12.5zd\n\n", l);
//
//
//	printf("--- TEST %%zd negatif avec precision ---\n\n");
//
//	l = -225345;
//
//	printf ("\033[32;01m%.5zd\033[00m\n", l);
//	ft_printf ("%.5zd\n", l);
//	printf ("\033[32;01m%.5zd\033[00m\n", l);
//	ft_printf ("%.5zd\n", l);
//	printf ("\033[32;01m%0.5zd\033[00m\n", l);
//	ft_printf ("%0.5zd\n", l);
//	printf ("\033[32;01m%-.5zd\033[00m\n", l);
//	ft_printf ("%-.5zd\n", l);
//	printf ("\033[32;01m%+.5zd\033[00m\n", l);
//	ft_printf ("%+.5zd\n", l);
//	printf ("\033[32;01m% .5zd\033[00m\n", l);
//	ft_printf ("% .5zd\n", l);
//	printf ("\033[32;01m%12.5zd\033[00m\n", l);
//	ft_printf ("%12.5zd\n", l);
//	printf ("\033[32;01m%012.5zd\033[00m\n", l);
//	ft_printf ("%012.5zd\n", l);
//	printf ("\033[32;01m%-12.5zd\033[00m\n", l);
//	ft_printf ("%-12.5zd\n", l);
//	printf ("\033[32;01m%+12.5zd\033[00m\n", l);
//	ft_printf ("%+12.5zd\n", l);
//	printf ("\033[32;01m% 12.5zd\033[00m\n", l);
//	ft_printf ("% 12.5zd\n", l);
//	printf ("\033[32;01m%0+12.5zd\033[00m\n", l);
//	ft_printf ("%0+12.5zd\n", l);
//	printf ("\033[32;01m%0 12.5zd\033[00m\n", l);
//	ft_printf ("%0 12.5zd\n", l);
//	printf ("\033[32;01m%- 12.5zd\033[00m\n", l);
//	ft_printf ("%-+12.5zd\n", l);
//	printf ("\033[32;01m%- 12.5zd\033[00m\n", l);
//	ft_printf ("%- 12.5zd\n\n", l);
//	
	return (0);

}

