#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct			s_maillon t_maillon;
typedef struct			s_maillon
{
	int					ordinaires;
	int					att_hash;
	int					att_zero;
	int					att_moins;
	int					att_plus;
	int					att_espace;
	char				*largeur;
	char				*precision;
	char				*modificateur;
	char				conversion;
	void				(*fonction)();
	char				*chaine;
	t_maillon			*suivant;
}						t_maillon;


int				ft_printf(const char *format, ...);
t_maillon		*parsing(const char *format, t_maillon **maillons);
int				attributs(const char *format, int **i, t_maillon **maillon);
int				precision(const char *format, int **i, t_maillon **maillon);
int				largeur(const char *format, int **i, t_maillon **maillon);
int				modificateur(const char *format, int **i, t_maillon **maillon);
int				conversion(const char *format, int **i, t_maillon **maillon);
int				est_attribut(char a);
int				est_modificateur(char a);
int				est_conversion(char a);
int				parse_ordinaires(const char *format, int *i, t_maillon **maillon);
t_maillon		*creer_maillon(t_maillon *maillon);
t_maillon		**ajouter_maillon(t_maillon **maillons, t_maillon *maillon);
void			conversion_s(const char *stri, t_maillon **maillon);
void			conversion_S(const char *str, t_maillon **maillon);
void			conversion_p(void *ptr, t_maillon **maillon);
void			conversion_d_i(int nb, t_maillon **maillon);
void			conversion_o(unsigned int nb, t_maillon **maillon);
void			conversion_u(unsigned int nb, t_maillon **maillon);
void			conversion_x(unsigned int nb, t_maillon **maillon);
void			conversion_X(unsigned int nb, t_maillon **maillon);
void			conversion_c(int c, t_maillon **maillon);
void			conversion_C(int C, t_maillon **maillon);

#endif
