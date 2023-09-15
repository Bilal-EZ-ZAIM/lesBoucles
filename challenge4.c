#include <stdio.h>

// Challenge 4 : série d'entiers positifs
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ===================== Challenge  : série d'entiers positifs   ===================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();
    int n, max = 0;
    printf("ecrevez le nomber de tableu : ");
    scanf("%d", &n);
    int serie[n];
    double somme;
    int l = sizeof(serie) / sizeof(serie[0]);

    int i = 0;
    do
    {
        printf("ecrevez le nimero %d : ", i + 1);
        scanf("%d", &serie[i]);
        i++;
    } while (i < l);
    for (int j = 0; j < l; j++)
    {
        if (serie[j] % 10 == 0 && serie[j] < 100)
        {
            printf("%d = %d\n", j + 1, serie[j]);
        }
        somme += serie[j];
        if (max < serie[j])
        {
            max = serie[j];
        }
    }
    printf("la somme = %.2lf\n", somme);
    printf("max = %d\n", max);

    return 0;
}
