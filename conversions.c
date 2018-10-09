#include "ft_printf.h"

int		remplir_chaine(char *arg, t_maillon **maillon)
{
	int		i;

	if (!(maillon->chaine = malloc(sizeof(char) * ft_strlen(arg) + 1)))
		return (0);
	i = 0;
	while (arg[i])
	{
		maillon->chaine[i] = arg[i];
		i++;
	}
	maillon->chaine = '\0';
	return (1);
}

void	conversion_s(va_list ap, t_maillon **maillon)
{

	if (maillon->conversion == 's')
	{
		if (!(remplir_chaine((char*)va_arg(ap, const char*), maillon)))
			return (0);
	}
	if (maillon->conversion == 'S' || maillon->modificateur[0] == 'l')
	{
		if (!(remplir_chaine((char*)va_arg(ap, const wchar_t*), maillon)))
			return (0);
	}
}

void	conversion_p_x_X(va_list ap, t_maillon **maillon)
{

	if (maillon->conversion == 'p')
	{
		if (!(remplir_chaine((char*)va_arg(ap, const char*), maillon)))
			return (0);
	}
	if (maillon->conversion == 'S' || maillon->modificateur[0] == 'l')
	{
		if (!(remplir_chaine((char*)va_arg(ap, const wchar_t*), maillon)))
			return (0);
	}
}
