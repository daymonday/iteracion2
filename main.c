#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min=0,may=0,punc=0;
    char ch;
    printf("Ingrese caracter\n");
    scanf("%c",&ch);
    do
    {
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' es letra", ch);
        min=min+1;
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c'es un numero", ch);
        may=may+1;
    }
    else
    {
        printf("'%c' es otro", ch);
        punc=+1;
    }
    }while(ch!='*');
    printf("%d",min);
    printf("%d",may);
    printf("%d",punc);
    return 0;
}
