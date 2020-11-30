int i = 5;
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define OPEN(f) open(f, O_WRONLY | O_CREAT, 0644)

void compile() {
char cmd[63];
sprintf(cmd, "gcc -Wall -Wextra -Werror Sully_%1$d.c -o Sully_%1$d ; ./Sully_%1$d", i);
system(cmd);
}

int main() {
if (i >= 0 && i <= 5) {
if (!access("Sully_5.c", R_OK)) i--;
char *sully = "int i = %4$d;%1$c#include <stdio.h>%1$c#include <fcntl.h>%1$c#include <unistd.h>%1$c#include <stdlib.h>%1$c#define OPEN(f) open(f, O_WRONLY | O_CREAT, 0644)%1$c%1$cvoid compile() {%1$cchar cmd[63];%1$csprintf(cmd, %3$cgcc -Wall -Wextra -Werror Sully_%%1$d.c -o Sully_%%1$d ; ./Sully_%%1$d%3$c, i);%1$csystem(cmd);%1$c}%1$c%1$cint main() {%1$cif (i >= 0 && i <= 5) {%1$cif (!access(%3$cSully_5.c%3$c, R_OK)) i--;%1$cchar *sully = %3$c%5$s%3$c;%1$cchar filename[10];%1$csprintf(filename, %3$cSully_%%d.c%3$c, i);%1$cdprintf(OPEN(filename), sully, 10, 9, 34, i, sully);%1$cif (i > 0) compile();%1$c}%1$creturn 0;%1$c}%1$c";
char filename[10];
sprintf(filename, "Sully_%d.c", i);
dprintf(OPEN(filename), sully, 10, 9, 34, i, sully);
if (i > 0) compile();
}
return 0;
}
