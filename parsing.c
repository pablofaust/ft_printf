#include "ft_printf.h"

int				check_largeur(const char *format, int **i, t_maillon **maillon)
{
}

int				check_precision

int				check_modificateur

t_maillon		*parse_conversion(const char *format, int *i)
{
	t_maillon	*maillon;
	
	if (!(maillon = (t_maillon)malloc(sizeof(t_maillon) * 1)))
		return (NULL);
	maillon->ordinaires = 0;
	while (format[(*i)++])
	{
		if (!(check_attributs(const char *format, &i, &maillon)))
			return (NULL);
		if (!(check_largeur(const char *format, &i, &maillon)))
			return (NULL);
		if (!(check_precision(const char *format, &i, &maillon)))
			return (NULL);
		if (!(check_modificateur(const char *format, &i, &maillon)))
			return (NULL);
}

int				parsing(const char *format, t_maillon **maillons)
{
	t_maillon		*maillon;
	int				i;

	i = -1;
	while (format[++i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			if (!(maillon = parse_conversion(format, &i)))
				return (0);
			else
			{
				if (!(maillon = parse_ordinaires(format, &i)))
					return (0);
			}
		}
		if (!(maillons = ajouter_maillon(maillons, maillon)))
			return (0);
	}
}
