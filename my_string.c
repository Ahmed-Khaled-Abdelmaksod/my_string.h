/**
 ******************************************************************************
 * @file           : my_string.c
 * @author         : Ahmed khaled Abdelmaksod
 * @brief          : Contains implementations of the functions  
 ******************************************************************************
 */


/*_______________________________ Start of the includes _______________________________*/
#include"my_string.h"
#include<stdio.h>
#include<locale.h>
/*_______________________________ End of the includes _______________________________*/


/*_______________________________ Start of the implementation _______________________________*/


/*_______________________________ Start of my_memchr _______________________________*/

void *my_memchr(const void *str, int c, int n)
{
    char *ptr_char = NULL;
    int counter = 0;
    if(NULL == str)
    {
        printf("pointer is NULL !!\n");
    } 
    else
    {
        ptr_char = str;
        for(counter =0;counter<n;counter++)
        {
            if((*ptr_char)==c)
            {
                break;
            }
            else
            {
                ptr_char++;

            }
        }
        if(ptr_char == str)
        {
            ptr_char = NULL;
        }
        else
        {

        }
    }  
    return (ptr_char);
}

/*_______________________________ End of my_memchr _______________________________*/


/*_______________________________ start of my_memcmp _______________________________*/

int my_memcmp(const void *str1, const void *str2, int n)
{
    int counter = 0;
    char returned = 0;
    char *strr1 = str1;
    char *strr2 = str2;
    if((str1 == NULL) || (str2 == NULL))
    {
        printf("Warning one of the pointer is NULL");
    }
    else
    {
        if(str1 == str2)
        {
            returned = 0;
        }
        else
        {
            for(counter;counter<n;counter++)
            {
                if((*(strr1)) == (*(strr2)))
                {
                    strr1++;
                    strr2++;
                    continue;
                }
                else if((*(strr1)) > (*(strr2)))
                {
                    
                    returned = 1;
                    break;
                }
                else if((*(strr1)) < (*(strr2)))
                {
                    
                    returned = -1;
                    break;
                }
            }
        }
    }
    return (int)(returned);
}

/*_______________________________ End of my_memcmp _______________________________*/


/*_______________________________ start of my_memcpy _______________________________*/

void *my_memcpy(void *dest, const void *src, int n)
{
    int counter = 0;
    char *ptr_dest = dest;
    char *ptr_src = src;

    if((NULL == dest) || (src == NULL))
    {
        printf("there is a null pointer !!!");
    }
    else
    {
        for(counter;counter<n;counter++)
        {
            *ptr_dest = *ptr_src;
            ptr_dest++;
            ptr_src++;
        }
    }
    return dest;
}

/*_______________________________ End of my_memcpy _______________________________*/



/*_______________________________ start of my_memmove _______________________________*/

void *my_memmove(void *str1, const void *str2, int n)
{
    int counter = 0;
    char *ptr_str1 = str1;
    char *ptr_str2 = str2;

    if((NULL == str1) || (str2 == NULL))
    {
        printf("there is a null pointer !!!");
    }
    else
    {
        for(counter;counter<n;counter++)
        {
            *ptr_str1 = *ptr_str2;
            ptr_str1++;
            ptr_str2++;
        }
    }
    return str1;
}

/*_______________________________ End of my_memmove _______________________________*/


/*_______________________________ start of my_memset _______________________________*/


void *my_memset(void *str, int c, int n)
{
    int counter =0;
    char *ptr = str;
    if((NULL == str))
    {
        printf("pointer is a NULL Pointer");
    }
    else
    {
        for(counter=0;counter<n;counter++)
        {
            *ptr++ = c;
        }
    }
    return (str);
}


/*_______________________________ End of my_memset _______________________________*/



/*_______________________________ Start of my_strlen _______________________________*/



unsigned int my_strlen(const char *str)
{
    unsigned int length=0;
    char *ptr = str;
    //int counter= 0;
   if(NULL == str)
   {
        printf("there is a NULL Pointer");
   } 
   else
   {
        while((*ptr) != '\0')
        {
            length++;
            ptr++;
        }
   }
   return (length);
}

/*_______________________________ End of my_strlen _______________________________*/



/*_______________________________ Start of my_strcat _______________________________*/


