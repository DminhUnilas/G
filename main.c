#string.h
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int immatriculation;
    int marque;
    int modele;
    int puissance;
    int annee;
  int prix;
  } Voiture;
  
Voiture SaisirVoiture()
{
    Voiture v;
    printf("Immatriculation=");
    scanf("%i", &v.immatriculation);
    printf("marque=");
    scanf("%i", &v.marque);
    printf("puissance=");
    scanf("%i", &v.puissance);
    printf("annee=");
    scanf("%i", &v.annee);
    printf("prix=");
    scanf("%i", &v.prix);
    
    return v;
}
void afficherCouple(Voiture v)
{
    printf("(%d,%d,%d,%d,%d)\n",v.immatriculation,v.marque,v.puissance,v.annee,v.prix);
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
