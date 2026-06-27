 
 Q1:
#include <stdio.h>
int main(){
    int f;
    double celsius;
    printf("%10d %10d\n",f,celsius);
    for(f=0;f<=212;f++){
        celsius=5.0/9.0*(f-32);
      printf("%10d+%10.3f\n", f, celsius);
    }
return 0;
} 

 Q2 :
#include <stdio.h>
int main(){
    int a,b;
    printf("enter first integer:");
    scanf("%d",&a);
    printf("enter second integer:");
    scanf("%d",&b);
   if(a%b==0){
   printf("ais multiple of b");
   }
   else{
    printf("a isn't multiple of b ");
   }
   return 0;
}
  Q3 : 

#include <stdio.h>

int main() {
    int result;
    int pass = 0, fail = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Enter result: ");
        scanf("%d", &result);

        if (result == 1)
            pass++;
        else if (result == 2)
            fail++;
    }

    printf("\nPassed: %d\n", pass);
    printf("Failed: %d\n", fail);

    if (pass > 8)
        printf("Bonus to instructor!");

    return 0;
}
