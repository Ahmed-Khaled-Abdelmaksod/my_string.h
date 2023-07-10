/**
 ******************************************************************************
 * @file           : my_string.h
 * @author         : Ahmed khaled Abdelmaksod
 * @brief          : Contains prototypes of the implemented functions  
 ******************************************************************************
 */
/*file gaurd*/
#ifndef _MY_STRING_H_
#define _MY_STRING_H_

/*_____________prototypes_______________*/


/**
 ******************************************************************************
 * argument : 1- void pointer point to the block we will search in it for the char
 *            2- int char c--> the char we search for
 *            3- int n --> Number of bytes where we search in
 * return   : void pointer point to the address of the char c or null if not found
 * brief    : searches for the first occurrence of the character c (an unsigned char)
 *            in the first n bytes of the string pointed to, by the argument str.
 *  ******************************************************************************
*/
void *my_memchr(const void *str, int c, int n);


/**
 ******************************************************************************
 * argument : 1- void pointer point to the first block
 *            2- void pointer point to the second block
 *            3- int n --> Number of bytes which we will compare
 * return   : int indicate if str1 > or < or == str2
 * brief    : compares the first n bytes of memory area str1 and memory area str2.
 *  ******************************************************************************
*/
int my_memcmp(const void *str1, const void *str2, int n);


/**
 ******************************************************************************
 * argument : 1- void pointer point to destination block
 *            2- void pointer point to source block
 *            3- int n --> Number of bytes which we will be copied
 * return   : void pointer point to destination block
 * brief    : copies n characters from memory area src to memory area dest.
 *  ******************************************************************************
*/
void *my_memcpy(void *dest, const void *src, int n);


/**
 ******************************************************************************
 * argument : 1- void pointer point to destination block
 *            2- void pointer point to source block
 *            3- int n --> Number of bytes which will be copied
 * return   : void pointer point to destination block
 * brief    : copies n characters from memory area src to memory area dest.
 *  ******************************************************************************
*/
void *my_memmove(void *str1, const void *str2, int n);


/**
 ******************************************************************************
 * argument : 1- void pointer point to the start address
 *            2- char c which will be copied
 *            3- int n --> Number of bytes which will be copied
 * return   : void pointer point to the start address
 * brief    : copies the character c (an unsigned char) to the first n characters
 *            of the string pointed to, by the argument str.
 *  ******************************************************************************
*/
void *my_memset(void *str, int c, int n);


/**
 ******************************************************************************
 * argument : 1- void pointer point to the block which we want to calculate its length
 * return   : int indicate the length of the block
 * brief    : computes the length of the string str up to, but not including 
 *            the terminating null character.
 *  ******************************************************************************
*/
unsigned int my_strlen(const char *str);


/**
 ******************************************************************************
 * argument : 1- void pointer point to the destination block
 *            2- void pointer point to the source block
 * return   : char pointer point to the distination block
 * brief    : appends the string pointed to by src to the end of the string 
 *            pointed to by dest.
 *  ******************************************************************************
*/
char *my_strcat(char *dest, const char *src);


/**
 ******************************************************************************
 * argument : 1- void pointer point to the destination block
 *            2- void pointer point to the source block
 *            3- int n --> Number of chars to be copied
 * return   : char pointer point to the distination block
 * brief    : appends the string pointed to by src to the end of the string 
 *            pointed to by dest up to n characters long
 *  ******************************************************************************
*/
char *my_strncat(char *dest, const char *src, int n);


/**
 ******************************************************************************
 * argument : 1- void pointer point to the string
 *            2- int c we search for
 * return   : char pointer point to the char c if found , if not fount it will be null
 * brief    : searches for the first occurrence of the character c (an unsigned char)
 *            in the string pointed to by the argument str.
 *  ******************************************************************************
*/
char *my_strchr(const char *str, int c);


/**
 ******************************************************************************
 * argument : 1- void pointer point to the first string
 *            2- void pointer point to the second string
 * return   : int var indicate if str1 (> or < or ==) str2
 * brief    : compares the string pointed to, by str1 to the string pointed to by str2.
 *  ******************************************************************************
*/
int my_strcmp(const char *str1, const char *str2);


/**
 ******************************************************************************
 * argument : 1- void pointer point to the first string
 *            2- void pointer point to the second string
 *            3- int n --> number of the compared bytes
 * return   : int var indicate if str1 (> or < or ==) str2
 * brief    : compares the string pointed to, by str1 to the string pointed to by str2.
 *  ******************************************************************************
*/
int my_strncmp(const char *str1, const char *str2, int n);



/**
 ******************************************************************************
 * argument : 1- void pointer point to the first string
 *            2- void pointer point to the second string
 * return   : int var indicate if str1 (> or < or ==) str2
 * brief    : compares string str1 to str2. The result is dependent on the LC_COLLATE 
 *            setting of the location.
 *  ******************************************************************************
*/
int my_strcoll(const char *str1, const char *str2);


/**
 ******************************************************************************
 * argument : 1- void pointer point to the first string
 *            2- void pointer point to the second string
 * return   : pointer to the destination
 * brief    : copies the string pointed to by src to dest.
 *  ******************************************************************************
*/
 char *my_strcpy(char *dest, const char *src);


/**
 ******************************************************************************
 * argument : 1- void pointer point to the first string
 *            2- void pointer point to the second string
 *            3- int indicate the number of copied letters
 * return   : pointer to the destination
 * brief    : copies up to n characters from the string pointed to, by src to dest. In a case 
 *            where the length of src is less than that of n, the remainder of dest 
 *            will be padded with null bytes.
 *  ******************************************************************************
*/
 char *my_strncpy(char *dest, const char *src, int n);



/**
 ******************************************************************************
 * argument : 1- This is the main C string to be scanned.
 *            2- This is the string containing a list of characters to match in str1.
 *            3- int indicate the number of copied letters
 * return   : This function returns the number of characters in the initial segment
 *            of string str1 which are not in the string str2.
 * brief    : calculates the length of the initial segment of str1, which consists 
 *            entirely of characters not in str2.
 *  ******************************************************************************
*/
int my_strcspn(const char *str1, const char *str2);


/**
 ******************************************************************************
 * argument : 1- void pointer point to the first string
 *            2- void pointer point to the second string
 * return   : This function returns pointer to the first char the first character
 *            in the string str1 that matches any character specified in str2
 * brief    : finds the first character in the string str1 that matches any character 
 *            specified in str2. This does not include the terminating null-characters.
 *  ******************************************************************************
*/
char *my_strpbrk(const char *str1, const char *str2);


/**
 ******************************************************************************
 * argument : 1- void pointer point to the string
 *            2- char c we search for
 * return   : This function returns a pointer to the last occurrence of character
 *            in str. If the value is not found, the function returns a null pointer.
 * brief    : searches for the last occurrence of the character c (an unsigned char) 
 *            in the string pointed to, by the argument str.
 *  ******************************************************************************
*/
char *my_strrchr(const char *str, int c);



/**
 ******************************************************************************
 * argument : 1- void pointer point to the first string
 *            2- void pointer point to the second string
 * return   : This function returns the number of characters in the initial 
 *            segment of str1 which consist only of characters from str2
 * brief    : calculates the length of the initial segment of str1 which consists
 *            entirely of characters in str2.
 *  ******************************************************************************
*/
int my_strspn(const char *str1, const char *str2);



#endif


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