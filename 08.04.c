#include <stdio.h>
#include <string.h>

  int main()
  {
    char string[] = "C:\\Eigene Dateien\\FOM\\C-Code\\main.c";
    char* Extension = strrchr(string, '.');
    printf("Extension: %s \n", Extension);
  
    
    return 0;
  }
