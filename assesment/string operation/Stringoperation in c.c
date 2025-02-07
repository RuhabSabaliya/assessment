#include <stdio.h>
#include <string.h>
void revrse(char str[])
{
	int i;
	int len = strlen(str);
            printf("Reversed string: ");
            for (i = len - 1; i >= 0; i--)
			 {
                printf("%c", str[i]);
            }
            printf("\n");           
}
void concatenate( char str[],char str2[])
{
	strcat(str, str2);
            printf("Concatenated string= %s\n", str);
}
int palindrome(char str[])
{
	char rev[100];
	strcpy(rev,str);
	strrev(rev);
           int palindrome=strcmp(rev,str);
           return palindrome;
}	
void copy(char str2[], char str[])
{
	strcpy(str2, str);
              printf("Value of str after copy=%s\n",str);
              printf("Value of str2 after copy=%s\n",str2);
}
int length(char str[])
{
			int len=strlen(str);
			return len;
}
void Frequency(char str[])
{
	char ch;
            int count = 0,i;
            printf("Enter a character to find its frequency=");
            scanf(" %c", &ch);
            for (i = 0; str[i] != '\0'; i++) 
			{
                if (str[i] == ch)
                {
                	count++;
				}
            }
            printf("Frequency of %c=%d\n",ch,count);
}
void countvowelconsonants(char str[])
{
	int vowels = 0, consonants = 0,i;
            for (i = 0; str[i] != '\0'; i++) {
                char ch = tolower(str[i]);
                if (ch>='a'&&ch<='z') {
                    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                        vowels++;
                    else
                        consonants++;
                }
            }
            printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
}
void countspacesanddigits(char str[])
{
	
            int spaces = 0, digits = 0,i;
            for (i = 0; str[i] != '\0'; i++) {
                if (isspace(str[i]))
                    spaces++;
                if (isdigit(str[i]))
                    digits++;
            }
            printf("Spaces: %d, Digits: %d\n", spaces-1, digits);
}
int main() {
 char str[100];
 int i,j,choice, cont;

    printf("Enter a string=");
    fgets(str,50,stdin);

start:
    printf("\nChoose an option=\n");
    printf("press 1. for Reverse the string\n");
    printf("press 2. for Concatenate another string\n");
    printf("press 3. for Check for Palindrome\n");
    printf("press 4. for Copy the string\n");
    printf("press 5. for Length of the string\n");
    printf("press 6. for Frequency of a character\n");
    printf("press 7. for Count vowels and consonants\n");
    printf("press 8. for Count spaces and digits\n");
    printf("Enter your choice= ");
    scanf("%d", &choice);

    switch (choice) 
	{
    	// Reverse the string
        case 1: 
		{
		revrse(str);
            break;
        }
        case 2: 
		{
            // Concatenate another string
            char str2[50];
            printf("Enter another string to concatenate= ");
            getchar();
            fgets(str2,50, stdin);
            concatenate(str,str2);
            break;
        }
        case 3: 
		{
            // Check for Palindrome
         int result= palindrome(str);
         if(result==0)
            {
            	printf("This is a palindrome");
			}
			else
			{
				printf("This is not a palindrome");
			}
            break;
        }
        case 4: 
		{
            // Copy the string
            char str2[50];
            printf("Enter another string=");
            getchar();
            fgets(str2,50, stdin);
            printf("orignal value of str=%s\n",str);
             printf("orignal value of str2=%s\n",str2);
             copy(str2,str);
             
            break;
        }
        case 5:
		 {
            // Length of the string
            
            int result=length(str);
            printf("The length of string is=%d",result-1);
            break;
        }
        case 6: 
		{
            // Frequency of a character
            Frequency(str);
            break;
        }
        case 7:
		 {
            // Count vowels and consonants
            countvowelconsonants(str);
            break;
        }
        case 8: 
		{
            // Count spaces and digits
            countspacesanddigits(str);
            break;
        }
        default:
            printf("Invalid choice. No operation performed.\n");
    }
    printf("\nDo you want to continue? Enter 1 for yes= ");
    scanf("%d", &cont);
    if (cont == 1) 
	{
        goto start;
    }

    printf("program end!\n");
    return 0;
}

