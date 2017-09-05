#include<stdio.h>
int fibo(int n);
int num_calls;//crio uma variavel de escopo global, onde quando modifica-la em alguma função fora do escopo da main tbm será atualizada na mesma
int main()
{
    int x,i,n,r;
    scanf("%d",&x);
    for(i=0;i<x;i++)
        {
        num_calls=0;//a cada numero novo deve ser resetado o valor de chamadas
        scanf("%d",&n);
        r=fibo(n);//necessita primeiro calcular antes de printar pois se tentar printar ao mesmo tempo a chamada da função recursiva e o numero de chamadas será printado zero pois é o valor inicial dela
        printf("fib(%d) = %d calls = %d\n",n,num_calls-1,r);//deve subtrair 1 do numero de chamadas, porque o problema só pede as chamadas recursivas assim excluindo sua primeira chamada fibo(4)
        }
    return 0;
}
int fibo(int n)
{
    num_calls++;
    if(n==0//se usarmos o tradicional {---if(n==1||n==2)return 1;---} estariamos fazendo uma chamada mais eficiente diminuindo o numero de chamadas normais
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
