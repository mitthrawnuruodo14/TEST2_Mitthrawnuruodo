#include <stdio.h>

int strlength(char* string,int length_of_string){
    for (int i = 0; string[i] == '\0';i ++ , length_of_string++  );
    return length_of_string;
}


int main(int argc, char* argv[]){
    if(argc > 2){
        printf("Es wurden zuviele argumente übergeben\n");
        return -1;
    }
    
    int number_d = 0;
    char* binary_number = argv[1];
    int length_of_string = strlength(argv[1], 1);
    printf("%d",length_of_string);
    printf("zeile 11\n");
    for(int i = 0; i < length_of_string; i++){
        // aufgrund des errors und die zeit die ich auf denn fix verwendet habe 
        //werde ich temporär hier eine gehradcodeede zahl verwenden sollte ich später eine bessere lösung finden wir das angepasst
        if (binary_number[i]== 1){
            number_d = number_d +(i*2);
        }
        if (binary_number[i] == '\0'){
            printf("der string ist aus\n");
            break;
        }
        printf("erflogreich");
        
    }

    printf("%s\n",argv[1]);

    return 0;
}