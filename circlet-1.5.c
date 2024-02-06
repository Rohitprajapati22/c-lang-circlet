#include<stdio.h>

main()
{

	int i,j,s;

	for(i = 1;i <= 7;i++){
		if(i==5){
			continue;
		}
		for(s = 6;s >=i ;s--){
			printf(" ");
    	}

		for(j = 1;j <= i;j++){
			printf("* ");
		}

		printf("\n");
	}

	for(i = 6;i >= 1;i--){
			if(i==5){
				continue;
			}
		for(s = i;s <=6 ;s++){
			printf(" ");
    	}

		for(j = 1;j <= i;j++){
			printf("* ");
		}

		printf("\n");
	}

}
