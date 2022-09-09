#include <stdio.h>                                                                                                                                                              
/**                                                                                                                                                                              
* main fuction prints the alphabets in lowercase                                                                                                                               
*                                                                                                                                                                               
* description: using the main function                                                                                                                                         
* this program prints the alphabets                                                                                                                                             
* return: 0                                                                                                                                                                     
*/                                                                                                                                                                              
int main(void)                                                                                                                                                                   
{                                                                                                                                                                                
char ch;                                                                                                                                                                         
for (ch = 'z'; ch >= 'a'; ch--)                                                                                                                                                  
{                                                                                                                                                                                
        putchar(ch);                                                                                                                                                             
}                                                                                                                                                                                
putchar('\n');                                                                                                                                                                   
return (0);                                                                                                                                                                      
}                             
