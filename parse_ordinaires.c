#include "ft_printf.h"

static char			*ajout_chaine(char *chaine, int j, char a)
{
	char		*nouvelle;
	int			i;

	i = 0;
	if (chaine == NULL)
	{
		if (!(chaine = malloc(sizeof(char) * 2)))
			return (NULL);
		chaine[i] = a;
		chaine[i + 1] = '\0';
		return (chaine);
	}
	else
	{
		if (!(nouvelle = malloc(sizeof(char) * j + 1)))
			return (NULL);
		while (i <= j)
		{
			nouvelle[i] = chaine[i];
			i++;
		}
		nouvelle[j] = a;
		nouvelle[j + 1] = '\0';
	}
	return (nouvelle);
}

int				parse_ordinaires(const char *format, int *i, t_maillon **maillon)
{
	char		*chaine;
	int			j;

	chaine = NULL;
	j = 0;
	while (format[*i])
	{
		if (format[*i] == '%')
		{
			if (format[*i - 1] && format[*i - 1] != '%' && format[*i + 1] && format[*i + 1] != '%')
				return (1);
		}
		if (!((*maillon)->chaine = ajout_chaine(chaine, j, format[*i])))
			return (0);
		j++;
		(*i)++;
	}
	return (1);
}
