#include<stdio.h>
int n;
scanf("%d",&n);
int arr[n];
for(int i=1; i<n; i++){
    scanf("%d",&arr[i]);
}
int k;
scanf("%d",&k);
for(int i=1; i<k; i++){
    for(int j=i+1; j<k; j++){
        int temp= arr[i];
        arr[i]=arr[j];
        arr[j]= temp;
    }
}
for(int i=1; i<n; i++){
    printf("%d \n", arr[i]);
}
