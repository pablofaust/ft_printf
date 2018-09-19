#ifndef FT_PRINTF_H
# define FT_PRINTF_H

typedef struct			s_maillon
{
	bool				ordinaires;
	int					numero;
	char				indicateur;
	int					att_hash;
	int					att_zero;
	int					att_moins;
	int					att_plus;
	int					att_espace;
	char				*largeur;
	char				*precision;
	char				*modificateur;
	void				(*conversion)();
	char				*chaine;
	t_maillon			*suivant;
}						t_maillon;

int				check_attributs(const char *format, int **i, t_maillon **maillon);
int				check_precision(const char *format, int **i, t_maillon **maillon);
int				check_largeur(const char *format, int **i, t_maillon **maillon);
int				check_modificateur(const char *format, int **i);
int				est_attribut(char a);
int				est_modificateur(const char *format, int **i);
t_maillon		*parse_ordinaires(const char *format, int *i);
t_maillon		*ajouter_maillon(t_maillon **maillons, t_maillon *maillon);

#endif
