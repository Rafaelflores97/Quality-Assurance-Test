#include <stdio.h>
#include <stdlib.h>
#include "gotoxy.h"
#define t1 "Multiple of 3 or 5"
using namespace std;
int main () {
	int n;
	char sn;

	while(1){
		system ("cls");
		gotoxy((80-strlen(t1))/2,1);printf(t1);

	while(2){
	
	gotoxy (5,3); printf ("Type a number from 1 to 100:\t ");
	scanf ("%d",&n);
	if(n>0&&n<101) break;
	gotoxy (5,3); printf("                                                    ");
	
}
	
	if((n%3==0)&&(n%5==0)){
		gotoxy (5,5); printf("Multiple of Both");
	}
	else if (n%3==0){
		gotoxy (5,5); printf("A");
	}
	else if (n%5==0){
		gotoxy (5,5); printf("B");
	}
	
	while (3){
		gotoxy(5,7); printf ("Another number (s/n)?:");
		scanf("%c",&sn); sn=tolower(sn);
        if (sn=='s'||sn=='n')break;
        gotoxy(5,7), printf("     ");
    }
    if(sn=='n')return 0;
	}

}
