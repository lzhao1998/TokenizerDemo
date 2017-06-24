#include "expression.h"
#include "tokenizer.h"
#include "CException.h"
#include "Exception.h"
#include <stdio.h>

int computeExpression(char *str)
{
  TokenizerString *tokStr;
  Token *token;
  TokenInt *tokenInt;
  
  printf("expr: %s\n",str);
  tokStr = tokenizerStringCreate(str);   //being mocked
  token = tokenize(tokStr);              //being mocked
  
  if(token->id == INT_NUM)
  {
    tokenInt = (TokenInt*)token;
    printf("The value of integer token is %s\n", tokenInt->value);
  }
  else
  {
    Throw(createException("First token is not a number\n",1));
  }
  return 0;
}
