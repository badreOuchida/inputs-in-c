#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



// soutput based for the string showed to the user on the console 

typedef char *string; // new datatype string


// ask user for a string 
int get_string( string s /* string gived by the user  */, string soutput /* string showed on the console*/)
{
    // the variable where we store the char gived by the user
   char c ;
   
   // lenght of the string gived by the user
   int len = 0 ;


    // resize our memory block for safety purposes
   s = realloc(s,sizeof(char)*1);


    // show the soutput string 
   printf("%s ",soutput);


    // build our string based on the char typed by th user 
   do{

      c = getchar();

        // if the user any key other than enter button resize our memory block to cover all our new string 
      if(c != '\r' && c != '\n')
      {
         len++ ; 
         s = (char*)realloc(s,sizeof(char)*len);
         if( s == NULL)
         {
            printf("somethings goes wrong with size %i \n",len);
            return 1;
         }
         
         *(s+len-1) = c ;
         *(s+len) = '\0';

      }
      // if the user presse the delete button than resize our memory block 
      if( c == 127)
      {
         len--;
         s = (char*)realloc(s,sizeof(char)*len);
         if( s == NULL)
         {
            printf("somethings goes wrong with size %i \n",len);
            return 1;
         }
      }
      
   }
   while( c != '\r' && c != '\n' ) ; // uf the user presse the enter button quit 
   return len ;
}



// ask user for int

int get_int(string soutput)
{
    // inisialise our var 
    bool is_all_int ;
    string s ;

    do
    {
        is_all_int = 1;
        s = malloc(1*sizeof(char));
        // ask the user for the int
        get_string(s ,soutput);

        // check if the input gived by the user is correct (there is no included char)
        int n = strlen(s);
        for(int i = 0 ; i < n ; i++)
        {
            if( !( (s[i] >= 48 && s[i] <= 57) || s[0] == '-' ) )
            {
                is_all_int = 0 ;
                break;
            }
        }
        if( s[n-1] == ' ')
        {
           is_all_int = 1 ;
        }
    }
    while( !is_all_int ) ; // until the is_all_int is 0
    int val = atoi(s); // convert str to int 
    free(s);
    return val;
}



// ask user for float

float get_float(string soutput)
{
    // inisialise our var 
    bool is_all_int ;
    string s ;

    do
    {
        is_all_int = 1;
        s = malloc(1*sizeof(char));
        // ask the user for the int
        get_string(s ,soutput);

        // check if the input gived by the user is correct (there is no included char)
        int n = strlen(s);
        for(int i = 0 ; i < n ; i++)
        {
            if( !( (s[i] >= 48 && s[i] <= 57) || s[0] == '-' || (s[i] == '.') ) )
            {
                is_all_int = 0 ;
                break;
            }
        }
        if( s[n-1] == ' ')
        {
           is_all_int = 1 ;
        }
    }
    while( !is_all_int ) ; // until the is_all_int is 0
    char *s2 ;
    float val = strtof(s,&s2); // convert str to int 
    free(s);
    return val;
}


// ask user for long
long get_long(string soutput)
{
    // inisialise our var 
    bool is_all_int ;
    string s ;

    do
    {
        is_all_int = 1;
        s = malloc(1*sizeof(char));
        // ask the user for the int
        get_string(s ,soutput);

        // check if the input gived by the user is correct (there is no included char)
        int n = strlen(s);
        for(int i = 0 ; i < n ; i++)
        {
            if( !( (s[i] >= 48 && s[i] <= 57) || s[0] == '-' ) )
            {
                is_all_int = 0 ;
                break;
            }
        }
        if( s[n-1] == ' ')
        {
           is_all_int = 1 ;
        }
    }
    while( !is_all_int ) ; // until the is_all_int is 0
    char *s2 ;
    long val = strtol(s ,&s2 ,10); // convert str to int 
    free(s);
    return val;
}




// double 


float get_double(string soutput)
{
    // inisialise our var 
    bool is_all_int ;
    string s ;

    do
    {
        is_all_int = 1;
        s = malloc(1*sizeof(char));
        // ask the user for the int
        get_string(s ,soutput);

        // check if the input gived by the user is correct (there is no included char)
        int n = strlen(s);
        for(int i = 0 ; i < n ; i++)
        {
            if( !( (s[i] >= 48 && s[i] <= 57) || s[0] == '-' || (s[i] == '.') ) )
            {
                is_all_int = 0 ;
                break;
            }
        }
        if( s[n-1] == ' ')
        {
           is_all_int = 1 ;
        }
    }
    while( !is_all_int ) ; // until the is_all_int is 0
    char *s2 ;
    double val = strtod(s,&s2); // convert str to int 
    free(s);
    return val;
}