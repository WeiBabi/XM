#include <stdio.h>

int main()
{
	int i,j=0,k=1,a[48],T=1;
	int n = 50;
	//形成一个2-->n的数组
	for(i=2;i<=n;i++,j++)
	{
		a[j] = i;
		//printf("a[%d]=%d\n",j,i);
	}
	//从2开始进行质数删除。
	for(i=2,j=0;i<=a[j];i++)
	{
		for(j=0,T=0;j<=n-2;j++)
		{
			if(a[j]%i==0 && a[j]!=i)
			{
				a[j] = 0;
				//printf("a[%d]=0\n",j);			
			} 
			else
			{
				a[T] = a[j];
				printf("当前数组为：a[%d]=%d\n",T,a[T]);
				T++;
			}
		}
		j = T-1;
		n = j+2;
		//printf("当前n=%d\n",n);
		//printf("当前j=%d\n",j);
		//printf("当前i=%d\n",i);
	}
//	for(i=0;i<T;i++)
//	{		
//	 printf("当前数组为：a[%d]=%d\n",i,a[i]);
//	}
	getchar();
	return 0;

}

