#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    return ex23();
}

int ex1() {
    int n, c, maior = 0, menor = 9999;

    for (c = 0; c <= 14; c++)
    {
        printf("Informe um numero: ");
        scanf("%d", &n);

        if (n > maior)
        {
            maior = n;
        }
        if (n < menor)
        {
            menor = n;
        }
    }
    printf("\nO maior: %d", maior);
    printf("\nO menor: %d", menor);
}

int ex2() {
    int c;
    float n;

    printf("Informe um numero: ");
    scanf("%f", &n);

    for (c = 0; c <= 9; c++)
    {
        printf("\n%.f", n * c);
    }
}

int ex3() {
    int n, aux = 1, produto = 1;

    while (aux!=0)
    {
        printf("\nInforme os numeros: ");
        scanf("%d",&n);

        if(n != 0)
        {
            produto *= n;
        }
        else
        {
            aux = n;
        }
    }
    printf("\n%d",produto);
}

int ex4() {
    int c, n;

    for (c = 1000; c <= 1999; c++)
    {
        n = c % 11;
        if (n == 5)
        {
            printf("%d\n", c);
        }
    }
}

int ex5() {
    int a, b, k, c, num;

    a = 0;
    b = 1;
    num = 10; // 10 numeros pra chegar em 89

    printf("%d\t", b);

    for(c = 0; c < num; c++)
    {
        k = a + b;
        a = b;
        b = k;
        ///TESTE 1
        /// 0 = 0 + 1 (AUXILIAR passa a valer 1)
        /// 0 = 1 (A passa a valer 1)
        /// 1 = 1 (B recebe o valor 1 do AUXILIAR)

        ///TESTE 2
        /// 1 = 1 + 1 (AUXILIAR passa a valer 2)
        /// 1 = 1 (A passa a valer 1)
        /// 1 = 2 (B recebe o valor 2 do AUXILIAR)

        ///TESTE 3
        /// 2 = 1 + 2 (AUXILIAR passa a valer 3)
        /// 1 = 2 (A passa a valer 2)
        /// 2 = 3 (B recebe o valor 3 do AUXILIAR)

        ///TESTE 4
        /// 3 = 2 + 3
        /// 2 = 3
        /// 3 = 5

        ///TESTE 5
        /// 5 = 3 + 5
        /// 3 = 5
        /// 5 = 8
        printf("%d\t", k);
    }
}

int ex8() {
    int i, soma = 0, n, media;

    for (i = 0; n >= 0;)
    {
        printf("\nInforme um numero: ");
        scanf("%d", &n);
        if (n >= 0)
        {
            soma = soma + n;
            i++;
        }
    }
    media = soma / i;
    printf("\nMedia %d", media);
}

int ex9() {
    int a, i, maiorA = 0, menorA = 999;

    for (i = 0; i<= 14; i++)
    {
        printf("\nInforme a altura: ");
        scanf("%d", &a);

        if (a > maiorA)
        {
            maiorA = a;
        }
        if (a < menorA)
        {
            menorA = a;
        }
    }
    printf("A maior altura e: %d\n", maiorA);
    printf("A menor altura e: %d\n", menorA);
}

int ex10() {
    float nNum, valor, soma = 0, positivo, negativo, media, porcN = 0, porcP = 0;
    float a, b;
    int c;
    printf("De quantos numeros deseja saber a media: ");
    scanf("%f", &nNum);

    for (c = 0; c != nNum; c++)
    {
        printf("Informe um numero: ");
        scanf("%f", &valor);

        if (valor < 0)
        {
            negativo++;
        }
        if (valor >= 0)
        {
            positivo++;
        }
        soma = soma + valor;
    }
    porcN = (positivo * 100) / nNum;
    porcP = (negativo * 100) / nNum;
    media = soma / c;
    printf("%% Neg %0.2f\n", porcP);
    printf("%% Pos %0.2f\n", porcN);
    printf("Media %0.2f\n", media);
    printf("Qtd neg: %.f\n", negativo);
    printf("Qtd pos: %.f\n", positivo);
}

int ex11() {
    float deslo, tempoDeslo, vm, ms;
    char c = 'N';
    while (c != 'S')
    {
        printf("Informe o deslocamento: ");
        scanf("%f", &deslo);
        printf("Informe o tempo de deslocamento: ");
        scanf("%f", &tempoDeslo);

        vm = deslo / tempoDeslo;
        ms = vm / 3.6;

        printf("KM/h: %0.2f..........MS/s: %0.2f\n", vm, ms);

        printf("Deseja sair do programa? (S/N): ");
        scanf("%s%*c", &c);
    }
    printf("Programa encerrado!!");
}

