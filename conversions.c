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
		portion = ft_atoi((*maillon)->precision);
	if (!((*maillon)->chaine = ft_strnew(totale)))
		return (0);
	i = 0 ;
	while ((*maillon)->largeur != NULL && i < totale - portion)
		(*maillon)->chaine[i++] = ' ';
	j = 0;
	while (i <= totale && portion--)
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
	}
	return (1);
}

int		conversion_p_x(va_list ap, t_maillon **maillon)
{
	long long	arg;
	char		*itoa;

	arg = (long long)va_arg(ap, void*);
	if (!(itoa = ft_itoa_base_ll(arg, 16)))
		return (0);
	if (!((*maillon)->chaine = ft_strnew(ft_strlen(itoa) + 2)))
		return (0);
	if (!((*maillon)->chaine = ft_strjoin("0x", itoa)))
		return (0);
	return (1);
}

char		*aj_precision(char *nb, int precision)
{
	char	*res;
	int		i;
	int		zeros;
	int		neg;
	int		j;

	neg = (nb[0] == '-') ? 1 : 0;
	zeros = precision - ft_strlen(nb);
	if (!(res = ft_strnew(precision)))
		return (NULL);
	i = 0;
	if (neg)
	{
		res[0] = '-';
		zeros++;
		i++;
	}
	while (i < zeros)
		res[i++] = '0';
	j = 1;
	while (i <= precision)
		res[i++] = nb[j++];
	return (res);
}

int		conversion_d_i(va_list ap, t_maillon **maillon)
{
	char	*nb;
	int		precision;

	if (!(nb = ft_itoa(va_arg(ap, int))))
		return (0);
	precision = ((*maillon)->precision) != NULL ? ft_atoi((*maillon)->precision) : 0;
	if (nb[0i] == '-')
		(*maillon)->neg = 1;
	if (precision != 0)
	{
		if (!(nb = aj_precision(nb, precision)))
			return (0);
	}
	if (!(remplir_chaine(nb, maillon)))
		return (0);
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
