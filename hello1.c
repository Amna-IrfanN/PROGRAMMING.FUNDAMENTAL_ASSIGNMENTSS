#include <stdio.h>

void calculator(int num[3][3]) {
    int evensum=0, oddcount=0, middlerow=0;

    printf("Array:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", num[i][j]);
            if(num[i][j]%2==0) evensum += num[i][j];
            else oddcount++;
        }
        printf("\n");
    }

    for(int j=0;j<3;j++) middlerow += num[1][j];

    printf("Sum of even = %d\n", evensum);
    printf("Count of odd = %d\n", oddcount);
    printf("Middle row sum = %d\n", middlerow);
}

void reverse(int num[3][3]){
    printf("Array in reverse row order:\n");
    for(int i=2;i>=0;i--){
        for(int j=0;j<3;j++){
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int num1[3][3];

    printf("Enter 9 integers for 3x3 array:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &num1[i][j]);
        }
    }

    calculator(num1);
    reverse(num1);
    return 0;
}
