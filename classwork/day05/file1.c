#include <stdio.h>

int addition(int,int);
int sub(int,int);
int mul(int,int);

int main()
{
    int v1,v2;
    int result=0;
    printf("\nEnter the two values: ");
    scanf("%d%d",&v1,&v2);

    result = addition(v1,v2);
    printf("\nAddition of %d + %d = %d", v1,v2,result);

    result = sub(v1,v2);
    printf("\nSubstraction of %d - %d = %d",v1,v2,result);

    result = mul(v1,v2);
    printf("\nMultiplication of %d x %d = %d",v1,v2,result);

    printf("\n\n");
    return 0;
}

int addition(int val1, int val2)
{
    int res=0;
    res = val1+val2;
    return res;
}

int sub(int val1, int val2)
{
    int res=0;
    res = val1-val2;
    return res;
}

int mul(int val1, int val2)
{
    int res=0;
    res = val1*val2;
    return res;
}