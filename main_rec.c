#include<dos.h>
#include<stdio.h>
#include<process.h>
static int cnt;
main()
{

	if(cnt==0)
	{

		cnt++;
		main();
	}
	else if(cnt>5)
	{
		printf("\n\tExiting from program .... ");
		sleep(1);
		exit(0);
	}
	else
	{
		printf("\t%d",cnt);
		sleep(1);
		cnt++;
		main();

	}

}
