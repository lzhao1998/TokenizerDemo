#include "tokenizerstring.h"
#include <stdlib.h>

TokenizerString *tokenizerStringCreate(char *str)
{
  TokenizerString *tokStr = (TokenizerString *)malloc(sizeof(TokenizerString));
  tokStr->data = str;
  tokStr->index = 0;
  
  return tokStr;
}

void tokenizerStringFree(TokenizerString *tokStr)
{
  free(tokStr);   //free tokStr when not use to save memory space
}
