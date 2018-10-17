#include "ft_printf.h"

char		*gestion_largeur(t_maillon **maillon)
{
	int		largeur;
	char	*nouvelle;

	largeur = ft_atoi((*maillon)->largeur);
	if (!(nouvelle = ft_strnew(largeur)))
		return ((*maillon)->chaine);
	if 
}
