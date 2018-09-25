#include "ft_printf.h"

void	conversion_s(const char *str, t_maillon **maillon)
{
	(*maillon)->chaine = (char*)str;	
}

void	conversion_S(const char *str, t_maillon **maillon)
{
	(*maillon)->chaine = (char*)str;
}

void	conversion_p(void *ptr, t_maillon **maillon)
{
	(*maillon)->chaine = ptr;
}

void	conversion_d_i(int nb, t_maillon **maillon)
{
	if (nb)
		(*maillon)->chaine = "a";
}

void	conversion_o(unsigned int nb, t_maillon **maillon)
{
	if (nb)
		(*maillon)->chaine = "a";
}

void	conversion_u(unsigned int nb, t_maillon **maillon)
{
	if (nb)
		(*maillon)->chaine = "a";
}

void	conversion_x(unsigned int nb, t_maillon **maillon)
{
	if (nb)
		(*maillon)->chaine = "a";
}

void	conversion_X(unsigned int nb, t_maillon **maillon)
{
	if (nb)
		(*maillon)->chaine = "a";
}

void	conversion_c(int c, t_maillon **maillon)
{
	if (c)
		(*maillon)->chaine = "a";
}

void	conversion_C(int C, t_maillon **maillon)
{
	if (C)
		(*maillon)->chaine = "a";
}
