//program to reverse string and find length
# include <stdio.h>
# include <string.h>

void scanstring(char str[])
{
    printf("Enter the contents of the string\n");
    gets(str);
}
int length(char str[ ])
{   
    int i = 0;
    int l = 0;
    while(str[i]!= '\0')
    {
        l++;    i++;
    }
    return l;
}
void reverse(char str[ ], char newstr[ ])
{   
    char ch;
    int l = length(str);
    strcpy(newstr, str);
    for(int i = 0; i < l/2; i++)
    {
        ch = newstr[i];
        newstr[i] = newstr[l-i-1];
        newstr[l-i-1] = ch;
    }
    printf("Reversed string is: ");
    puts(newstr);
}
void toupper(char s1[], char s2[])
{   
    strcpy(s2,s1); 
    int l = length(s1);
    
    for(int i= 0;i < l; i++)
    {
        if(s2[i] == 32)
            continue;
        s2[i] = s2[i]-32;    
    }
    puts(s2);
}
void isPalindrome(char str[])
{
    int l = length(str);
    int flag = 1;
    for(int i = 0; i < l/2 ;i++)
    {
        if(str[i]!= str[l-i-1])
        {
            flag = 0;
            break;
        }

    }
    if(flag == 0)
        printf("Given string is not a palindrome\n");
    else if(flag == 1)
        printf("Given string is a plaindrome\n");    
}
int main()
{
    char s1[10];
    char s2[10];
    scanstring(s1);
    toupper(s1,s2);
    reverse(s1,s2);
    isPalindrome(s1);
}