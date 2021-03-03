#include<stdio.h>

// Program to compute Fibonacci Series to Nth term
// Input : N (i.e. the N-th term)

//Function to recursively call Fibonacci term

int fibo(int N){
if(N==1 || N==2)
    return 1;
else
    return (fibo(N-1) + fibo(N-2));

}


int main(/*main function*/){ //driver code

int n;
for(int i=1; i<4; i++){ //take input for at east 4 times from the user
printf("\nEnter the number of terms you want for Fibonacci Series:=");
scanf("%d", &n);

printf("\nThe Fibonacci series for %d-terms is:=\n", n);
for(int i=1; i<=n; i++){
    printf("%d\t", fibo(i));
}
}
return 0;
}








