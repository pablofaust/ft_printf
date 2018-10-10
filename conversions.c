#include "ft_printf.h"

int		remplir_chaine(char *arg, t_maillon **maillon)
{
	int		totale;
	int		portion;
	int		i;
	int		j;
	
	totale = ft_strlen(arg);
	portion = totale;
	if ((*maillon)->largeur != NULL)
		totale = ft_atoi((*maillon)->largeur);
	if ((*maillon)->precision != NULL)
		portion = ft_atoi((*maillon)->precision) - 1;
	if (!((*maillon)->chaine = ft_strnew(totale)))
		return (0);
	i = -1 ;
	while (++i < totale - portion)
		(*maillon)->chaine[i] = ' ';
	j = 0;
	while (i <= totale)
		(*maillon)->chaine[i++] = arg[j++];
	if ((*maillon)->precision == NULL)
		(*maillon)->chaine[i] = '\0';
	return (1);
}

int		conversion_s(va_list ap, t_maillon **maillon)
{
	if ((*maillon)->conversion == 's')
	{
		if (!(remplir_chaine((char*)va_arg(ap, const char*), maillon)))
			return (0);
	}
	if ((*maillon)->conversion == 'S')
	{
		wchar_t		*sw;

		sw = va_arg(ap, wchar_t *);
		while (*sw)
		{
			printf("%s\n", ft_itoa_base_ll(*sw, 2));
			sw++;
		}
		//		if (!(remplir_chaine((char*)va_arg(ap, const wchar_t*), maillon)))
		//			return (0);
	}
	return (1);
}

int		conversion_p_x(va_list ap, t_maillon **maillon)
{
	(void)ap;
	(void)maillon;
	return (1);
}

int		conversion_d_i(va_list ap, t_maillon **maillon)
{
	(void)ap;
	(void)maillon;
	return (1);
}

int		conversion_o(va_list ap, t_maillon **maillon)
{
	(void)ap;
	(void)maillon;
	return (1);
}

int		conversion_u(va_list ap, t_maillon **maillon)
{
	(void)ap;
	(void)maillon;
	return (1);
}

int		conversion_c(va_list ap, t_maillon **maillon)
{
	(void)ap;
	(void)maillon;
	return (1);
}
