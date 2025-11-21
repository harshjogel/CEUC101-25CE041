#include<stdio.h>
int main(){

    int n=0;
    printf("enter the size of array : ");
    scanf("%d", &n);

    int a[n];
    int z=0, p=0, neg=0, e=0, o=0;

    printf("enter %d numbers :\n", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++){
        if(a[i]>0){
            p++;
        }
        else if(a[i]<0){
            neg++;
        }
        if(a[i]==0){
            z++;
        }

        if(a[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }

    printf("\n total no. of zeros : %d", z);
    printf("\n total no. of positives : %d", p);
    printf("\n total no. of negatives : %d", neg);
    printf("\n total no. of evens : %d", e);
    printf("\n total no. of odds : %d\n", o);

    int a_p[p], a_n[neg], a_e[e], a_o[o];
    int wp=0, wn=0, we=0, wo=0;

    for(int i=0; i<n; i++){
        if(a[i]>0){
            a_p[wp]=a[i];
            wp++;
        }
        else if(a[i]<0){
            a_n[wn]=a[i];
            wn++;
        }
        if(a[i]%2==0){
            a_e[we]=a[i];
            we++;
        }
        else{
            a_o[wo]=a[i];
            wo++;
        }
    }

    printf("\npositive numbers are:\n");
    for(int i=0; i<p; i++){
        printf("%d ", a_p[i]);
    }

    printf("\n\nnegative numbers are:\n");
    for(int i=0; i<neg; i++){
        printf("%d ", a_n[i]);
    }

    printf("\n\neven numbers are:\n");
    for(int i=0; i<e; i++){
        printf("%d ", a_e[i]);
    }

    printf("\n\nodd numbers are:\n");
    for(int i=0; i<o; i++){
        printf("%d ", a_o[i]);
    }

    printf("\n\n");
    return 0;
}   