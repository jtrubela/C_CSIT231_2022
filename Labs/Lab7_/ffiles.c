/* Open, write and close a file : */
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
 
int main( )
{
    FILE *fp ;
    char data[50];
    
    fflush(stdin);
    system("clear");

    printf( "Attempting opening the file test.out in READ mode\n\n" ) ;
    fp = fopen("test.out", "r") ;
    if ( fp == NULL )
    {
      printf( "Could not open test.out to read does not exist or do not have permission\n" ) ;
      printf( "Attempting to create the file by opening it in WRITE mode\n\n");
      fp = fopen("test.out", "a");
      if ( fp == NULL )
      {
        printf( "Could NOT create or write to file test.out exiting\n" ) ;
        exit(9);
      }
      else
      {
        printf("file test.out opened in WRITE mode\n\n");
      } 
    }
    else
    {
      fclose(fp);
      printf( "Attempting to open it in APPEND mode\n\n");
      fp = fopen("test.out", "a");
      if ( fp == NULL )
      {
        printf( "Could NOT write to existing file test.out exiting, check your permissions\n") ;
        exit(8);
      }
      else
      {
        printf("file test.out opened in APPEND mode\n\n");
      }
    }
    

    // getting input from user
    printf( "Enter some text from keyboard to write to file\n");
    fgets( data, 50, stdin);
    fputs(data, fp) ;   

    // closing the file
    printf("Closing the file test.out\n") ;
    fclose(fp) ;

    chmod("test.out", S_IRUSR|S_IRGRP|S_IWUSR|S_IWGRP);
//    chmod("test.out", S_IRUSR);

    exit(0);        

}
