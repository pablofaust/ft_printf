#include "ft_printf.h"

static int			check_erreurs(const char *format, int **i)
{
	if (!(est_attribut(format[**i])) && !(ft_isdigit(format[**i])) && !(est_modificateur(format, i)) && !(est_conversion(format, i)) && format[**i] != '.')
		return (0);
	else
		return (1);
}

char				est_conversion(const char *format, int **i)
{
	int		j;

	j = **i;
	if (format[j] == 's' || format[j] == 'S' || format[j] == 'p' || format[j] == 'd' \
			|| format[j] == 'D' || format[j] == 'i' || format[j] == 'o' || format[j] == 'O' \
			|| format[j] == 'u' || format[j] == 'U' || format[j] == 'x' || format[j] == 'X' \
			|| format[j] == 'c' || format[j] == 'C')
		return (format[j]);
	else
		return ('0');
}

static int			check_conversion(const char *format, int **i, t_maillon **maillon)
{
	char	conversion;

	(*maillon)->conversion = '0';
	conversion = est_conversion(format, i);
	if (conversion)
	{
		(*maillon)->conversion = conversion;
		if (conversion == 's')
			(*maillon)->fonction = conversion_s;
		else if (conversion == 'S')
			(*maillon)->fonction = conversion_S;
		else if (conversion == 'p')
			(*maillon)->fonction = conversion_p;
		else if (conversion == 'd')
			(*maillon)->fonction = conversion_d_i;
		else if (conversion == 'D')
			(*maillon)->fonction = conversion_d_i;
		// pas du tout sur de ca.
		else if (conversion == 'i')
			(*maillon)->fonction = conversion_d_i;
		else if (conversion == 'o')
			(*maillon)->fonction = conversion_o;
		else if (conversion == 'O')
			(*maillon)->fonction = conversion_o;
		// pas du tout sur de ca.
		else if (conversion == 'u')
			(*maillon)->fonction = conversion_u;
		else if (conversion == 'U')
			(*maillon)->fonction = conversion_u;
		// pas du tout sur de ca.
		else if (conversion == 'x')
			(*maillon)->fonction = conversion_x;
		else if (conversion == 'X')
			(*maillon)->fonction = conversion_X;
		else if (conversion == 'c')
			(*maillon)->fonction = conversion_c;
		else if (conversion == 'C')
			(*maillon)->fonction = conversion_C;
	}
	return (1);
}

static t_maillon	*parse_conversion(const char *format, int *i)
{
	t_maillon	*maillon;

	if (!(maillon = malloc(sizeof(t_maillon) * 1)))
		return (NULL);
	maillon->ordinaires = 0;
	while (format[*i])
	{
		if (!(check_attributs(format, &i, &maillon)))
			return (NULL);
		if (!(check_largeur(format, &i, &maillon)))
			return (NULL);
		if (!(check_precision(format, &i, &maillon)))
			return (NULL);
		if (!(check_modificateur(format, &i, &maillon)))
			return (NULL);
		if (!(check_conversion(format, &i, &maillon)))
			return (NULL);
		if (!(check_erreurs(format, &i)))
			return (NULL);
		(*i)++;
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
