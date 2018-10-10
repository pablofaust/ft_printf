#include "ft_printf.h"

int		remplir_chaine(char *arg, t_maillon **maillon)
{
	int		i;
	int		precision;

	if (!((*maillon)->chaine = malloc(sizeof(char) * ft_strlen(arg) + 1)))
		return (0);
	i = 0;
	if ((*maillon)->precision != NULL)
		precision = ft_atoi((*maillon)->precision);
	while (arg[i] && i <= precision)
	{
		(*maillon)->chaine[i] = arg[i];
		i++;
	}
	if ((*maillon)->precision == NULL || ft_atoi((*maillon)->precision) > i)
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
			printf("%s\n", ft_itoa_base_ll(114, 2));
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
