#include <stdio.h>
int main() {
    int a,b;
    int c;
    printf("enter your choice 1.arithimatic \n2.relational\n 3.logical\n 4.BITWISE\n 5.increment decrement");
    scanf("%d",&c);
    printf("enter your two numbers");
    scanf("%d %d",&a,&b);
    switch(c)
    {
        case 1:
        printf("addition is %d",a+b);
        printf("\nsubtraction is %d",a-b);
        printf("\nmultiplication is %d",a*b);
        printf("\nquotient is %d",a/b);
        printf("\nremainder is %d",a%b);
        break;
    case 2:
    if  (a>b)
    {
        printf("\n %d is bigger than %d",a,b);
    }
    else if(a<b)
    { printf("\n%d is smaller than %d",a,b);
    }
    else if(a!=b)
    { printf("\n %d is not eaqual to %d",a,b);
    }
    else if(a>=b)
    {
        printf("\n %d is greater than or equal to %d",a,b);
    }
    else if(a<=b)
    { printf("\n %d is less than or equal to %d",a,b);
    }
    else
    printf("\nboth are equal");
    break;
    case 3:
    printf("logical AND operator is %d",a&&b);
    printf("\n logical OR operator is %d",a||b);
    break;
    case 4:
     printf("\nAND BITWISE OPERATOR = %d",a & b);
     printf("\nOR BITWISE OPEARATOR = %d",a | b);
     printf("\nNOT BITWISE OPEREATOR = %d",a = ~a);
     printf("\n EXCLUSIVE OR  BITWISE OPERATOR = %d", a ^ b);
     printf("\n LEFT SHIFT  bitwise OPEARATOR =%d",a << 1);
     printf("\n RIGHT SHIFT BITWISE OPERATOR = %d",a >>1);
     break;
    case 5:
    printf(" increment of a is %d",++a);
    printf("increment of b is %d",++b);
    printf("decrement of a and b is %d %d",--a,--b);
    break;
    }
    return 0;
}
