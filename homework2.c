#include <stdio.h>
#include <stdlib.h>


void printRow1(int* p1, int rowSize){
    for(int i = 0; i < rowSize; i++){
        printf("%d\t", *p1);
        p1+=1;
    }
}
void printCol1(int* p, int colSize){
    for(int i = 0; i < colSize; i++){
        printf("%d\n", *p);
        p+=1;
    }
}

void reverseRow1(int* p2){
    for(int i = 4; i > 0; i--){
        printf("%d\t", *p2);
        p2-=1;
    }
}

int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

void printMat(){
    int col = 3; 
    int row = 4;
    for(int i = 0; i < col; i ++){
        printf("\n");
            for(int j = 0; j < row; j++){
                printf("%d\t", arr[i][j]); 
            }}
}

void printCol(){
   printf("Which column would you like to print? \t");
   int choiceCol; 
   scanf("%d\n", &choiceCol);
   char buf = fgetc(stdin);
   if(choiceCol >= 1 && choiceCol <= 4){
      printCol1(&arr[0][choiceCol],3);
   }
   else{
       printf("An Error occured\n");
   }
}

void printRow(){
    printf("Which row would you like to print? \t");
    int choiceRow;
    scanf("%d\n",&choiceRow);
    char buf = fgetc(stdin);
    if(choiceRow >= 1 && choiceRow <= 3){
        printRow1(&arr[choiceRow-1][0],4);
    }
    else{
        printf("An Error occured\n");
    }
}

void reverseRow(){

    printf("which row to reverse?: \t");
    int reversedR = scanf("%d\n", &reversedR);
    printf("%d\n", reversedR);
    reverseRow1(&arr[0][reversedR]);
   
   }
 

void printMenu(){
    printf("\n");
    printf("You can choose one of these services: \n");
    printf("1. Print matrix tabular form. \n");
    printf("2. Print a specific row or a number of rows in sequence \n");
    printf("3. Print a specific column or a number of columns in sequence \n");
    printf("4. Get the elements of a specific row reversed \n"); 
    printf("5. find the number of prime numbers in a specific row \n");
    printf("6. Quit \n");
    printf("Please select one to try ");
    int answer; 
    scanf("%d\n", &answer);
    switch (answer)
    {
    case 1:
        printMat();
        printMenu();
        break;
    case 2:
        printCol();
        printMenu();
        break;

    case 3:
        printRow();
        printMenu();
        break;

    case 4: 
        reverseRow(); 
        break; 

    case 5: 
        /* code */ 
        break; 

    case 6: 
        printf("Bye!\n");
        break; 

    default:
        printf("please select carefully! \n");
        break;
    }
}

int main(){
    char buf; 
    printMat();
    printMenu();
   

   return 0; 
}


