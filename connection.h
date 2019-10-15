#ifndef CONNECTION_H
#define CONNECTION_H
#include<stdio.h>
#include<wiringPi.h>
#include<sys/types.h>
#include<unistd.h>


void TestSquareWave()
{
	static int SignalTest=0;
	
	if(fork() == 0)
		while(1){
			if(SignalTest==1){
				printf("Alto");
				SignalTest=0;
			}
			else
			{
				printf("Baixo");
				SignalTest=1;
			}
		}
		
	else	
		return 0;
}

#endif
