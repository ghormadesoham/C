#include <stdio.h>

// string length 
size_t xstrlen(const char*s);
// copy string from source to target
xstrcpy(char*t, const char*s);
//Concatenate strings
// Appends a copy of the source string to the destination string.
//The terminating null character in destination is overwritten by the first character of source, and a null-character is included at the end of the new string formed by the concatenation of both in destination.

char * xstrcat ( char * destination, const char * source );

// Compare two strings
// Compares the C string str1 to the C string str2.

// This function starts comparing the first character of each string.
// If they are equal to each other, it continues with the following pairs until the characters differ or until a terminating null-character is reached.

//destination and source shall not overlap.
int xstrcmp ( const char * str1, const char * str2 );
// reverses a string 
xstrrev(char * str);
// find a string subset in the given string
xstrstr();

int main()
{
printf("Sizes of primitive types: \n");
printf("sizeof(int) : %d  , sizeof(char) : %d  sizeof(float) : %d sizeof(double) : %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
 // Character size tests
 char ch = 'A';
 printf("Character size tests \n");
 printf("sizeof(ch) : %d, sizeof('A') : %d\n",sizeof(ch),sizeof('A'));// 1 4
    
 printf(" 5 + \"Fascimile\n\":");
 printf(5 + "Fascimile\n");
 printf(" sizeof('3') : %d sizeof(\"3\") : %d sizeof(3) : %d \n", sizeof('3'),sizeof("3"),sizeof(3));// 4 2 4

char *str11[] = {"Frogs","Do","Not","Die.","They","Crock!"};
printf("sizeof(str) : %d sizeof(str[0]) : %d\n",sizeof(str11),sizeof(str11[0]));// 24 4 or 12 2 
    
char str1[] = "Hello";
char str2[] = "Hello";
if (str1 == str2)
printf("str1[] == str2[] \n ");
else
printf("str1[] != str2[] \n");// this will print!
    
    
 char str[] = "Hello";// note the syntax !!!:it is char stringName then [] brackets not char[] str!!!

    
 char target1[20];
 char target2[20];
 xstrcpy(target1 ,str);
 strcpy(target2 ,str);
 printf("xstrcpy() for Hello:%s strcpy() for Hello: %s\n", target1, target2);


 int i1 = xstrlen(str);
 int i2 = strlen(str);
 printf("xstrlen() for Hello :%d strlen() for Hello: %d\n", i1, i2);
 
    
    
char s1[30] ="Hello!";// memory allocation is the programmer's responsibility!Allocate enough  memory so that the copy operation would work!
char s2[30] ="Hello!";
char t1[] ="How are you?";
char t2[] ="How are you?";
xstrcat(s1,t1);
strcat(s2,t2);

printf("xstrcat() for Hello :%s strcat() for Hello: %s\n", s1, s2);
printf("xstrcmp() :%d strcmp(): %d\n", xstrcmp(s1, s2), strcmp(s1, s2));
printf("same strings\n");
printf("xstrcmp() :%d strcmp(): %d\n", xstrcmp(s1, s1), strcmp(s1, s1));
printf("different strings\n");
char s11[] = "ABCD";
char t11[] = "ABC";
printf("xstrcmp() :%d strcmp(): %d\n", xstrcmp(s11, t11), strcmp(s11, t11));
printf("xstrcmp() :%d strcmp(): %d\n", xstrcmp(t11, s11), strcmp(t11, s11));

scanf("%d", &i1);// hold the console window to see output

return 0;
}

size_t xstrlen(const char*s)
{
  size_t length = 0;
  while(*s !='\0')
  {
    length++;
     s++;
  }
  return length;
}

xstrcpy(char *t, const char*s)
{
  
  while(*s !='\0')
  {
     *t = *s;
      t++;
      s++;
  }
    *t ='\0';// set the string terminator for the last character!!
 
}

char * xstrcat ( char * destination, const char * source )
{
    // goto last char 
      while(*destination !='\0')
  {  
      destination++;   
  }
// start copying
     while(*source !='\0')
  {
     *destination = *source;
      destination++;
      source++;
  }
    // add string terminator
    *destination ='\0';
  
    return destination;
}

int xstrcmp ( const char * str1, const char * str2 )
{
    int result = 0;
    
    while(*str1 != '\0' || *str2 != '\0')
    {
        
        if(*str1 > *str2)
        {
            result = 1;
            break;
        }
        
         if(*str2 > *str1)
        {
            result = -1;
            break;
        }
        
        str1++;
        str2++;
    }
    return result;
}