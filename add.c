 #include <stdio.h>
//zum kompilieren folgen Sie dem Befehl: gcc add.c -o add
int main(void){
    int x,y;
    int sum;
    int rem;//remainder
float div;
    printf("Enter the first integer: ");
    scanf("%d", &x);
    printf("Enter the second integer: ");
    scanf("%d", &y);
    sum = x + y;//calculate sum of x and y
    div= (float)x / (float)y;//calculate division of x and y
    rem=x%y;//calculate remainder of x and y
    printf("The value of x+y: %d\n", sum);
    printf("The value of x/y: %f\n", div);
    printf("The value of x%%y: %d\n", rem);
    div= x / y;
    printf("The value of x/y: %f\n", div);
    return 0;
}
