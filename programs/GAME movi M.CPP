#include<stdio.h>
#include<conio.h>
int main(){int x,y,key;
//clrscr();

char a[14][29]={ "___________________________",
		 " |                         |",
		 " |                         |",
		 " |                         |",
		 " |                         |",
		 " |                         |",
		 " |                         |",
		 " |          M              |",
		 " |                         |",
		 " |                         |",
		 " |                         |",
		 " |                         |",
		 " |                         |",
		 "____________________________" };


	   x=7,y=12;
		   printf("\t\tcontrols :\n");
	   printf("\t\tPRESS a,s,d,w TO MOVE character :\n ");
	   printf("\t\ta->LEFt\n\t\td->RIGHT\n\t\tw->UP\n\t\ts->DOWN\n\t\t0(zero)->QUIt\n");
	   for(int i=0;i<=13;i++)
	{  printf("\t\t%s\n",a[i]);

	};
 while(1){

  key=getch();
       if(key==100)
	       {  a[x][y]=' ';
		  ++y;
		  a[x][y]='M';
		  }
	else if(key==115)
		       {  a[x][y]=' ';
		  ++x;
		  a[x][y]='M';
		  }
else if(key==97)
		       {  a[x][y]=' ';
		 --y;
		  a[x][y]='M';
		  }
	else if(key==119)
		       {  a[x][y]=' ';
		  --x;
		  a[x][y]='M';
		  }
	else if(key==48){ break;   }
		//  clrscr();
	   printf("\t\tcontrols :\n");
	   printf("\t\tPRESS a,s,d,w TO MOVE character :\n ");
	   printf("\t\ta->LEFt\n\t\td->RIGHT\n\t\tw->UP\n\t\ts->DOWN\n\t\t0(zero)->QUIt\n");

	 for(int j=0;j<=13;j++)
	{  printf("\t\t%s\n",a[j]);
	      }   }

	  return 0;


	  }


