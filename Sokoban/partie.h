#ifndef _PARTIE_

typedef struct player_s
{
    char * nom;
    int x;
    int y;
} player_t;

typedef struct partie_s
{
   plateau_t * plateau;
   player_t * joueur;
   int score;
   int nb_arrivees;
   int * * liste_arrivees;
   int nb_coups;
} partie_t;

partie_t * nouvelle_partie(const char * nom_fichier, const char * nom_joueur);
void detruire_partie(partie_t * partie);
int partie_terminee(partie_t * partie);
int coup_autorise(partie_t * partie, char c);
void jouer_coup(partie_t * partie);


#endif // _PARTIE_
