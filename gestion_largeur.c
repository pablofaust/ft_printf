#include "ft_printf.h"

char		*largeur_av(t_maillon **maillon, char *nouvelle, int largeur)
{
	char	*chaine;
	int		i;
	int		j;

	chaine = (*maillon)->chaine;
	i = 0;
	while (i < largeur - ft_strlen(chaine))
		nouvelle[i++] = ' ';
	j = 0;
	while (chaine[j])
		nouvelle[i++] = chaine[j++]; 
	return (nouvelle);
}

char		*largeur_apr(t_maillon **maillon, char *nouvelle, int largeur)
{
	char	*chaine;
	int		i;

	chaine = (*maillon)->chaine;
	i = -1;
	while (chaine[++i]) 
		nouvelle[i] = chaine[i];
	while (i <= largeur)
		nouvelle[i++] = ' ';
	return (nouvelle);
}

char		*gestion_largeur(t_maillon **maillon)
{
	int		largeur;
	char	*nouvelle;

	largeur = ft_atoi((*maillon)->largeur);
	if (!(nouvelle = ft_strnew(largeur)))
		return ((*maillon)->chaine);
	if ((*maillon)->att_moins)
		nouvelle = largeur_apr(maillon, nouvelle, largeur);
	else
		nouvelle = largeur_av(maillon, nouvelle, largeur);
	free((*maillon)->chaine);
	return (nouvelle);
}
