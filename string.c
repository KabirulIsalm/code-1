// find length of a string 
// #include<stdio.h>
// int main(){
//     char str[100];
//     int i=0,length;
//     printf("enter the string :");
//     gets(str);
//     while(str[i]!='\0'){
//         i++;
//     }
//     length=i;
//     printf("the length of the string is : %d\n",length);
//     return 0;
// }

// convert lowercaase to uppercase 
// #include<stdio.h>
// int main(){
//     char str[100],upper_str[100];
//     int i=0;
//     printf("enter the string :");
//     gets(str);
//     while(str[i]!='\0'){
//         if(str[i]>='a' && str[i<='z']){
//             upper_str[i]=str[i]-32;
//         }else{
//             upper_str[i]=str[i];
//         }
//         i++;
//     }
//     upper_str[i]='\0';
//     printf("the converted string is : %s\n",upper_str);
//     return 0;
// }

// append a string to another string
#include<stdio.h>
int main(){
    char source_str[100],dest_str[100];
    int i=0,j=0,index;
    printf("enter the string :");
    gets(source_str);
    printf("enter the string :");
    gets(dest_str);
    while(dest_str[i]!='\0'){
        i++;
        
    }
    index=i;
    
    while(source_str[j]!='\0'){
        dest_str[index]=source_str[j];
        index++;
        j++;

    }
    dest_str[index]='\0';
    printf("the new string is : ");
    puts(dest_str);
    return 0;


}