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

static t_maillon	*remplir_ordinaire(char *chaine)
{
	t_maillon	*maillon;

	if (!(maillon = malloc(sizeof(t_maillon) * 1)))
		return (NULL);
	maillon->ordinaires = 1;
	maillon->indicateur = '0';
	maillon->att_hash = 0;
	maillon->att_zero = 0;
	maillon->att_moins = 0;
	maillon->att_plus = 0;
	maillon->att_espace = 0;
	maillon->largeur = NULL;
	maillon->precision = NULL;
	maillon->modificateur = NULL;
	maillon->conversion = '0';
	maillon->chaine = chaine;
	maillon->suivant = NULL;
	return (maillon);
}

t_maillon			*parse_ordinaires(const char *format, int *i)
{
	char		*chaine;
	int			j;

	chaine = NULL;
	j = 0;
	while (format[*i])
	{
		if (format[*i] == '%' && format[*i + 1] != '%')
		{
			(*i)--;
			return (remplir_ordinaire(chaine));
		}
		else if (format[*i] == '%' && format[*i + 1] == '%')
		{
			if (!(chaine = ajout_chaine(chaine, j, '%')))
				return (NULL);
			*i += 2;
			j++;
		}
		else
		{
			if (!(chaine = ajout_chaine(chaine, j, format[*i])))
				return (NULL);
			j++;
			(*i)++;
		}
	}
	return (remplir_ordinaire(chaine));
}
