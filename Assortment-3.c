#include<stdio.h>
int main(){
    int a[50],b[50],c[50],i,n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("\nEnter %d elements in first array :\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter %d elements  second array :\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        c[i]=a[i]+b[i];
    }
    printf("\nSum of these two array is :\n");
    for(i=0;i<n;i++){
        printf("%d ",c[i]);
    }
    return 0;
}


//#include <stdio.h>
//int main() {
//  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
//  printf("Enter the number of rows (between 1 and 100): ");
//  scanf("%d", &r);
//  printf("Enter the number of columns (between 1 and 100): ");
//  scanf("%d", &c);
//
//  printf("\nEnter elements of 1st matrix:\n");
//  for (i = 0; i < r; ++i)
//    for (j = 0; j < c; ++j) {
//      printf("Enter element a%d%d: ", i + 1, j + 1);
//      scanf("%d", &a[i][j]);
//    }
//
//  printf("Enter elements of 2nd matrix:\n");
//  for (i = 0; i < r; ++i)
//    for (j = 0; j < c; ++j) {
//      printf("Enter element b%d%d: ", i + 1, j + 1);
//      scanf("%d", &b[i][j]);
//    }
//
//  for (i = 0; i < r; ++i)
//    for (j = 0; j < c; ++j) {
//      sum[i][j] = a[i][j] + b[i][j];
//    }
//
//  printf("\nSum of two matrices: \n");
//  for (i = 0; i < r; ++i)
//    for (j = 0; j < c; ++j) {
//      printf("%d   ", sum[i][j]);
//      if (j == c - 1) {
//        printf("\n\n");
//      }
//    }
//
//  return 0;
//}
