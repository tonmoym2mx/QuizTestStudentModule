#include <stdio.h>
#include <stdlib.h>

void inputPassword(char *password){


    char c;
   int index = 0;
   while((c = getch()) != 13){
       if(index < 0)
           index = 0;
       if(c == 8 && index >0 ){
           putch('\b');
           putch(NULL);
           putch('\b');
           index--;
       continue;
       }
       password[index++] = c;
       putch('*');
   }
   password[index] = '\0';
}
void inputValidPassword(char *password){
     while(1){
    inputPassword(password);
    if(!strlen(password)<=0){
       break;
    }else{
        printf("\n\t\t\tEnter valid password: ");
    }

   }
   printf("\n");
}
void createExamFile(char *password){
   char com[] = "7z a -tzip examfile.xm \*.csv -p";
   strcat(com,password);
   printf("%s\n",com);
   system(com);
   system("cls");
}
void deleteFile(){
     remove("question.csv");
     remove("options.csv");
     remove("check.csv");
}
void hideFile(){
   system("attrib +s +h options.csv");
   system("attrib +s +h question.csv");
   system("attrib +s +h check.csv");
   system("cls");
}
void extractExamFile(char *password){
    char com[] = "7z e examfile.xm  -r -p";
    strcat(com,password);
    system(com);
    Sleep(100);
    hideFile();
    system("cls");
}

int fileCheck(){
    char c[1000];
    FILE *fptr;
    if ((fptr = fopen("check.csv", "r")) == NULL) {
        //printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }
    fscanf(fptr, "%[^\n]", c);
    //printf("Data from the file:|%s|", c);
    fclose(fptr);
    return strcmp(c,"X");
}
int isExamFileNotFound(){
    return fopen("examfile.xm", "r") == NULL ;
}

