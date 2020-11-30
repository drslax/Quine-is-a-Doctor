#include <stdio.h>
#define KID "Grace_kid.c"
#define GRACE "#include <stdio.h>%1$c#define KID %3$c%4$s%3$c%1$c#define GRACE %3$c%2$s%3$c%1$c#define FT(x) int main(){fprintf(fopen(KID, x),GRACE,10,GRACE,34,KID,9);}%1$cFT(%3$cw%3$c);%1$c%1$c/*%1$c%5$cRIP Dr Quine.%1$c*/%1$c"
#define FT(x) int main(){fprintf(fopen(KID, x),GRACE,10,GRACE,34,KID,9);}
FT("w");

/*
	RIP Dr Quine.
*/
