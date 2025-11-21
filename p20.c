/*
#include<stdio.h>
#include<string.h>
int main(){

    int n=0 ,x=1;
    printf("enter the size of array : ");
    scanf("%d", &n);

    int a[n-1];

    for(int i=0; i<n-1; i++){
        printf("enter the %d(st/nd/rd) elements : ",i+1);
        scanf("%d",&a[i]);
        printf("\n");
    }

    printf("\narray created !\n");

    for(int i=0; i<n-1; i++){
        printf("%d", a[i]);
    }

    int index=-2;
    
    for(int j=0; j<n-1; j++){
        if(a[j]==x){
            x++;
            continue;        }
        else{
            index=j;
           printf("missing element found! \n The index value is %d", index);
           break;
        }
    }
    
return 0;
}
*/

#include<stdio.h>
int main(){

    int p=0;
    printf("enter the total no. of participants : ");
    scanf("%d", &p);

    int id[p];

    for(int i=0; i<p; i++){
        scanf("%d", &id[i]);              //creating array
    }

    for(int i=0; i<p; i++){
        for(int j=0; j<p; j++){
            int k=id[i];
            if(id[j]>id[i]){
                id[i]=id[j];
                id[j]=k;
            }
        }                                //sorting array
    }

    for(int i=0; i<p; i++){
        printf("%d", id[i]);             //printing sorted array
    }

    int n=id[0];
    printf("\n%d\n", n);
    int miss_count=0;

    for(int i=0 ; i<p; i++){
        if(id[i]==n){
            n++;
        }
        else{
            miss_count+=1;
            n+=2;
        }
    }

    printf("total missing id's : %d\n", miss_count);
    n=id[0];

    int miss_id[miss_count], j=0;

    for(int i=0; i<p; i++){
        if(id[i]==n){
            n++;                  //creating missing id
        }
        else{
            miss_id[j]=i;
            n+=2;
            j++;
        }
    }
    printf("missing id's index are as follows : \n");
    for(int i=0; i<miss_count; i++){
        printf("%d\n ", miss_id[i]);
    }
}