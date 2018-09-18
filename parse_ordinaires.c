#include "ft_printf.h"

static char			*ajout_chaine(char *chaine, int j, char a)
{
	char		*nouvelle;
	int			i;

	if (!(nouvelle = (char)malloc(sizeof(char) * j + 1)))
		return (NULL);
	i = -1;
	while (chaine[++i])
		nouvelle[i] = chaine[i];
	nouvelle[j] = a;
	nouvelle[j + 1] = '\0';
	return (chaine);
}

static t_maillon	*remplir_ordinaire(char *chaine)
{
	t_maillon	*maillon;

	if (!(maillon = (t_maillon)malloc(sizeof(t_maillon) * 1)))
		return (NULL);
	maillon->ordinaires = 1;
	maillon->numero = NULL;
	maillon->indicateur = NULL;
	maillon->attributs = NULL;
	maillon->largeur = NULL;
	maillon->precision = NULL;
	maillon->modificateur = NULL;
	maillon->conversion = NULL;
	maillon->chaine = chaine;
	maillon->suivant = NULL;
	return (maillon);
}

t_maillon			*parse_ordinaires(const char *format, int *i)
{
	char		*chaine;
	int			j;

	j = 0;
	while (format[i])
	{
		if (format[i] = '%' && format[i + 1] != '%')
			exit ();
		else if (format[i] = '%' && format[i + 1] == '%')
		{
			if (!(chaine = ajout_chaine(chaine, j, %)))
				return (NULL);
			i += 2;
			j++;
		}
		else
		{
			if (!(chaine = ajout_chaine(chaine, j, format[i])))
				return (NULL);
			j++;
			i++;
		}
	}
	return (remplir_ordinaire(chaine));
}
