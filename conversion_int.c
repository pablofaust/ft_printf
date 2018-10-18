#include "ft_printf.h"

int			ecrit_int(t_maillon **maillon)
{
	int		largeur;
	int		initial;
	int		precision;

	largeur = ((*maillon)->largeur) ? ft_atoi((*maillon)->largeur) : 0;
	initial = ft_strlen((*maillon)->chaine);
	precision = ((*maillon)->precision) ? ft_atoi((*maillon)->precision) : 0;
	if ((*maillon)->att_plus)
		(*maillon)->chaine = modif_plus(maillon, '+');	
	if (!(*maillon)->att_plus && (*maillon)->att_espace)
		(*maillon)->chaine = modif_plus(maillon, ' ');	
	if ((*maillon)->precision != NULL)
		(*maillon)->chaine = modif_precision(maillon, precision, initial);
	if (largeur && largeur > initial)
		(*maillon)->chaine = gestion_largeur(maillon, largeur, initial);
	return (1);
}

char		trans_modif(char *modif)
{
	int		lon;

	lon = ft_strlen(modif);
	if (lon == 1)
		return (modif[0]);
	else if (lon == 2)
	{
		if (modif[0] == 'h')
			return ('H');
		else
			return ('L');
	}
	else
		return ('0');
}

int			conversion_int(va_list ap, t_maillon **maillon)
{
	char	*chaine;
	char	modif;

	chaine = NULL;
	modif = ((*maillon)->modificateur ) ? trans_modif((*maillon)->modificateur) : '0';
	if (modif == '0' || modif == 'L')
		chaine = ft_itoa(va_arg(ap, int));
	else if (modif == 'H')
		chaine = ft_itoa((char)va_arg(ap, int));
	else if (modif == 'h')
		chaine = ft_itoa_ll((short)va_arg(ap, int));
	else if (modif == 'l')
		chaine = ft_itoa_ll(va_arg(ap, long));
	else if (modif == 'j')
		chaine = ft_itoa_ll(va_arg(ap, intmax_t));
	else if (modif == 'z')
		chaine = ft_itoa_ll(va_arg(ap, ssize_t));
	(*maillon)->chaine = chaine;
	return (ecrit_int(maillon));
}
