#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#define ex7

#ifdef ex1
int main()
{
    int x;
    float vet[5];
    setlocale(LC_ALL, " ");

    system ("cls");

    printf("Alimentação dos dados no vetor\n");
    for(x=0; x<5; x++)
    {
        printf("Digite um número dos dados no vetor\n");
        scanf("%f",&vet[x]);
    }
    system("cls");
    system("pause");
    printf("Exibição dos dados no vetor\n");
    for(x=0; x<5; x++)
    {
        printf("%.1f= %.1f\n",vet[x],pow(vet[x],2));
    }
        return 0;
}
#endif

#ifdef ex2
    int main(){
        int x;
        int A[5], maior;
        setlocale(LC_ALL, " ");

        system ("cls");

        printf("Alimentação dos dados no vetor\n");
        for(x=0; x<5; x++){
            printf("Digite um número inteiro\n");
            scanf("%d", &A[x]);}
        printf("Verificar o maior número\n");
        maior=A[0];
        for(x=0; x<5; x++)
        {if(A[x]>maior)
            {maior=A[x];}}
        system("cls");
        system("pause");
        printf("O maior número encontrado é %d\n",maior);
        printf("Exibição dos dados no vetor\n");
        for(x=0; x<5; x++)
        { printf("%i\n", A[x]);}
        return 0;}
#endif

#ifdef ex3
    int main(){
        setlocale(LC_ALL, " ");
        char c;
        
        system ("cls");

        printf("Digite uma letra qualquer: ");
        c = getchar();
        system("cls");
        system("pause");
        printf("o caracter digitado é': ");
        putchar(c);
}
#endif

#ifdef ex4

int main() {
    setlocale(LC_ALL, " ");
    
    short s;
    long l;
    int i;
    float f;
    double d;
    char c;

    system ("cls");
    
    printf("Digite um valor para short: ");
    scanf("%hd", &s);

    printf("Digite um valor para long: ");
    scanf("%ld", &l);

    printf("Digite um valor para int: ");
    scanf("%d", &i);

    printf("Digite um valor para float: ");
    scanf("%f", &f);

    printf("Digite um valor para double: ");
    scanf("%lf", &d);

    printf("Digite um valor para char: ");
    scanf(" %c", &c); 
    
    system("cls");
    system("pause");

    printf("\n");
    printf("        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");
    printf("    short               long                int\n");
    printf("     %2hd %18ld %19d\n", s,               l,               i);
    printf("           float               double              char\n");
    printf("        %7.2f %20.2lf %16c\n", f,               d,               c);

    return 0;
}

#endif

#ifdef ex5

int main(){
    int Segundos;

    setlocale(LC_ALL, " ");
    
    system ("cls");

    printf("CONVERSOR DE SEGUNDOS EM HORAS E MINUTOS\n");
    
    printf("Digite o tempo em segundos: \n");

    do {
    scanf("%d", &Segundos);

    if (Segundos > 2147483647 || Segundos <= 0);{
        printf("Digite novamente: \n");
    }

    }
    while (Segundos > 2147483647 || Segundos <= 0);
    
    int horas = Segundos / 3600;
    int minutos = (Segundos % 3600)/ 60;
    int seg = Segundos % 60;

    system("cls");
    system("pause");

    printf("%dH, %dMin, %dseg\n", horas, minutos, seg);

    return 0;
}

#endif

#ifdef ex6

int main(){

    setlocale(LC_ALL, " ");
    int numero, invertido;
    int centena, dezena, unidade;

    system ("cls");

    printf("Digite um número positivo de três dígitos: ");
        
    do{
        scanf("%d", &numero);

        if (numero < 100 || numero > 999) 
        {
            printf("Número inválido, digite um número com 3 dígitos: ");
        }
    } while (numero < 100 || numero > 999);

    centena = numero / 100;
    dezena = (numero / 10) % 10;
    unidade = numero % 10;

    invertido = unidade * 100 + dezena * 10 + centena;

    system ("cls");
    system ("pause");

    printf("Número lido: %d\n", numero);
    printf("Número invertido: %d\n", invertido);

    return 0;
}

#endif

#ifdef ex7

int main(){
    int numero, limiteMinimo, multiplo;

    system("cls");

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Digite o limite mínimo: ");
    scanf("%d", &limiteMinimo);

    if (limiteMinimo % numero == 0){
        multiplo = limiteMinimo + numero;
    } else {
        multiplo = ((limiteMinimo / numero) + 1) * numero;
    }

    system("cls");
    system("pause");

    printf("O menor múltiplo de %d maior que %d é: %d\n", numero, limiteMinimo, multiplo);

    return 0;
}

#endif