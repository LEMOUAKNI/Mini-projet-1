#include <stdio.h>
#include <string.h>

int main() {
    char titre[100][20];
    char auteur[100][20];
    float prix [100];
    int quantite[100];
    int choix;
    int x= 0;
    int found=0;
    char nomm[50];
    int  newq;
    char sup[50];
    char rech_a , rech_t;
    int f;
    do{
printf("Gestion de Stock dans une Librairie\n");

        printf("1. Ajouter un Livre au Stock:\n");
        printf("2. Afficher Tous les Livres Disponibles:\n");
        printf("3. Mettre à Jour la Quantité d'un Livre:\n");
        printf("4. Supprimer un Livre du Stock\n");
        printf("5. Afficher le Nombre Total de Livres en Stock:\n");
        printf("6. Afficher le nombre total de livres en stock:\n");
        printf("7. Quitter\n");
        printf("entrez votre choix :");
        scanf("%d", &choix);
        switch(choix)
        {
         case 1:
                   printf("==============Ajouter===============\n");
                   printf("entrez le titer de livere %d:" , x + 1);
                   scanf("%s",&titre[x]);
                   printf("entrez le auteur de livere :");
                   scanf("%s",&auteur[x]);
                   printf("entrez le prix de livere :");
                   scanf("%f",&prix[x]);
                   printf("entrez la quantite de livere :");
                   scanf("%d",&quantite[x]);
                   printf("\n");
                   x++;
           break;
         case 2 :

          for(int i=0 ; i<x ; i++){
              printf("*********************\n");
              printf("Le titre de livre :%s \n", titre[i]);
              printf("l'auteur de livre :%s \n", auteur[i]);
              printf("le prix de livre :%.2f \n", prix[i]);
              printf("la quantiter :%d \n", quantite[i]);
              printf("********************* \n");

          }
          break;
         case 3 :
         found = 0;
         printf("===============mise a jour===============\n");
         printf("entrer le nom de livre à mis-jour :");
         scanf("%s", &nomm);
         for(int i = 0; i < x; i ++)
         {
             if(strcmp(nomm, titre[i]) == 0)
             {
                 printf("Entrer le stock a ajoute:");
                 scanf("%d", &quantite[i]);
                 printf("stock à été mise-a-jour.\n");
                 found++;

                 break;
             }
         }
         if(found == 0)
         {
         printf("\nlivre non trouvé .\n");
         }
          break;

          case 4 :

          found=0;
          printf("===============Supprimer===============\n");
          printf("Entrer le titre de livre que vous voulez supprimer:");
          scanf("%s",&sup[x]);
          for(int i = 0; i < x; i ++)
         {
             if(strcmp(sup, titre[i]) == 0)
             {
                 strcpy(titre[i],titre[x-1]);
                 strcpy(auteur[i],auteur[x-1]);
                 prix[i]=prix[x-1];
                 quantite[i]=quantite[x-1];
                 x--;
                found=1;
                printf("Le livre est supprime.\n");
                break;
             }

         }
          if(!found){
              printf("Le titre non trouver.\n");
          } break;
          case 5:
               found=0;
               printf("===============Recherche===============\n");

               printf("entrez l'auteur : ");
               scanf("%s", &rech_a);
               printf("entrez le titre : ");
               scanf("%s", &rech_t);
               printf("%d :\n", x);

    for ( int i = 0; i < x; i++){
        printf("%s :  %s :\n", titre[i], auteur[i]);
        if (strcmp(rech_t, titre[i])==0 && strcmp(rech_a, auteur[i])==0){
            printf("%s\n", titre[i]);
            printf("%s\n", auteur[i]);
            printf("%.2f\n", prix[i]);
            printf("%d\n", quantite[i]);
            found=1;
            break;
        }
    }
        if(found==0) printf("le livre n'est pas disponible");



    break;

case 6:
    printf("===============Total===============\n");
    for(int i=0 ; i<x ; i++){
        f = f + quantite[i];
    }
    printf("le nombre de livres est %d \n", f);
    break;

case 7:
    printf("vous avez quittez .\n");
    return 0;


    default : printf("\n\n\n\n\n\nnumber incorrect. entrez un autre livre\n\n\n\n\n\n");
}
}while(choix!=7);
    return 0;
}