char *my_strcat(char *dest, const char *src)
{
    int start = (my_strlen(dest));
    char *ptr_dest = (dest+start);
    char *ptr_src=src;
    int counter =0;
    if((NULL == dest) || (NULL == src))
    {
        printf("there is a NULL Pointer");
    }
    else
    {
        for(counter =0;counter<my_strlen(src);counter++)
        {
            *ptr_dest++ = *ptr_src++ ;
        }
    }
}

/*_______________________________ End of my_strcat _______________________________*/


/*_______________________________ start of my_strncat _______________________________*/


char *my_strncat(char *dest, const char *src, int n)
{
    int start = (my_strlen(dest));
    char *ptr_dest = (dest+start);
    char *ptr_src=src;
    int counter =0;
    if((NULL == dest) || (NULL == src))
    {
        printf("there is a NULL Pointer");
    }
    else
    {
        for(counter =0;counter<n;counter++)
        {
            *ptr_dest++ = *ptr_src++ ;
        }
        *ptr_dest = '\0';
    }
    return (dest);
}

/*_______________________________ End of my_strncat _______________________________*/

/*_______________________________ start of my_strchr _______________________________*/

char *my_strchr(const char *str, int c)
{
    const char *str_ptr = str;
    char *returned_ptr = NULL;
    int counter = 0;
    if(NULL == str)
    {
        printf("there is a NULL Pointer");
    }
    else
    {
        for(counter=0;counter < my_strlen(str);counter++)
        {
            if((*str_ptr) == c)
            {
                returned_ptr = str_ptr;
                break;
            }
            else
            {
                str_ptr++;
            }
        }
    }
    return (returned_ptr);
}

/*_______________________________ End of my_strchr _______________________________*/

/*_______________________________ End of my_strcmp _______________________________*/

int my_strcmp(const char *str1, const char *str2)
{
    int result = 0;
    int counter =0;
    char *str1_ptr = str1;
    char *str2_ptr = str2;
    if((NULL == str1) || (NULL == str2))
    {
        printf("there is a NULL Pointer");
    }
    else
    {
        if(str1_ptr == str2_ptr)
        {
            result =0;
        }
        else
        {
            for(counter=0 ; counter<my_strlen(str1) ; counter++)
            {
                if((*str1_ptr) == (*str2_ptr))
                {
                    str1_ptr++;
                    str2_ptr++;
                    continue;
                }
                else if((*str1_ptr) > (*str2_ptr))
                {
                    result =1;
                    break;
                }
                else if ((*str1_ptr) < (*str2_ptr))
                {
                    result =-1;
                    break;
                }
            }
        }
    }
    return (result);
}

/*_______________________________ End of my_strcmp _______________________________*/


/*_______________________________ start of my_strncmp _______________________________*/

int my_strncmp(const char *str1, const char *str2, int n)
{
    int result = 0;
    int counter =0;
    char *str1_ptr = str1;
    char *str2_ptr = str2;
    if((NULL == str1) || (NULL == str2))
    {
        printf("there is a NULL Pointer");
    }
    else
    {
        if(str1_ptr == str2_ptr)
        {
            result =0;
        }
        else
        {
            for(counter=0 ; counter<n ; counter++)
            {
                if((*str1_ptr) == (*str2_ptr))
                {
                    str1_ptr++;
                    str2_ptr++;
                    continue;
                }
                else if((*str1_ptr) > (*str2_ptr))
                {
                    result =1;
                    break;
                }
                else if ((*str1_ptr) < (*str2_ptr))
                {
                    result =-1;
                    break;
                }
            }
        }
    }
    return (result);

}

/*_______________________________ End of my_strncmp _______________________________*/

/*_______________________________ start of my_strcoll _______________________________*/

int my_strcoll(const char *str1, const char *str2)
{
    int result = 0;
    int counter =0;
    if((NULL == str1) || (NULL == str2))
    {
        printf("there is a NULL Pointer");
    }
    else
    {
        setlocale(LC_COLLATE,"");
        result = my_strcmp(str1,str2);
    }
    return (result);
}

/*_______________________________ End of my_strcoll _______________________________*/


/*_______________________________ start of my_strcpy _______________________________*/


char *my_strcpy(char *dest, const char *src)
{
    int counter = 0;
    char *ptr_dest = dest;
    char *ptr_src = src;
   if((NULL == dest) || (NULL == src))
    {
        printf("there is a NULL Pointer");
    }
    else
    {
        for(counter;counter<my_strlen(src);counter++)
        {
            *ptr_dest++ = *ptr_src++;
        }
        *ptr_dest ='\0';
    } 
    return (dest);
}

