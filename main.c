
#include <stdio.h>
#include <stdlib.h>

#include <dos.h>
#include <conio.h>
#include <time.h>
#include <windows.h>




int main()
{
    system("mode 800");
    showAppName();
    printf("\n\n\n");
    printf("\t\t\tAre you ready for Test ? Y/N : ");
    char what[10];
    gets(what);

    openQuestion();

    //showGameOver();

    return 0;
}

