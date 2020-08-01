#include <stdio.h>
int arr1[] = {7, 1, 5, 2, 3, 6};
int arr2[] = {3, 8, 6, 20, 7};
int m = sizeof(arr1) / sizeof(arr1[0]);
int n = sizeof(arr2) / sizeof(arr2[0]);
  
void quicksort(int number[],int first,int last)
{
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);
   }

}



void Union(int arr1[],int arr2[], int m,int n)
  {
    int j = 0;
    int k = 0;
    printf("\n Union of two array is : ");
      for (int i = 0; i < m + n; i++)
         {
            if (arr1[j] < arr2[k] && j < m)
                {
                   printf("%d ", arr1[j]);
                    j++;
                }
            else if (arr1[j] > arr2[k] && k < n)
                {
                    printf("%d ", arr2[k]);
                    k++;
                }
            else if (arr1[j] == arr2[k] && j < m && k < n)
                {
                  printf("%d ", arr1[j]);
                  j++;
                  k++;
              }
            if (j >= m&&k<n)
              {
                  printf("%d ", arr2[k]);
                  k++;
               }
            if (k >= n&&j<m)
              {
                printf("%d ", arr1[j]);
                j++;
              }
          }
    }


void intersection(int arr1[],int arr2[],int m,int n)
{
   int j = 0;
  int k = 0;
  printf("\n Intersection of two array is : ");
   for (int i = 0; i < m + n; i++)
         {
            if (arr1[j] < arr2[k] && j < m)
                {
                    j++;
                }
            else if (arr1[j] > arr2[k] && k < n)
                {
                    k++;
                }
            else if (arr1[j] == arr2[k] && j < m && k < n)
                {
                  printf("%d ", arr1[j]);
                  j++;
                  k++;
              }
          }
}

int main()
{
  quicksort(arr1,0,m-1);
  quicksort(arr2,0,n-1);
  Union(arr1,arr2,m,n);
  intersection(arr1,arr2,m,n);

}