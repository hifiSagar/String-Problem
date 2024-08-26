#include<stdio.h>
#include<string.h>

    int main(){                                                  /*reverse = strrev
                           `                                       copy 1 string 2 = strcpy     
                                                                                 =  strcat
                                                                 to compare    = strcmp     */
        char s1[] ="king";
        char s2[] ="sagar";
        char s3[10];
        printf("%d\n",strcmp(s1,s2));
        printf("length of string is %d \n",strlen(s2));
       
    puts(strcat(s1,s2));
         printf("length of string is %d \n",strlen(s1));  
           puts(strrev(s2));
           puts(strcpy(s3,s1));

        return 0;

    }