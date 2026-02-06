# include <stdio.h>
char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int i;
    for(i=0;i<lettersSize;i++){
        if(target < letters[i]){
            return letters[i];
        }
    }
    return letters[0];
}