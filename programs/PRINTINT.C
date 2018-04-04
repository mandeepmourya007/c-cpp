#include<stdio.h>
#include<conio.h>
int main(){int x;
int printint();
clrscr();
printf("\t enter  number \t nand\n\t press enter to get sum\n") ;
x=printint();
printf("\n%d",x);
getch();
return 0;

}
int printint(){
int n=0,ch,sum=0;
while(1){

	ch=getch();
	if(ch>=48 && ch<=57)
	{printf("%c",ch);
	n=n*10+ch-48;
	}
	else if(ch==32){
	return sum;
	break;
		}
	if(ch==13){
	printf("\n");
	n=0;
	}
	sum+=n;

}
return 0;
}

