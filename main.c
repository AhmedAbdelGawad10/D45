/*
#include<stdio.h>

int fibonacci(int n) {
    if(n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    printf("Fibonacci series\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
*/
/*
#include<stdio.h>

int main() {

    int n=0;

    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);

    int array[n];

    for (int i=0;i<n;i++)
    {
         if (i<2)
         {
             array[i]=i;
             printf("%d\t",array[i]);
         }
         else
         {
           array[i] = array[i-1] + array[i-2];
           printf("%d\t",array[i]);
         }
    }
    return 0;
}
*/
#include<stdio.h>
int func(int num);
int main() {

  int n=0,Z=0;

  printf("ENTER THE NUMBER : ");
  scanf("%d",&n);

  for (int i=0;i<n;i++)
  {
  Z = func(i);
  printf("%d\t",Z);
  }
    return 0;
}
int func(int num)
{
    if (num<=1)
        return num;
    else
        return func(num-1)+func(num-2);
}
