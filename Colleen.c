#include <stdio.h>

/*
	This program will print its own source when run.
*/

char* called()
{
	return("#include <stdio.h>%1$c%1$c/*%1$c%2$cThis program will print its own source when run.%1$c*/%1$c%1$cchar* called()%1$c{%1$c%2$creturn(%4$c%3$s%4$c);%1$c}%1$c%1$cint main()%1$c{%1$c%1$c/*%1$c%2$cRIP Dr Quine.%1$c*/%1$c%2$cprintf(called(),10,9,called(),34);%1$c%2$creturn 0;%1$c}");
}

int main()
{

/*
	RIP Dr Quine.
*/
	printf(called(),10,9,called(),34);
	return 0;
}