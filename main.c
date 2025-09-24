#include <stdio.h>
#include <stdlib.h>

int main()
{
    int K[3][4], J[3][4], P[3][4];
    int i, j;
    printf("Saisir les elements de la matrice K:\n");
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("K[%d] [%d]=",i,j);
            scanf("%d",&K[i][j]);
        }
    }
    printf("Entrer les elements de la matrice J:\n");
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("J[%d] [%d]=",i,j);
            scanf("%d",&J[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<4; j++)
            P[i][j]=K[i][j]+J[i][j];
    }
    printf("K = \n");
    for(i=0; i<3; i++){
        for(j=0; j<4; j++)
            printf("\t%d\t",K[i][j]);
            printf("\n");
    }
    printf("J = \n");
    for(i=0; i<3; i++){
        for(j=0; j<4; j++)
            printf("\t%d\t",J[i][j]);
            printf("\n");
    }
    printf("K + J = \n");
    for(i=0; i<3; i++){
        for(j=0; j<4; j++)
            printf("\t%d\t",P[i][j]);
            printf("\n");
    }
    return 0;
}
