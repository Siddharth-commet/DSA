#include<stdio.h>



void chutiya(int a, int b){
    printf("%d",a+b);
}



int main(){
    printf("hello world\n");
    char y='y';
    int a=12;
    int arra[10];
    for (int i = 0; i < 10; i++)
    {
        arra[i]=i;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("value a place %d is %d\n",i,arra[i]);
    }
    
    while ((y=='y'))
    {
        printf("%d \n",a);
        if (a>10)
        {
            printf("teri phen nu! \n");
        }
        else if (a<=10)
        {
            printf("oyeee equal hogi \n");
        }
        else{
            printf("bada fuddu number hai! \n");
        }
        
        for (int i = 0; i < 20; i++)
        {
            printf("%d",i);
            printf("\n");
        }
        
        printf("want to do again?: ");
        fflush(stdin);
        scanf("%c",&y);
        
    }

    chutiya(2,3);
    
    return 0;
}