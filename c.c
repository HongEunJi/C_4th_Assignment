#include <stdio.h>

int main()
{
	int a[10][10], transpose[10][10], r, c, i, j;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of matrix:\n");

    for(i = 1; i <= r; ++i)
        for(j = 1; j <= c; ++j) {
            printf("Enter element a%d%d: ", i, j);
            scanf("%d", &a[i][j]);
        }

	printf("\nEntered2 3 Matrix: \n");

	for(i = 1; i <= r; ++i)
		for(j = 1; j <= c; ++j) {
			printf("%d ", a[i][j]);
			
			if(j == c)
				 printf("\n\n");
		}

	for(i = 1; i <= c; ++i)
		for(j = 1; j <= r; ++j)
			transpose[i][j] = a[j][i];

	printf("\nTranspose of Matrix: \n");

	for(i = 1; i <= c; ++i)
		for(j = 1; j <= r; ++j) {
			printf("%d ", transpose[i][j]);

			if(j == r)
				printf("\n\n");
		}
	
	return 0;
}