int ex12() {
    float n, soma = 0, par, impar, mediaGeral;
    float somaPar = 0, somaImpar = 0, mediaPar, mediaImpar;
    int c = 0, b = 0, qtdN, definirParImpar = 0, x;

    for (c = 1; n != 0;)
    {
        soma += n;
        b++;
        printf("Informe o numero: ");
        scanf("%f", &n);

        if (n != 0)
        {
            x = (int)n;
            definirParImpar = x % 2;

            if (definirParImpar == 0)
            {
                par++;
                somaPar += n;
            }
            if (definirParImpar == 1)
            {
                impar++;
                somaImpar += n;
            }
            int x;
        }
    }
    mediaGeral = soma / b;
    mediaPar = somaPar / par;
    mediaImpar = somaImpar / impar;
    printf("Media geral: %.f\n", mediaGeral);
    printf("Media par: %.f\n", mediaPar);
    printf("Media impar: %.f\n", mediaImpar);
    printf("%.f Pares\n", par);
    printf("%.f Impares\n", impar);
}

int ex13() {
    int c, d;
    for (c = 100; c <= 200; c++)
    {
        d = c % 2;

        if (d == 1)
        {
            printf("%d\n", c);
        }
    }
}

int ex14() {
    int n, c;

    printf("Numero: ");
    scanf("%d", &n);

    for (c = 0; c <= 10; c++)
    {
        printf("%d x %d = %d\n", c, n, c * n);
    }
}

int ex15() {
    int v, r, c, a = 0;

    printf("\nInforme valor inicial: ");
    scanf("%d", &v);
    printf("\nInforme a razao: ");
    scanf("%d", &r);

    for (v; c <= 10; c++)
    {
        a = a + (v - 1) * r;
        printf("%d\t", a);
    }
}

int ex16() {
    int an, a1, q, c;

    printf("\nInforme valor inicial: ");
    scanf("%d", &a1);
    printf("\nInforme a razao: ");
    scanf("%d", &q);

    for (c = 1; c <= 10; c++)
    {
        an = a1 * pow(q, c-1);
        printf("%d\t", an);
    }
}

int ex17() {
    int c;

    for (c = 100; c >= 1; c--)
    {
        printf("%d\n", c);
    }
}

int ex18() {
    int i, n, contagem, par, impar;
    printf("\nIMPAR -> O QUADRADO DO NUMERO     ");
    printf("\n PAR  -> RAIZ QUADRADA DO NUMERO");
    printf("\nQuantos numeros deseja manipular: ");
    scanf("%d", &contagem);

    for (i = 0; i != contagem; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &n);

        if (n % 2 == 1)
        {
            impar = pow(n, 2);
            printf("Quadrado de %d: %d\n",n, impar);
        }
        if (n % 2 == 0)
        {
            par = sqrt(n);
            printf("Raiz quadrada de %d: %d\n", n, par);
        }
    }
}

int ex20() {
    int i, a;
    float n;

    printf("Numero: ");
    scanf("%f", &n);

    for(i = 1; i != 11; i++)
    {
        printf("%.f x %.d = %.f\n", n, i, n * i);
    }

}

int ex21() {

    int idade = 1, c, soma = 0, media;

    for (c = 0; idade != 0;)
    {
        printf("\nIdade:");
        scanf("%d", &idade);

        if(idade != 0)
        {
            soma = soma + idade;
            c++;
        }
    }
    media = soma / c;
    printf("Media das Idades: %d", media);
}

int ex22() {
    int idade, i = 0, media, soma = 0;
    float peso, maiorNoventa;

    for (i = 0; i <= 6; i++)
    {
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Peso: ");
        scanf("%f", &peso);

        soma += idade;

        if (peso > 90)
        {
            maiorNoventa++;
        }
    }
    media = soma / 7;
    printf("Acima de 90 quilos: %.f\n", maiorNoventa);
    printf("Media: %d\n", media);
}

int ex23() {
    int i, a;
    float qtd, numero, produto = 1, soma, somaG, media;

    somaG = soma = 0;

    printf("Quantos numeros deseja manipular: ");
    scanf("%f", &qtd);

    for (i = 0; i != qtd; i++){
        printf("Informe um numero: ");
        scanf("%f", &numero);

        int r = (int)numero;
        int t;
        t = r % 2;

        if (t == 1){
            produto *= numero;
        }
        if (t == 0){
            soma += numero;
        }
        if (i != qtd){
            a++;
            somaG += numero;
        }
    }
    media = somaG / a;
    printf("\nMedia: %.2f", media);
    printf("\nProduto dos impares: %.2f", produto);
    printf("\nSoma dos pares: %.2f", soma);
}



