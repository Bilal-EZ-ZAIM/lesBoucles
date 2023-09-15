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

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0 ; j < 7 - i; j++)
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
