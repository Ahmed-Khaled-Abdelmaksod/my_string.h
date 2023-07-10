/**
 ******************************************************************************
 * NOTE : Read this instruction to understand the way we test our functions
 * 1- choose the function you want to test
 * 2- search for it 
 * 3- then remove its comments
 * 4- then test it
 * 5- return the comments as before to test another function
 * 6- thanks for your trials !! :) 
   __________________________________________________________________________________ 

 * Important note : our functions called my_(the function name in string.h library)

 ******************************************************************************
*/

/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Ahmed khaled Abdelmaksod
 * @brief          : Contains test cases of my_string library  
 ******************************************************************************
 */


/*_______________________________ Start of the includes _______________________________*/

#include <stdio.h>
#include <string.h>
#include"my_string.h"

/*_______________________________ END of the includes _______________________________*/


int main () {

   //_______________________________ Start of testing my_memchr _______________________________
   /*
        const char str[] = "http://www.tutorialspoint.com";
        const char ch = '.';
        char *ret;
        ret = memchr(str, ch, strlen(str));
        printf("String after |%c| is - |%s|\n", ch, ret);
        ret = my_memchr(str,ch,strlen(str));
        printf("String after |%c| is - |%s|\n", ch, ret);
   */
   //_______________________________ END of testing my_memchr _______________________________

   //_______________________________ Start of testing my_memcmp _______________________________
   /*

        char str1[15];
        char str2[15];
        int ret;

        memcpy(str1, "abcdef", 6);
        memcpy(str2, "acCDEF", 6);

        ret = my_memcmp(str1, str2, 5);

        if(ret > 0) 
        {
            printf("str2 is less than str1");
        } 
        else if(ret < 0) 
        {
            printf("str1 is less than str2");
        } else 
        {
            printf("str1 is equal to str2");
        }

   */
   //_______________________________ End of testing my_memcmp _______________________________


   //_______________________________ start of testing my_memcpy _______________________________
    /*
        const char src[50] = "http://www.tutorialspoint.com";
        char dest[50];
        strcpy(dest,"Heloooo!!");
        printf("Before memcpy dest = %s\n", dest);
        my_memcpy(dest, src, strlen(src)+1);
        printf("After memcpy dest = %s\n", dest);
    */
   //_______________________________ End of testing my_memcpy _______________________________


   //_______________________________ start of testing my_memmove _______________________________
   /*
        char dest[] = "oldstring";
        const char src[]  = "newstring";

        printf("Before memmove dest = %s ,\t src = %s\n", dest, src);
        my_memmove(dest, src, 9);
        printf("After  memmove dest = %s ,\t src = %s\n", dest, src);
   */
   //_______________________________ End of testing my_memmove _______________________________
  

   //_______________________________ start of testing my_memset _______________________________
   
    /*
        char str[50];

        strcpy(str,"This is string.h library function");
        puts(str);

        my_memset(str,'$',7);
        puts(str);
   */
   //_______________________________ END of testing my_memset _______________________________


   //_______________________________ start of testing my_strlen _______________________________
    /*
        char s[20] = "Ahmed";
        printf("%i",my_strlen(s));
    */
   //_______________________________ END of testing my_strlen _______________________________


   //_______________________________ start of testing my_strcat _______________________________
   /*
        char src[50], dest[50];

        strcpy(src,  "This is source");
        strcpy(dest, "This is destination");

        my_strcat(dest, src);

        printf("Final destination string : |%s|", dest);
   */
   //_______________________________ END of testing my_strcat _______________________________


   //_______________________________ start of testing my_strncat _______________________________
    /*
        char src[50], dest[50];

        strcpy(src,  "This is source");
        strcpy(dest, "This is destination");

        my_strncat(dest, src, 5);

        printf("Final destination string : |%s|", dest);
    */
   //_______________________________ END of testing my_strncat _______________________________
  
  
   //_______________________________ start of testing my_strchr _______________________________
    /*
        const char str[] = "http://www.tutorialspoint.com";
        const char ch = ':';
        char *ret;

        ret = my_strchr(str, ch);

        printf("String after |%c| is - |%s|\n", ch, ret);
    */
   //_______________________________ END of testing my_strchr _______________________________


   //_______________________________ start of testing my_strcmp _______________________________
    /*
        char str1[15];
        char str2[15];
        int ret;


        strcpy(str1, "abcdef");
        strcpy(str2, "acCDEF");

        ret = my_strcmp(str1, str2);

        if(ret < 0) {
            printf("str1 is less than str2");
        } else if(ret > 0) {
            printf("str2 is less than str1");
        } else {
            printf("str1 is equal to str2");
        }
    */
   //_______________________________ END of testing my_strcmp _______________________________




   //_______________________________ start of testing my_strncmp _______________________________
    /*
        char str1[15];
        char str2[15];
        int ret;

        strcpy(str1, "abcdef");
        strcpy(str2, "abCDEF");

        ret = my_strncmp(str1, str2, 2);

        if(ret < 0) {
            printf("str1 is less than str2");
        } else if(ret > 0) {
            printf("str2 is less than str1");
        } else {
            printf("str1 is equal to str2");
        }
    */
   //_______________________________ END of testing my_strncmp _______________________________




   //_______________________________ start of testing my_strcoll _______________________________

    /*
        char str1[15];
        char str2[15];
        int ret;

        strcpy(str1, "abc");
        strcpy(str2, "ABC");

        ret = my_strcoll(str1, str2);

        if(ret > 0) {
            printf("str1 is less than str2");
        } else if(ret < 0) {
            printf("str2 is less than str1");
        } else {
            printf("str1 is equal to str2");
        }
    */
   //_______________________________ END of testing my_strcoll _______________________________



   //_______________________________ start of testing my_strcpy _______________________________
    /*
        char src[40];
        char dest[100];
        
        memset(dest, '\0', sizeof(dest));
        my_strcpy(src, "This is tutorialspoint.com");
        my_strcpy(dest, src);

        printf("Final copied string : %s\n", dest);
   */
   //_______________________________ END of testing my_strcpy _______________________________




   //_______________________________ start of testing my_strncpy _______________________________
    /*
        char src[40];
        char dest[40];
        
        memset(dest, '\0', sizeof(dest));
        strcpy(src, "This is tutorialspoint.com");
        my_strncpy(dest, src, 10);

        printf("Final copied string : %s\n", dest);
   */

   //_______________________________ END of testing my_strncpy _______________________________



   //_______________________________ start of testing my_strcspn _______________________________
    /*
        int len;
        const char str1[] = "ABCDEF4960910";
        const char str2[] = "013";

        len = my_strcspn(str1, str2);

        printf("First matched character is at %d\n", len ); // output = 9
   */


   //_______________________________ END of testing my_strcspn _______________________________




   //_______________________________ start of testing my_strpbrk _______________________________
    /*
        const char str1[] = "abcde2fghi3jk4l";
        const char str2[] = "j4";
        char *ret;
        // output --> j
        ret = my_strpbrk(str1, str2);
        if(ret) {
            printf("First matching character: %c\n", *ret);
        } else {
            printf("Character not found");
        }
    */

   //_______________________________ END of testing my_strpbrk _______________________________
   




   //_______________________________ start of testing my_strrchr _______________________________
    /*
        int len;
        const char str[] = "http://www.tutorialspoint.com";
        const char ch = '.';
        char *ret;

        ret = my_strrchr(str, ch);

        printf("String after |%c| is - |%s|\n", ch, ret);
    */


   //_______________________________ END of testing my_strrchr _______________________________


   //_______________________________ start of testing my_strspn _______________________________
    /*
        int len;
        const char str1[] = "ABCDEFG019874";
        const char str2[] = "ABCDEFG019874";

        len = my_strspn(str1, str2);

        printf("Length of initial segment matching %d\n", len );
    */ 


   //_______________________________ END of testing my_strspn _______________________________

   return(0);
}

