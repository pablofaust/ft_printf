#include "ft_printf.h"

static void			free_maillons(t_list **maillons)
{
	t_list			*pointeur;

	pointeur = *maillons;
	while (*maillons)
	{
		*maillons = pointeur->suivant;
		free(pointeur);
		pointeur = *maillons;
	}
	*maillons = NULL;
}

t_maillon			*ajouter_maillon(t_maillon **maillons, t_maillon *maillon)
{
	t_maillon		*pointeur;
	t_maillon		**nouveaux;
	
	if (maillons == NULL)
	{
		if (!(maillons = (t_maillon*)malloc(sizeof(t_maillon*) * 1)))
			return (0);
		*maillons = maillon;
	}
	else
	{
		if (!(nouveaux = (t_maillon*)malloc(sizeof(t_maillon*) * (nb_maillons(maillons) + 1 ))))
			return (NULL);
		nouveaux = maillons;
		free_maillons(maillons);
		pointeur = *nouveaux;
		while (*pointeur)
			(*pointeur) = (*pointeur)->suivant;
		(*pointeur)->suivant = maillon;
	}
	return (nouveaux);
}
