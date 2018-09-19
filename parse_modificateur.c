#include "ft_printf.c"

int				est_modificateur(const char *format, int **i)
{
	int		j;

	j = **i;
	if (format[j] == 'l' || format[j] == 'j' || format[j] == 'z')
		return (1);
	if (format[j] == 'h')
	{
		if (format[j + 1] == 'h')
			return (2);
		else
			return (1);
	}
	if (format[j] == 'l')
	{
		if (format[j + 1] == 'l')
			return (2);
		else
			return (1);
	}
	else
		return (0);
}

int				check_modificateur(const char *format, int **i)
{
	int		nb;

	(*maillon)->modificateur = NULL;
	nb = est_modificateur(format, i);
	if (nb)
	{
		if (format[**i - 1] != '%' && !(ft_isdigit(format[**i - 1]) && format[**i - 1] != '.'))
			return (0);
		if (nb == 1)
			(*maillon)->modificateur = format[**i];
		else
		{
			if (!(*maillon)->modificateur = (char)malloc(sizeof(char) * 3))
				return (0);
			(*maillon)->modificateuri[0] = format[**i];
			(**i)++;
			(*maillon)->modificateur[1] = format[**i];
			(*maillon)->modificateur[2] = '\0';
		}
		return (1);
}
