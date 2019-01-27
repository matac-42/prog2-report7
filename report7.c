#include <stdio.h>

void descend_order(int array[], int size);
int main(){
    const int SIZE = 6;
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};
    

    printf("scores = ");
    for(int i=0; i<SIZE; i++){
        printf("%d ",scores[i]);
        }
    printf("\n");


    descend_order(scores, SIZE);

    printf("results = ");
    for(int i=0; i<SIZE; i++){
        printf("%d ",scores[i]);
        }
    printf("\n");

    return 0;
    }


void descend_order(int array[], int size){

    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1; j++)
            if(array[j]<array[j+1]){
                int k = array[j];
                array[j] = array[j+1];
                array[j+1] = k;
                }
        }

    }
