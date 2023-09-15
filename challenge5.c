#include <stdio.h>
#include <string.h>

// Les Boucles
// Challenge 5 : l'affiche inversée.
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ====================== Challenge 5 : l'affiche inversée. ========================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();
    char num[10] ;
    printf("ecrevez le nimero : ");
    scanf("%s" , &num);
    int l = strlen(num);
    for(int i = l ; i >= 0 ; i--){
        printf("%c" ,num[i]);
    }
    return 0;
}
