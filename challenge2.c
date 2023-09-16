#include <stdio.h>
// Les Boucles:
// Challenge 2 : pyramide d'étoile 
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ===================== Challenge 1 :  pyramide d'étoile ==========================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();
    int l ;
    printf("ecrivez le nomber de linge : ");
    scanf("%d",&l);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0 ; j < l - i; j++)
        {
            printf(" ");
        }
        for (int a = 0; a < i * 2 - 1; a++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    

    return 0;
}
