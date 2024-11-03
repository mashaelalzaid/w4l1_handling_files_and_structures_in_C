#include <stdio.h>
#include <string.h>



int main() {
    //initialize file
    FILE *fptr = fopen("cx-202-lab7/task2test.txt", "r");
    if (fptr==NULL){
        printf("file doesn't exist");
    return 1;
    }
    char data[100];
    int wordC=0;
    int charC=0;
    int lineC=0;
    
    int in_word=0;
    while(fgets(data, sizeof(data), fptr)) {
        printf("%s", data);
        lineC++;
        for (int i=0; data[i] != '\0'; i++){
            if(data[i] == ' ' || data[i] == '\t'){
                wordC++;
                in_word=0;
                } else {
                charC++;
                in_word =1;
            }
        }

        if(in_word) {
        wordC++;
        in_word=0;
        }
}

     // Closing the file
     fclose(fptr);
     printf("Data successfully read from file\n");
     printf("Count of words: %d\n",wordC);
     printf("Count of characters: %d\n", charC);
     printf("Count of lines: %d\n",lineC);
    


return 0; 

}

