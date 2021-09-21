#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n;
    scanf("%11d", &n);
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    int i;

    for(int i=2; i<n; i++)
    {
        arr[i]= arr[i-1]+ arr[i-2];
    }
      printf("%d\n", arr[n-1]);
    return 0;
}