#include <stdio.h>
#include <stdlib.h>

#include <dos.h>
#include <conio.h>
#include <time.h>
#include <windows.h>


char ans[100];
int mark = 0;
FILE *qFile,*oFile;
void openFile(){


}
void openQuestionFile(){
 qFile = fopen("question.csv","r");
    if(qFile == NULL){
        exit(1);
    }
}
void openOptionFile(){
     oFile = fopen("options.csv","r");
      if(oFile == NULL){
        exit(1);
    }
}
void getAnsFromUser(){
    char userAns[100];

    printf("  Write ans here : ");
    gets(userAns);



    int i =0,j=0,k=0,isCorrectAns = 0;
    char newUserStr[100]="",newAns[100]="";

    for(int i=0;i<strlen(userAns);i++){
        char c = userAns[i];
        if (c != ','){
            newUserStr[j]  = c;
            j++;
        }

    }
    newUserStr[j+1] = '\0';
    for(int o=0;o<strlen(ans);o++){
        char d = ans[o];
        if (d != '-'){

            newAns[k]  = d;
            k++;
        }

    }
    newAns[k+1] = '\0';


    if(strlen(newAns) == strlen(newUserStr)){
        for(int x =0 ;x<strlen(newUserStr);x++){

            int tempAns = 0;
            for (int y =0;y<strlen(newAns) ; y++){
                char ca = newUserStr[x];
                char cb = newAns[y];

                if(ca==cb){
                    //printf("%c==%c=%d\n",ca,cb,ca==cb);
                    tempAns = 1;

                }

            }
            if(tempAns == 0){
                isCorrectAns = 0;
                break;
            }else{
                isCorrectAns = 1;
            }

        }
    }

    if (isCorrectAns == 1){
        mark +=1;
    }
    system("cls");

    printf(" Your mark is %d\n",mark);

}
void openOption(char questionId[10]){

    openOptionFile();
    char line[200];

    while(fgets(line,sizeof(line),oFile)){
        char *token;
        token = strtok(line,",");

        int i =0;
        char optionid[10];
        char optionQid[10];
        char optionNum[10];
        char option[1024];
        while(token != NULL){
            switch(i){
                case 0:
                    strcpy(optionid,token) ;
                    break;
                case 1:
                    strcpy(optionQid,token) ;
                    break;
                case 2:
                    strcpy(optionNum,token) ;
                    break;
                case 3:
                    strcpy(option,token) ;
                    break;

            }
            token = strtok(NULL,",");
            i++;
        }

        if (strcmp(optionQid,questionId) == 0 ){
            printf("\n\t%s - %s\n",optionNum,option);
        }




    }
    getAnsFromUser();

     fclose(oFile);

}
void openQuestion(){

    openQuestionFile();
    char line[200];


    while(fgets(line,sizeof(line),qFile)){
        char *token;
        token = strtok(line,",");

        int i =0;
        char questionid[10];
        char question[1024];
        while(token != NULL){
            switch(i){
                case 0:
                    strcpy(questionid,token) ;
                    break;
                case 1:
                    strcpy(question,token);
                    break;
                case 3:
                    strcpy(ans,token);
                    break;

            }
            token = strtok(NULL,",");
            i++;
        }
        printf("\n  %s - %s\n",questionid,question);
        openOption(questionid);
    }
}