/**
 *************************************************************************************************
        User                       Date                        Brief
 *************************************************************************************************
 Ahmed Khaled Abdelmaksod       05:07:2023            Task-1 Add function's my_memchr  Test
 Ahmed Khaled Abdelmaksod       05:07:2023            Task-2 Add function's my_memcmp  Test
 Ahmed Khaled Abdelmaksod       05:07:2023            Task-3 Add function's my_memcpy  Test
 -------------------------------------------------------------------------------------------------
 Ahmed Khaled Abdelmaksod       06:07:2023            Task-4 Add function's my_memmove Test
 Ahmed Khaled Abdelmaksod       06:07:2023            Task-5 Add function's my_memset Test
 Ahmed Khaled Abdelmaksod       06:07:2023            Task-6 Add function's my_strlen  Test
 Ahmed Khaled Abdelmaksod       06:07:2023            Task-7 Add function's my_strcat  Test
 Ahmed Khaled Abdelmaksod       06:07:2023            Task-8 Add function's my_strncat  Test
 Ahmed Khaled Abdelmaksod       06:07:2023            Task-9 Add function's my_strchr  Test
 Ahmed Khaled Abdelmaksod       06:07:2023            Task-10 Add function's my_strcmp  Test
 Ahmed Khaled Abdelmaksod       06:07:2023            Task-11 Add function's my_strncmp  Test
 Ahmed Khaled Abdelmaksod       06:07:2023            Task-12 Add function's my_strcoll  Test
 Ahmed Khaled Abdelmaksod       06:07:2023            Task-13 Add function's my_strcpy  Test
 Ahmed Khaled Abdelmaksod       06:07:2023            Task-14 Add function's my_strncpy  Test
 -------------------------------------------------------------------------------------------------
 Ahmed Khaled Abdelmaksod       07:07:2023            Task-15 Add function's my_strcspn  Test
 Ahmed Khaled Abdelmaksod       07:07:2023            Task-16 Add function's my_strpbrk  Test
 Ahmed Khaled Abdelmaksod       07:07:2023            Task-17 Add function's my_strrchr  Test
 Ahmed Khaled Abdelmaksod       07:07:2023            Task-18 Add function's my_strspn  Test

*/