#include <iostream>

int main()
{
    int a, b, c;
    a = 0; b = 0; c = 0;

    printf("Enter a:");
    scanf("%i", &a);

    printf("Enter b:");
    scanf("%i", &b);

    printf("Enter c:");
    scanf("%i", &c);

    if (a + b >= 0)
        printf("summ a+b>0\n");
    if (a + c >= 0)
        printf("summ a+c>0\n");
    if (b + c >= 0)
        printf("summ b+c>0\n");
    system("pause");
    return 0;
}