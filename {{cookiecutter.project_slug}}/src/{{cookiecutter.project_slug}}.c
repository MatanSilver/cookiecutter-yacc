#include <stdio.h>
#include "tokens.h"
#include "grammar.h"

int yyparse(void);
int main(int argc, char **argv) {
	//printf("%s", argv[0]);
	yyparse();
}
