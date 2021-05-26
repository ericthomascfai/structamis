#include <stdio.h>
/****************définition de la structure***************************/
typedef struct amis{
    char nom[255];
    char prenom[255];
    char tel[255];

}a;
/***********************variables globales*****************************/
int cpt=0; //nombre d'amis dans le tableau
a amis[5]; //annuaire
a ami;  //ami a insérer

/*************************************prototype***********************/
void insertamis(a *ami);
a* saisieamis();
void menu();
void afficheramis();


void menu() {
    int choix=0;
    printf("1-Ajouter un ami\n");
    printf("2-Afficher la liste des amis\n");
    scanf("%d",&choix);
    switch (choix) {
        case 1:
            if(cpt<5) {  //si le tableau n'est pas plein
                insertamis(saisieamis()); //saisie puis insertion
            }
            else
            {
                printf("Annuaire plein\n");

            }

            menu(); //récursivité

        case 2:

                afficheramis();


            menu();
        default:
            printf("Choix invalide");
            menu();
    }


}

void afficheramis() {
    for (int i=0;i<cpt;i++) //on affiche uniquement les cases remplies
    {
        printf("%s \t %s \t %s\n",amis[i].nom,amis[i].prenom,amis[i].tel);
    }

}

void insertamis(a *ami) {
    amis[cpt]=*ami;
    cpt++;
}

a* saisieamis() {

    printf("Veuillez saisir le nom");
    scanf("%s",ami.nom);
    printf("Veuillez saisir le prénom");
    scanf("%s",ami.prenom);
    printf("Veuillez saisir le numéro de téléphone");
    scanf("%s",ami.tel);

    return &ami;
}


int main() {
    menu();
    return 0;
}
