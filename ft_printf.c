#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_maillon		*maillons;
	
	maillons = NULL;
	if (!(parsing(format, &maillons)))
		return (-1);



}
