
#include <stdio.h>
#include <stdlib.h>

#include <dos.h>
#include <conio.h>
#include <time.h>
#include <windows.h>




int main()
{
    char password[128]="";

    deleteFile();
    showAppName();
    if(isExamFileNotFound()){
        printf("\n\n\n");
        printf("\t\t\t'examFile.xm' file not found . please collect this file from your teacher\n");
        printf("\t\t\tPress any to exit this program ");

        getch();
        exit(1);
    }
    printf("\n\n\n");
    printf("\t\t\tEnter Password: ");
    while(1){
        inputValidPassword(password);
        extractExamFile(password);
        if( fileCheck() == 0){
            break;
        }else{
            printf("Password is incorrect \n");
            printf("\nEnter Password: ");
        }
    }
    // system("mode 800");



    //printf("\t\t\tAre you ready for Test ? Y/N : ");
    //char what[10];
    //gets(what);
    system("cls");

    openQuestion();

    //showGameOver();

    return 0;
}

