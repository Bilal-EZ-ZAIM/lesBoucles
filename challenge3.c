#include <stdio.h>
// Les Boucles:
// Challenge 3 : puis détermine s'il est premier ou non.
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ========== Challenge 3 : puis détermine s'il est premier ou non. ================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();
    int num ;
    int found = 0;
    printf("ecrivez le nimero : ");
    scanf("%d",&num);
    for(int i = 2 ; i < num ; i++){
        if (num % i == 0)
        {
            found = 1;
            printf("le nemiro %d \n",i);
            break;
        }
        
    }
    if (found == 0)
    {
        printf("le nemiro %d est  premier\n",num);
    }else{
        printf("le nemiro %d est non premier\n",num);
    }
    

    return 0;
}
