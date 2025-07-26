//usingfunction
// #include<stdio.h>
// void display(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d\n",arr[i]);
//     }
// }

// int indinsertion(int arr[],int size,int capacity,int index,int element){
//     if(size>=capacity){
//         return -1;
//     }
//    for(int i=size-1;i>=index;i--){
//     arr[i+1]=arr[i];
//     }
//     arr[index]=element;
//     return 1;

// }
// int main(){
//     int arr[100]={1,2,6,78};
//     int element=25,index=3,size=4;
//     display(arr,size);
//     indinsertion(arr,size,100,index,element);
//     size+=1;
//     display(arr,size);



//     return 0;
// }

//normal approach
// #include<stdio.h>
// int main(){
//     int n,i,arr[10],pos,number;
//     printf("enter the number of element in an array :");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         printf("\n arr[%d]= ",i);
//         scanf("%d",&arr[i]);
        
//     }
//     printf("enter the number of position at which the new number is added :");
//     scanf("%d",&pos);
//     printf("enter the number which is added");
//     scanf("%d",&number);
//     for(int i=n-1;i>=pos;i--){
//         arr[i+1]=arr[i];
        
//     }
//     arr[pos]=number;
//     n+=1;
//     printf("The new array is:\n");
//     for(int i=0;i<n;i++){
//         printf("\n arr[%d]= %d",i,arr[i]);
//     }
//     return 0;
// }

//  #include<stdio.h>
// int main(){
//     int n,arr[10],num;
//     printf("enter the elements in the arrar :");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         printf("\n arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the inserted number :");
//     scanf("%d",&num);
//     for(int i=0;i<n;i++){
//         if(arr[i]>num){
//             for(int j=n-1;j>=i;j--){
//                 arr[j+1]=arr[j];
//             }
//             arr[i]=num;
//             break;
//         }
//     }
//     n+=1;
//     printf("the new inserted array is :\n");
//     for(int i=0;i<n;i++){
//         printf("\n arr[%d] = %d",i,arr[i]);

//     }
//     return 0;
// }

//array deletion
// #include<stdio.h>
// int main(){
//     int n,arr[10],pos;
//     printf("enter the number of element of the array :");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         printf("\n arr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the position:");
//     scanf("%d",&pos);
//     for(int i=pos;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     n--;
//     printf("the new array is :");
//     for(int i=0;i<n;i++){
//         printf("\n arr[%d] = %d ",i,arr[i]);
//     }
//     return 0;
// }
    


//array modification
// #include<stdio.h>
// int main(){
//     int n,arr[10],pos,num;
//     printf("enter the number of element in an array :");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         printf("\n arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
    
//     printf("enter the number of position : ");
//     scanf("%d",&pos);
//     printf("enter the number which we can change :");
//     scanf("%d",&num);
//     for(int i=pos;i<pos+1;i++){
//         arr[i]=num;

//     }
//     printf("the new array is :");
//     for(int i=0;i<n;i++){
//         printf("\n arr[%d] = %d ",i,arr[i]);
//     }
//     return 0;
// }

//array creation
// #include<stdio.h>
// int main(){
//     int  n,arr[10];
//     printf("enter the number of element of an array :");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         printf("\n arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("the array is :");
//     for(int i=0;i<n;i++){
//     printf("\t %d",arr[i]);
//     }
// }

//merge two array
// #include<stdio.h>
// int main(){
//     int arr1[10],arr2[10],arr3[20];
//     int n1,n2,m,index=0,temp;
//     printf("enter the number of element in an array1 :");
//     scanf("%d",&n1);
//     for(int i=0;i<n1;i++){
//         printf("\n arr1[%d] = ",i);
//         scanf("%d",&arr1[i]);
//     }
//     printf("enter the number of element in an array2 :");
//     scanf("%d",&n2);
//     for(int i=0;i<n2;i++){
//         printf("\n arr2[%d] = ",i);
//         scanf("%d",&arr2[i]);
//     }
//     m=n1+n2;
//     for(int i=0;i<n1;i++){
//         arr3[index]=arr1[i];
//         index ++;
//     }
//     for(int i=0;i<n2;i++){
//         arr3[index]=arr2[i];
//         index++;
//     }
//     printf("the merged array is :");
//     for(int i=0;i<m;i++){
//         for(int j=i+1;j<m;j++){
//             if(arr3[i]>arr3[j]){
//                 temp=arr3[i];
//                 arr3[i]=arr3[j];
//                 arr3[j]=temp;
//             }
        

//         }
        

//     }
//     for(int i=0;i<m;i++){
//         printf("\n arr3[%d] = %d ",i,arr3[i]);
//     }


//     return 0;


// }

//2D array
// #include<stdio.h>
// int main(){
//     int arr[2][2]={12,34,56,32};
//     int i,j;
//     for(i=0;i<2;i++){
//         printf("\n");
//         for(j=0;j<2;j++){
//             printf("\t %d",arr[i][j]);
//         }
//     }
//     return 0;
// }

//pascal  triangle.
#include<stdio.h>
int main(){
    int arr[7][7]={0};
    int row =2,i,j;
    arr[0][0]=arr[1][0]=arr[1][1]=1;
    while (row<7)
    {
        arr[row][0]=1;
        for(int col=1;col<7;col++){

            arr[row][col]=arr[row-1][col-1]+arr[row-1][col];
        }
        row++;
    }
    for(i=0;i<7;i++){
        printf("\n");
        for(j=0;j<=i;j++){
            printf("\t %d",arr[i][j]);
        }
    }
    return 0;
}