#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv[]){

	int n = atoi(argv[1]);

	if(n>0 && n<11){
		for (int i = 1; i <= n; ++i)
		{
			printf("%d\n", i);
		}
	}
	if (n==0)
	{
		return 0;
	}
	for (int i = 0; argv[i]!='\0'; ++i)
	{
		if (argv[i]>= 'A' && argv[i]<= 'Z')
		{
			return 0;
		}
		else if (argv[i] >= 'a' && argv[i]<= 'z')
		{
			return 0;
		}
	}


	/*if(argc<2)
	{
		for(int i=1; i<=10;i++)
		{
			printf("%d\n", i);
			
			return 0;
		}
	}
	else
	{
		if(n>0 && n<11)
		{
			for (int i = 1; i < n; ++i)
			{
				printf("%d\n", i );

				return 0;
			}
		}
		if (n==NULL)
		{
			printf("probleme\n");
		}
	}


*/

}





/*
{
	int val;
	val = atoi(*argv[1]);

	if(argc==1)
	{
		for(int i = 0; i<=10; i++) {
            printf("%d\n", i);	
        }
	}

	if(val==0){
		printf("nul \n");
		return 0;
	}
	
	if (val>=1 && val<11)
	{
		for(int i=1; i<=val; i++){
			printf("%d\n",i );
			return 0;
		}
	}
	
	

	return 0;

}

 argv[1]= a;
	if(a==0){
		return 0;
	}
	if(a>30 && a<39){
		for(int i=1; i<a; i++){
			printf("%d\n",i );
			return 0;
		}
	}
*/
