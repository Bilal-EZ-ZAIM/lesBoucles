#include <stdio.h>
// Les Boucles
// Challenge 1 : table de multiplication.\
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 =========== Challenge 1 : table de multiplication =============\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();

    for (int i = 1; i <= 10; i++)
    {
        printf("===== %d ====\n" , i);
        for(int j = 1 ; j < 11 ; j++){
            printf("%d * %d = %d \n" , i , j , i * j);
        }
    }

    return 0;
}
