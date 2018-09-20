#include "ft_printf.h"

static int		nb_chiffres(const char *format, int **i)
{
	int		j;
	int		longueur;

	j = **i;
	longueur = 0;
	while (format[j] && ft_isdigit(format[j]))
	{
		j++;
		longueur++;
	}
	return (longueur);
}

int				check_largeur(const char *format, int **i, t_maillon **maillon)
{
	int			j;

	(*maillon)->largeur = NULL;
	if (ft_isdigit(format[**i]))
	{
		if (format[**i - 1] != '%' || !(est_attribut(format[**i - 1])))
			return (0);
	}
	if (!((*maillon)->largeur = malloc(sizeof(char) * nb_chiffres(format, i) + 1)))
		return (0);
	j = 0;
	while (ft_isdigit(format[**i]))
	{
		(*maillon)->largeur[j] = format[**i];
		j++;
		(**i)++;
	}
	(*maillon)->largeur[j] = '\0';
	return (1);
}

int				check_precision(const char *format, int **i, t_maillon **maillon)
{
	int		j;

	if (format[**i] == '.')
	{
		if (format[**i - 1] != '%' && !(est_attribut(format[**i - 1] && !(ft_isdigit(format[**i - 1])))))
			return (0);
		if (!(ft_isdigit(format[**i + 1]) || format[**i + 1] == '-'))
		{
			(*maillon)->precision = NULL;
			return (1);
		}
	}
	if (!((*maillon)->precision = malloc(sizeof(char) * nb_chiffres(format, i) + 1)))
		return (0);
	j = 0;
	while (ft_isdigit(format[**i]))
	{
		(*maillon)->precision[j] = format[**i];
		j++;
		(**i)++;
	}
	(*maillon)->precision[j] = '\0';
	return (1);
}
