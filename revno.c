# include <stdio.h>

void reverse(int num)
{
    if(num == 0)
        printf("\t");
    else
    {
        printf("%d", num%10);
        reverse(num/10);
    }    
}
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    
    reverse(num);
}