#include <stdio.h>
#include <stdlib.h>
int x ;
int main()
{
    int b;
    int d;
    printf(" \n 1 -Sum  \n 2-Pummel  \n 3-Subtract \n 4- Dividing \n Your Numper: ");
    scanf("%d",&b);
    switch(b)
    {
        case 1 :
            printf("what your numper sum:");
            scanf("%d",&x);
            printf("sum numper what:");
            scanf("%d",&d);
            printf("\n %d + %d = %d ",x,d,x+d);
            break;
        case 2 :
            Pummel();
            break;
        case 3 :
            Subtract();
            break;
        case 4 :
            Dividing();
            break;
        default:
            printf("Fild Numper");
            printf("\nSelect 1 - 4");
            return 0;
    }
    return main();
}

int Pummel()
{
    int f;
    printf("what your numper sum:");
    scanf("%d",&x);
    printf("sum numper what:");
    scanf("%d",&f);
    printf("\n %d X %d = %d ",x,f,x*f);
    return main();

}


int Subtract()
{

    int G;
    printf("what your numper sum:");
    scanf("%d",&x);
    printf("sum numper what:");
    scanf("%d",&G);
    printf("\n %d - %d = %d ",x,G,x-G);
    return main();

}
int Dividing()
{
    int A;
    printf("what your numper sum:");
    scanf("%d",&x);
    printf("sum numper what:");
    scanf("%d",&A);
    printf("\n %d / %d = %d ",x,A,x/A);
    return main();

}
