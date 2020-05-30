
#include <stdio.h>

//Sorting starts here
int partition(int A[], int p, int r)
{
    int x = A[r];
    int i = (p - 1);
    int j;
    for (j = p; j < r; j++)
    {
    if (A[j] <= x)
    {
      i++;
      swap(&A[i], &A[j]);
    }
    }
  swap(&A[i + 1], &A[r]);
  return (i + 1);
}
void quickSort(int A[], int p, int r)
{
  if (p < r)
  {
    int q = partition(A, p, r);
    quickSort(A, p, q - 1);
    quickSort(A, q + 1, r);
  }
}
void display(int A[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("%d  ", A[i]);
    }
  printf("\n");
}
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

//Main Program Starts here..
int main() {
    int Z[10];
    int a[5] = {5, 3, 2, 6, 8};
    int b[5]  = {10 ,4 , 1, 7, 9};

    int i, k;
    int l = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    k = 0;

    for(i = 0; i < l; i++)
    {
      Z[k] = a[i];
      k++;
    }

    for(i = 0; i < m; i++)
    {
      Z[k] = b[i];
      k++;
    }
    int n = sizeof(Z) / sizeof(Z[0]);
    quickSort(Z, 0, n - 1);
    printf("Sorted Sequence is\n");
    display(Z, n);
}
