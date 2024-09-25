#include <stdio.h>

int main()
{
    int escolha, catA =0, catB = 0, catC = 0, catD = 0, catE = 0, dev = 0, total = 0, regi = 0;

    do
    {
        printf("Escolha uma opcao a baixo:\n");
        printf("1 - Categoria A\n");
        printf("2 - Categoria B\n");
        printf("3 - Categoria C \n");
        printf("4 - Categoria D\n");
        printf("5 - Categoria E\n");
        printf("6 - Devolucao \n");
        printf("7 - Sair\n");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            printf("Digite a quantidade de produtos  da categoria A:\n ");
            scanf("%d", &catA);
            break;
        case 2:
            printf("Digite a quantidade de produtos  da categoria B:\n ");
            scanf("%d", &catB);
            break;
        case 3:
            printf("Digite a quantidade de produtos  da categoria C:\n ");
            scanf("%d", &catC);
            break;
            printf("Digite a quantidade de produtos  da categoria D:\n ");
            scanf("%d", &catD);
            break;
        case 5:
            printf("Digite a quantidade de produtos  da categoria E:\n ");
            scanf("%d", &catE);
            break;
        case 6:
            printf("Digite a quantidade de produtos que foi DEVOLVIDO:\n ");
            scanf("%d", &dev);
            break;                        
        case 7:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }

    }while (escolha != 7);

    total = catA + catB + catC + catD + catE;
    regi = total + dev;
    printf("Total de produtos de categori A: %d(%.2lf porcento do total)\n", catA, (double)catA/total*100);
    printf("Total de produtos de categori B: %d(%.2lf porcento do total)\n", catB, (double)catB/total*100);  
    printf("Total de produtos de categori C: %d(%.2lf porcento do total)\n", catC, (double)catC/total*100);  
    printf("Total de produtos de categori D: %d(%.2lf porcento do total)\n", catD, (double)catD/total*100);  
    printf("Total de produtos de categori E: %d(%.2lf porcento do total)\n", catE, (double)catE/total*100); 
    printf("O total registros eh de: %d\n", regi);  
    printf("O total de produtos devolvidos foi:%d\n", dev);   
}