#include "ft_printf.h"

static int			check_erreurs(const char *format, int **i)
{
	if (!(est_attribut(format[**i])) && !(ft_isdigit(format[**i])) && !(est_modificateur(format, i)) && format[**i] != '.')
		return (0);
	else
		return (1);
}

static t_maillon	*parse_conversion(const char *format, int *i)
{
	t_maillon	*maillon;

	if (!(maillon = malloc(sizeof(t_maillon) * 1)))
		return (NULL);
	maillon->ordinaires = 0;
	while (format[(*i)++])
	{
		if (!(check_attributs(format, &i, &maillon)))
			return (NULL);
		if (!(check_largeur(format, &i, &maillon)))
			return (NULL);
		if (!(check_precision(format, &i, &maillon)))
			return (NULL);
		if (!(check_modificateur(format, &i, &maillon)))
			return (NULL);
		if (!(check_erreurs(format, &i)))
			return (NULL);
	}
	return (maillon);
}

t_maillon			*parsing(const char *format, t_maillon **maillons)
{
	t_maillon		*maillon;
	int				i;

	i = 0;
	while (i < (int)ft_strlen(format))
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			if (!(maillon = parse_conversion(format, &i)))
				return (NULL);
		}
		else
		{
			if (!(maillon = parse_ordinaires(format, &i)))
				return (NULL);
		}
		i++;
	}
	if (!(maillons = ajouter_maillon(maillons, maillon)))
		return (NULL);
	return (*maillons);
}
