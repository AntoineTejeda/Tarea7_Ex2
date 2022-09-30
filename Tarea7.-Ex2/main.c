#include <stdio.h>
#include <stdlib.h>
#define N 10

void Request(int Array[]);
int Sumas(int Array[]);
int SUMASvalores(int Array[]);
void SumTot(int Array[],int *cont,int *Total);
int main()
{
   int Array[N],a,b,cont=0,Total=0;
   Request(Array);
   a=Sumas(Array);
   b=SUMASvalores(Array);
   SumTot(Array,&cont,&Total);
   printf("La suma de los valores de las posiciones pares del arreglo es %d\n",a);
   printf("La suma de los valores de las cantidades pares del arreglo es %d\n",b);
   printf("La suma de todas las cantidades del arreglo es; %d y el numero de cantidades sumadas es; %d \n",Total,cont);
}

void Request(int Array[])
{
    int aux;
    printf("Ingrese numeros que se encuentren entre 1 y 100: ");

    for(int i=0;i<N;i++)
    {
        scanf("%d",&aux);
        if(aux>100||aux<0)
        {
            printf("Cantidades demaciado grandes o demaciado cortas");
            i--;
        }else{
            Array[i]=aux;
        }
    }
}

int Sumas(int Array[])
{
    int sumPares=0;
    for(int i=0;i<N;i++)
    {
        if(i%2==0)
        {
            sumPares=sumPares+Array[i];
        }
    }
    return(sumPares);
}

int SUMASvalores(int Array[])
{
    int SUMval=0;
    for(int i=0;i<N;i++)
    {
        if(Array[i]%2==0)
        {
            SUMval=SUMval+Array[i];
        }
    }
    return(SUMval);
}

void SumTot(int Array[],int *cont,int *Total)
{
    for(int i=0;i<N;i++)
    {
        if(*Total<100)
        {
            *Total=*Total+Array[i];
            *cont=*cont+1;
        }
    }
}
