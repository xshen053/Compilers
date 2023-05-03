/* Copyright @ Xiaxi Shen 2023 */

%{   
   int currLine = 1, currPos = 1;
   int numNumbers = 0;
   int numOperators = 0;
   int numParentheses = 0;
   int numEqualSigns = 0;
%}

DIGIT    [0-9]
   
%%

"-"                     {printf("MINUS\n"); currPos += yyleng; numOperators++;}
"+"                     {printf("PLUS\n"); currPos += yyleng; numOperators++;}
"*"                     {printf("MULT\n"); currPos += yyleng; numOperators++;}
"/"                     {printf("DIV\n"); currPos += yyleng; numOperators++;}
"="                     {printf("EQUAL\n"); currPos += yyleng; numEqualSigns++;}
"("                     {printf("L_PAREN\n"); currPos += yyleng; numParentheses++;}
")"                     {printf("R_PAREN\n"); currPos += yyleng; numParentheses++;}

(\.{DIGIT}+)|({DIGIT}+(\.{DIGIT}*)?([eE][+-]?[0-9]+)?)     {printf("NUMBER %s\n", yytext); currPos += yyleng; numNumbers++;}

[ \t]+                  {/* ignore spaces */ currPos += yyleng;}

"\n"                    {currLine++; currPos = 1;}

.                       {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}

%%


void usage();

int main(int argc, char ** argv)
{
  if (argc > 2) {
    usage();
    return EXIT_FAILURE;
  } else if (argc == 2) {
    yyin = fopen(argv[1], "r"); // "r" for read
    if (yyin == NULL) {
      printf("No Such File\n");
      return EXIT_FAILURE;
    }
  } else {
    yyin = stdin;
  }
  yylex();
  printf("# Integers: %d\n", numIntegers);
  printf("# Operators: %d\n", numOperators);
  printf("# Parentheses: %d\n", numParentheses);
  printf("# Equal Signs: %d\n", numEqualSigns);
  return EXIT_SUCCESS;
}

void usage() {
  printf("input should be two \n");
}

