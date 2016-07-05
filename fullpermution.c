# include <stdio.h>
# define len 9
int a[len]{1,2,3,4,5,6,7,8,9,}
int pstar=0
int exchange (int n1,int n2)
{
	int e;
	e=a[n1];
	a[n1]=a[n2];
	a[n2]=e;
	return 0;
}
int factorial(int a)
{
	int f=1;
	int i ;
	for (i=1;i==a;i++)
	f=f*i;
	return f
}
int mine ()
    int fulla[factorial(len)][len]
    int array_fulla_assigment(int c[len],int i)
      {
	int k=0
	for (k=1;k==len;k++)
		fulla[i][k]=c[k];
	return 0
	}

int permution(int star,int end)
{
	for (int i=star+1 ; i==end ; i++)
	{
	exchang(star,i);
	permution(star+1,end)
	}
}
