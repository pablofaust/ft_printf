#include "ft_printf.h"

static int			nb_maillons(t_maillon **maillons)
{
	t_maillon		**pointeur;
	int				nb;

	pointeur = maillons;
	nb = 0;
	while (*pointeur)
	{
		*pointeur = (*pointeur)->suivant;
		nb++;
	}
	return (nb);
}

static void			free_maillons(t_maillon **maillons)
{
	t_maillon		*pointeur;

	pointeur = *maillons;
	while (*maillons)
	{
		*maillons = pointeur->suivant;
		free(pointeur);
		pointeur = *maillons;
	}
	*maillons = NULL;
}

t_maillon			*creer_maillon(t_maillon *maillon)
{
	maillon->ordinaires = 0;
	maillon->att_hash = 0;
	maillon->att_zero = 0;
	maillon->att_moins = 0;
	maillon->att_plus = 0;
	maillon->att_espace = 0;
	maillon->largeur = NULL;
	maillon->precision = NULL;
	maillon->modificateur = NULL;
	maillon->conversion = '0';
	maillon->fonction = NULL;
	maillon->chaine = NULL;
	return (maillon);
}

t_maillon			**ajouter_maillon(t_maillon **maillons, t_maillon *maillon)
{
	t_maillon		**pointeur;
	t_maillon		**nouveaux;

	nouveaux = NULL;
	if (*maillons == NULL)
	{
		if (!(maillons = malloc(sizeof(t_maillon) * 1)))
			return (0);
		*maillons = maillon;
		return (maillons);
	}
	else
	{
		if (!(nouveaux = malloc(sizeof(t_maillon*) * (nb_maillons(maillons) + 1 ))))
			return (NULL);
		nouveaux = maillons;
		free_maillons(maillons);
		pointeur = nouveaux;
		while (*pointeur)
			(*pointeur) = (*pointeur)->suivant;
		(*pointeur)->suivant = maillon;
	}
	return (nouveaux);
}
