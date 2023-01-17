#include <stdio.h>
#include <string.h>

  int main()
  {
    printf(\n\n\n);
    char string[] = "C:\\Eigene Dateien\\FOM\\C-Code\\main.c";
    char* Extension = strrchr(string, '.');
    printf("Extension: %s \n", Extension + 1);
    char* Dateiname = strrchr(string, '\\');
    printf("Dateiname: %s \n", Dateiname + 1);
    *Dateiname = '\0';
    printf("Verzeichnis: %s \n", string);
    printf(\n\n\n);
    return 0;
  }
