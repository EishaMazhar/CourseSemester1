#include <stdio.h>
#include <string.h>
int elfish(char *s,char *b, int i)
{
    if(b[i]=='\0')
        return 1;
                        
    if(strchr(s,b[i]))
        return elfish(s,b,i+1);
	else
        return 0;
}
main()
{
    char s[100],b[4]="elf";int i,p=0;
    int result;
    
	printf("enter the string\n");
    gets(s);
    
	char* p1 = s;
    char s1[10];
            
    while(*p1 != '\0')
        {
			
			char* s2 = s1;
            while(*p1 != ' ')
            {
				*(s2++) = *(p1);
				 p1++;
			}
				
			*s2 = '\0';
            p++;
            
            p1++;
				
            
           	result = elfish(s1,b,0);
				
			if(result == 1)
			    printf("%d word is elsfish\n",p);			
			else
				printf("%d word is not elfish\n",p);
		}
		
}
