#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sig;
int main() {
	srand((unsigned)time(NULL));
	int i, j, scount = 0, bcount = 0, * a = NULL, * b = NULL;
	for (i = 1; i <= 3; i++) {
		if (i == 1)
			a = (int*)calloc(i,sizeof(int));
		if (a == NULL) exit(1);
		a[i - 1] = rand() % 10;}
		for (j = 1; j <= 3; j++) {
			if (j== 1)
				b = (int*)calloc(j,sizeof(int));//<-error occured in this sentence.
			if (b == NULL) exit(1);}
		while(1){
		printf("Aspect the number! :  ");
		for (i = 0; i <= 2; i++)
			scanf_s("%1d", &b[i]);
		printf("Number you input : ");
		for (i = 0; i <= 2; i++)
			printf("%d", b[i]);
		printf("\n\n Result: ");

		for (i = 0; i <= 2; i++) {
			for (j = 0; j <= 2; j++) {
				if ((i == j) && (a[i] == b[j])) scount++;
				else if ((i != j) && (a[i] == b[j])) bcount++;
			}}
		if (scount < 3) {
			printf("%dstrike(s) %dball(s)\n\n", scount, bcount);
			sig = 0;
			scount = 0; bcount = 0;}
		else if (scount == 3) {
			printf("Congratulation! You figure out the exact number.");
			sig = 1;}
		if (sig == 1) break;}
		free(a);
		free(b);
	return 0;}
