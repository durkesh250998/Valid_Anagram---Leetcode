#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int sort(char s[],int);
int printArray(char arr[],int sizes);
int compare(char s[],char t[],int sizes);
int main(){ 
       char s[10],t[10];
       scanf("%s %s",s,t);
       int sizes=strlen(s);
       int sizet=strlen(t);
       if(sizes==sizet){
                   sort(s,sizes);
                   sort(t,sizet);
                   printArray(s,sizes);
                   printArray(t,sizet);
                   printf("%d",compare(s,t,sizes));
       }
       else{
            printf("%d",0);
       }
 }
 int sort(char s[],int sizes){
                   int i,j;
                   for(i=0;i<sizes;i++){
                               for(j=0;j<sizes;j++){
                                              if(s[i]>s[j]){
                                                           int temp;
                                                           temp=s[i];
                                                           s[i]=s[j];
                                                           s[j]=temp;
                                                           printf("%c\n",s[i]);
                                                           printf("%c\n",s[j]);
                                              }
                               }
                   }
 }
 int printArray(char arr[],int sizes){
                   int i;
                   for(i=0;i<sizes;i++){
                               printf("%c\n",arr[i]);
                       }
 }
int compare(char s[],char t[],int sizes){
                             int i,j,z=0,count=0;
                             while(z<sizes){
                                      if(s[z]==t[z]){
                                                    count+=1;
                                                    z++;}
                                      else{
                                               return 0;
                                               exit(1);
                                       }
                             }
                             if(count==sizes){
                                              return 1;
                             }
 
 }
