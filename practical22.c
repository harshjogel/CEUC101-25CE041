#include <stdio.h>
int main() {
    int rows = 5, cols = 8, i, j, r, c, n;
    char seats[5][8];
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            seats[i][j]='O';
    printf("Enter the number of reserved seats: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter row and seat number for reserved seat %d (e.g., 2 5): ",i+1);
        scanf("%d %d",&r,&c);
        if(r>=1 && r<=rows && c>=1 && c<=cols)
            seats[r-1][c-1]='X';
    }
    printf("\nSeating Chart:\n");
    for(i=0;i<rows;i++){
        printf("Row %d: ",i+1);
        for(j=0;j<cols;j++)
            printf("%c ",seats[i][j]);
        printf("\n");
    }
    return 0;
}
