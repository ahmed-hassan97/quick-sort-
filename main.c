#include <stdio.h>
#include <stdlib.h>
int i,j,k;
void quick_sort(int *arr,int low,int high);
void swap(int i,int j,int *a);

int main()
{
    int arr[]={9,2,1,6,4,8,3,6,21,32,9,99,34,72};
   printf("array you enter is\n");
   for(i=0;i<14;i++){
    printf("%d  ",arr[i]);

   }
      printf("\n array after sorted is\n");

   quick_sort(arr,0,14);
    printf("\n array after sorted is\n");
   for(i=0;i<14;i++){
    printf("%d  ",arr[i]);

   }
    return 0;
}
void quick_sort(int *arr,int low,int high){
if(low>high){
 return;
}
int middle=low+(high-low)/2;
int pivot=arr[middle];
int i=low;
int j=high;
while(i<j){
 while((arr[i])<pivot){
   i++;

 }
  while((arr[j])>pivot){
    j--;
  }
  if(i<=j){
   swap(i,j,arr) ;
    i++;
    j--;
  }
}
if(low<i){
quick_sort(arr,low,j);
}
if(j<high){
quick_sort(arr,i,high);
}
}
void swap(int i,int j,int *a){
int temp=a[i];
a[i]=a[j];
a[j]=temp;

}





