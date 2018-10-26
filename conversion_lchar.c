#include "ft_printf.h"

static char	*gestion_wchar(wchar_t wc, t_maillon **maillon)
{
	char	*bin;

	bin = NULL;
	if (!(wc <= 0x10ffff && wc >= 0 && (wc <= 0xd7ff || wc >= 0xe000)) &&
			(MB_CUR_MAX != 1 || ft_tolower((*maillon)->conversion) == 'c'))
		return (NULL);
	if (wc <= 127 && MB_CUR_MAX > 0)
		bin = one_byte(wc);
	else if (wc > 127 && wc < 256 && MB_CUR_MAX == 1)
		bin = ft_itoa_base(wc, 2);
	else if (MB_CUR_MAX == 1 && ft_tolower(*maillon)->conversion) == 's')
	{
		if ((*maillon)->precision != NULL && ft_atoi((*maillon)->precision) < (ft_strlen((*maillon)->chaine) / 8) + 1)
			bin = ft_itoa_base(wc, 2);
	}
	else if (wc <= 2047 && MB_CUR_MAX > 1)
		bin = two_bytes(wc);
	else if (wc <= 65535 && MB_CUR_MAX > 2)
		bin = three_bytes(wc);
	else if (wc <= 1114111 && MB_CUR_MAX > 3)
		bin = four_bytes(wc);
	return (bin);
}

static int		ft_str_big_s_handler(t_chain *elem, va_list ap)
{
	wchar_t		*sw;

	sw = va_arg(ap, wchar_t *);
	if (!sw)
	{
		elem->show = ft_strdup("(null)");
		elem->nbr_carac = ft_strlen(elem->show);
}

static int	gestion_wchar_S(t_maillon **maillon, va_list *ap)
{
	wchar_t		*sw;
	char		*chaine;

	sw = va_arg(ap, wchar_t *);
	chaine = ft_strnew(0);
	while (*sw)
	{
		if (!(chaine = ft_strjoin(chaine, gestion_wchar(*sw, maillon))))
			return (-1);
		sw++;
	}
	return (1);
}
int		conversion_wchar(t_maillon **maillon, va_list *ap)
{
	char	conversion;
	char	modif;
	int	res;

	conversion = (*maillon)->conversion;
	modif = ((*maillon)->modificateur ) ? trans_modif((*maillon)->modificateur) : '0';
	if (conversion == 'C' || conversion == 'c')
	{
		if (!((*maillon)->chaine = gestion_wchar(va_arg(ap, wchar_t), maillon)))
		return (-1);
	}
	else if (conversion == 'S' || (conversion == 's' && modif == 'l'))
	{
		if ((res = gestion_wchar_S(maillon, ap)) == -1)
			return (-1);
	}
	return (ecrit_char(maillon));
}
