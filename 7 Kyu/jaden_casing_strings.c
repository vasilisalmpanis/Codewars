#include <string.h>

char *to_jaden_case (char *jaden_case, const char *string)
{
  strcpy(jaden_case,"");
  if (string[0]=='\0') return jaden_case;
  int i;
for ( i=0;string[i]!='\0';i++){
  if (i>0) {
    if (string[i-1]==' '&&string[i]>='a'&&string[i]<='z') jaden_case[i]=string[i]-32;
    else jaden_case[i]=string[i];
    
  } else if (string[i]>='a'&&string[i]<='z') {
    jaden_case[i]=string[i]-32;
  } else {
    jaden_case[i]=string[i];
  }
}
  jaden_case[i]='\0';
  

  return jaden_case;
}
