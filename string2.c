//program to concatenate two strings and compare two strings
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
void concat(char s1[], char s2[], char s3[])
{       
    int i,j;
    int l1 = length(s1); int l2 = length(s2);
    for( i = 0; i < l1; i++)
        s3[i] = s1[i];
    for(j = 0; j <= l2; j++)
    {
        s3[i+j] = s2[j];
    }    
    s3[i+j] = '\0';
    puts(s3);
}
int compare(char s1[], char s2[])
{   
    int i,j;
    for(i=0,j=0; s1[i]!='\0' && s2[j]!='\0'; i++,j++)
    {
        if(s1[i]!=s2[j])
            break;
    }
    if(s1[i] == s2[j])printf("Equal\n");
    else if(s1[i] < s2[j])printf("Smaller\n");
    else 
        printf("Greater\n");
}

int main()
{
    char s1[10];
    char s2[10];
    char s3[100];
    scanstring(s1); scanstring(s2);
   // concat(s1,s2,s3);
   compare(s1,s2);
}
