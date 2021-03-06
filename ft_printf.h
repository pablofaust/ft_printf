#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <wchar.h>
# include <locale.h>

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
	int					(*fonction)(va_list ap, t_maillon **maillon);
	char				*chaine;
	int					neg;
	int					lon;
	t_maillon			*suivant;
}						t_maillon;


int				nb_maillons(t_maillon **maillons);
int				ft_printf(const char *format, ...);
int				parsing(const char *format, t_maillon **maillons);
int				attributs(const char *format, int **i, t_maillon **maillon);
int				precision(const char *format, int **i, t_maillon **maillon);
int				largeur(const char *format, int **i, t_maillon **maillon);
int				modificateur(const char *format, int **i, t_maillon **maillon);
int				conversion(const char *format, int **i, t_maillon **maillon);
int				est_attribut(char a);
int				est_modificateur(char a);
int				est_conversion(char a);
int				parse_ordinaires(const char *format, int *i, t_maillon **maillon);
t_maillon		*creer_maillon(void);
void			lire_maillons(t_maillon **maillons);
void			ajouter_maillon(t_maillon **maillons, t_maillon *maillon);
int				traitement(va_list ap, t_maillon **maillons);
int				conversion_s(va_list ap, t_maillon **maillon);
int				conversion_p_x(va_list ap, t_maillon **maillon);
int				conversion_d_i(va_list ap, t_maillon **maillon);
int				conversion_o(va_list ap, t_maillon **maillon);
int				conversion_u(va_list ap, t_maillon **maillon);
int				conversion_c(va_list ap, t_maillon **maillon);
int				conversion_char(va_list ap, t_maillon **maillon);
int				conversion_int(va_list ap, t_maillon **maillon);
int				conversion_uint(va_list ap, t_maillon **maillon);
char			trans_modif(char *modif);
char			*modif_plus(t_maillon **maillon, char c);
char			*modif_hash(t_maillon **maillon, char c);
char			*modif_precision(t_maillon **maillon, int precision, int initial);
char			*gestion_largeur(t_maillon **maillon, int largeur, int initial);
#endif
