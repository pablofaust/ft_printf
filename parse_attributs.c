#include "ft_printf.h"

int				est_attribut(char a)
{
	if (a == '#' || a == '0' || a == '-' || a == '+' || a == ' ')
		return (1);
	else
		return (0);
}

static void		complete_att(t_maillon **maillon)
{
	if ((*maillon)->att_hash != 1)
		(*maillon)->att_hash = 0;
	if ((*maillon)->att_zero != 1)
		(*maillon)->att_zero = 0;
	if ((*maillon)->att_moins != 1)
		(*maillon)->att_moins = 0;
	if ((*maillon)->att_plus != 1)
		(*maillon)->att_plus = 0;
	if ((*maillon)->att_espace != 1)
		(*maillon)->att_espace = 0;
}

int				check_attributs(const char *format, int **i, t_maillon **maillon)
{
	if (est_attribut(format[**i]))
	{
		while (est_attribut(format[**i]))
		{
			if (format[**i - 1] == format[**i] || (format[**i - 1] != '%' && !(est_attribut(format[**i - 1]))))
				return (0);
			if (format[**i] == '#')
				(*maillon)->att_hash = 1;
			if (format[**i] == '0')
				(*maillon)->att_zero = 1;
			if (format[**i] == '-')
				(*maillon)->att_moins = 1;
			if (format[**i] == '+')
				(*maillon)->att_plus = 1;
			if (format[**i] == ' ')
				(*maillon)->att_espace = 1;
			(**i)++;
		}
	}
	complete_att(maillon);
	return (1);
}
