#include "ft_printf.h"

void	lire_maillons(t_maillon **maillons)
{
	t_maillon	**pointeur;
	int			i;

	i = 1;
	pointeur = maillons;
	while (*pointeur)
	{
		printf("--- MAILLON %d ---\n\n", i);
		printf("ordinaires = %d\n", (*pointeur)->ordinaires);
		printf("indicateur = %c\n", (*pointeur)->indicateur);
		printf("# = %d\n", (*pointeur)->att_hash);
		printf("0 = %d\n", (*pointeur)->att_zero);
		printf("- = %d\n", (*pointeur)->att_moins);
		printf("+ = %d\n", (*pointeur)->att_plus);
		printf("  = %d\n", (*pointeur)->att_espace);
		printf("largeur = %s\n", (*pointeur)->largeur);
		printf("precision = %s\n", (*pointeur)->precision);
		printf("modificateur = %s\n", (*pointeur)->modificateur);
		printf("chaine = %s\n\n", (*pointeur)->chaine);
		*pointeur = (*pointeur)->suivant;
		i++;
	}
}

int		ft_printf(const char *format, ...)
{
	t_maillon		*maillons;

	maillons = NULL;
	if (!(maillons = parsing(format, &maillons)))
		return (-1);
	lire_maillons(&maillons);
	return (1);
}
