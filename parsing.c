#include "ft_printf.h"

int					est_attribut(char a)
{
	if (a == '#' || a == '0' || a == '-' || a == '+' || a ==' ')
		return (1);
	else
		return (0);
}

int					est_modificateur(char a)
{
	if (a == 'h' || a == 'l' || a == 'j' || a =='z')
		return (1);
	else
		return (0);
}

int					est_conversion(char a)
{
	if (a == 's' || a == 'S' || a == 'p' || a == 'd' || a == 'D' \
			|| a == 'i' || a == 'o' || a == 'O' || a == 'u' \
			|| a == 'U' || a == 'x' || a == 'X' || a == 'c' \
			|| a == 'C')
		return (1);
	else
		return (0);
}

static int		parse_conversion(const char *format, int *i, t_maillon **maillon)
{
	while (format[*i])
	{
		if (est_attribut(format[*i]))
		{
			if (!(attributs(format, &i, maillon)))
				return (0);
		}
		else if (ft_isdigit(format[*i]))
		{
			if (!(largeur(format, &i, maillon)))
				return (0);
		}
		else if (format[*i] == '.')
		{
			if (!(precision(format, &i, maillon)))
				return (0);
		}
		else if (est_modificateur(format[*i]))
		{
			if (!(modificateur(format, &i, maillon)))
				return (0);
		}
		else if (est_conversion(format[*i]))
		{
			if (!(conversion(format, &i, maillon)))
				return (0);
		}
		else
			break ;
		(*i)++;
	}
	return (1);
}

t_maillon			*parsing(const char *format, t_maillon **maillons)
{
	t_maillon		*maillon;
	int				i;

	i = 0;
	while (i < (int)ft_strlen(format))
	{
		if (!(maillon = creer_maillon(maillon)))
			return (0);
		if (format[i] == '%' && format[i + 1] && format[i + 1] != '%')
		{
			if (!(parse_conversion(format, &i, &maillon)))
				return (NULL);
		}
		else
		{
			if (!(parse_ordinaires(format, &i, &maillon)))
				return (NULL);
		}
		if (!(ajouter_maillon(maillons, maillon)))
			return (NULL);
		i++;
	}
	return (*maillons);
}
