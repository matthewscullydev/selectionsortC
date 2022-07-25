#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define arraysize 10

//vars
//
//


int array[arraysize];



int main() {

    
    srand(time(NULL));

   
    for (int i = 0; i < arraysize; i++){
    
        int number = rand() % 360;
 
        array[i] = number;

    }
        
    
    printArray();
    printf("\n");
    bubbleSort();
    printArray();
    return 0;
}



int printArray(){

    for (int i = 0; i < arraysize; i++){
    
        printf("%d\n",array[i]);
    
    }
    
    return 0;

}

int bubbleSort(){


    for (int k = arraysize; k > 0; k--){

    
        for(int i = 0; i < k; i++){

            if (array[i] > array[i+1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }

        }
    }
    return 0;
}


