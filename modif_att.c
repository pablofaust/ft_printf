#include "ft_printf.h"

char		*modif_plus(t_maillon **maillon, char c)
{
	char	*chaine;
	char	*nouvelle;
	int		lon;

	chaine = (*maillon)->chaine;
	lon = ft_strlen(chaine);
	if ((*maillon)->conversion == 'd' || (*maillon)->conversion == 'i')
	{
		if (chaine[0] != '-')
		{
			if (!(nouvelle = ft_strnew(lon + 1)))
				return (chaine);
			nouvelle[0] = c;
			nouvelle = ft_strncat(nouvelle, chaine, lon);
			free(chaine);
			return (nouvelle);
		}
	}
	return (chaine);
}