/*_______________________________ End of my_strcpy _______________________________*/


/*_______________________________ start of my_strcpy _______________________________*/

 char *my_strncpy(char *dest, const char *src, int n)
 {
    int counter =0;
    char *ptr_dest = dest;
    char *ptr_src = src;

    if((NULL == dest) || (NULL == src))
    {
        printf("there is a NULL Pointer");
    }
    else
    {
        if(n > my_strlen(src))
        {
           
            for(counter = 0;counter < n;counter++)
            {
                if(counter >= my_strlen(src))
                {
                    *ptr_dest++ = '\0';
                }
                else
                {
                    *ptr_dest++ = *ptr_src++;
                }
            }
        }
        else
        {
            for(counter =0 ;counter<n;counter++)
            {
                *ptr_dest++ = *ptr_src++;
            }
            *ptr_dest = '\0';
        }
    }
    return (dest);
 }


/*_______________________________ End of my_strcpy _______________________________*/


/*_______________________________ start of my_strcspn _______________________________*/

int my_strcspn(const char *str1, const char *str2)
{
    int sum =0;
    int flag=0;
    int outer_counter =0;
    int inner_counter =0;
    const char* ptr_str1 = str1;
    const char* ptr_str2 = str2;
    if((NULL == str1) || (NULL == str2))
    {
        printf("there is a NULL Pointer");
    }
    else
    {
        
        for(outer_counter=0;outer_counter < my_strlen(str1);outer_counter++)
        {
            for(inner_counter=0 ; inner_counter < my_strlen(str2) ; inner_counter++)
            {
                if(*(ptr_str1) == *(ptr_str2))
                {
                    sum = outer_counter;
                    flag =1;
                    break;
                }
                else
                {
                    ptr_str2++;
                }
            }
            if(flag == 1)
            {
                break;
            }
            ptr_str2=str2;
            ptr_str1++;
        }
    
    }
    return (sum);
    
}



/*_______________________________ End of my_strcspn _______________________________*/

/*_______________________________ start of my_strpbrk _______________________________*/

char *my_strpbrk(const char *str1, const char *str2)
{
    int flag=0;
    int outer_counter =0;
    int inner_counter =0;
    char *ptr_returned = NULL;
    const char* ptr_str1 = str1;
    const char* ptr_str2 = str2;
    if((NULL == str1) || (NULL == str2))
    {
        printf("there is a NULL Pointer");
    }
    else
    {
        for(outer_counter=0;outer_counter < my_strlen(str1);outer_counter++)
        {
            for(inner_counter=0 ; inner_counter < my_strlen(str2) ; inner_counter++)
            {
                if(*(ptr_str1) == *(ptr_str2))
                {
                    ptr_returned = ptr_str1;
                    flag =1;
                    break;
                }
                else
                {
                    ptr_str2++;
                }
            }
            if(flag == 1)
            {
                break;
            }
            ptr_str2=str2;
            ptr_str1++;
        }

    }
    return (ptr_returned);
}
/*_______________________________ End of my_strpbrk _______________________________*/

/*_______________________________ start of my_strrchr _______________________________*/


char *my_strrchr(const char *str, int c)
{
    char *ptr_found = NULL;
    char *ptr_search = ((str + my_strlen(str))); // try -1
    //ptr_search--;
    int counter = 0;

    if(NULL == str)
    {
        printf("there is a NULL Pointer");
    }
    else
    {
        for(counter=0 ; counter <my_strlen(str);counter++)
        {
            if((*(ptr_search)) == c)
            {
                ptr_found = ptr_search;
                break;
            }
            else
            {
                ptr_search--;
            }
        }
    }
    return (char*)(ptr_found);
}

/*_______________________________ End of my_strrchr _______________________________*/

/*_______________________________ start of my_strspn _______________________________*/

int my_strspn(const char *str1, const char *str2)
{
    int length =0;
    int counter =0;
    char* ptr_str1 =str1;
    char* ptr_str2 = str2;
   if((NULL == str1) || (NULL == str2))
    {
        printf("there is a NULL Pointer");
    } 
    else
    {
        for(counter=0;counter < my_strlen(str1) ; counter++)
        {
            if((*ptr_str1) == (*ptr_str2))
            {
                length++;
                ptr_str1++;
                ptr_str2++;
            }
            else
            {
                break;
            }
        }
    }
    return (length);
}

/*_______________________________ End of my_strspn _______________________________*/




/*_______________________________ End of the implementation _______________________________*/
