#include <stdio.h>
#include <malloc.h>

void main()
{
	int n, q, i, offset=0;
	long roll, **hash_table, *temp;

	scanf("%d", &n);
	hash_table = (long **)malloc(n*sizeof(long *));

	for(i=0;i<n;i++)
		hash_table[i]=0;

	for(i=0;i<n;i++)
	{
		temp = (long *)malloc(27*sizeof(long));
		scanf("%ld%s", &roll, temp);

		if(hash_table[roll%n]!=0)
		{
			while(hash_table[roll%n+offset]!=0)
				offset++;
			hash_table[roll%n+offset]=temp;
		}
		else
			hash_table[roll%n]=temp;

		hash_table[roll%n+offset][26]=roll;
		offset=0;
	}

	scanf("%d", &q);

	for(i=0;i<q;i++)
	{
		scanf("%ld", &roll);

		if(hash_table[roll%n][26]==roll)
			printf("%s\n", hash_table[roll%n]);
		else
		{
			while(hash_table[roll%n+offset][26]==roll)
				offset++;
			printf("%s\n", hash_table[roll%n+offset]);
		}
	}
}
