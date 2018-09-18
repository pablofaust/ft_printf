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
	int					largeur;
	int					precision;
	char				*modificateur;
	void				(*conversion)();
	char				*chaine;
	t_maillon			*suivant;
}						t_maillon;

#endif
