#include<iostream.h>
#include<conio.h>
class complex{
	 private:
		int r,i;
	 public:
	      void setdata(int a,int b)
	       { r=a;
		i=b;}
	      void getdata(){
		cout<<r<<"+i"<<i<<endl;
		}
	    complex add(complex c1)
	      {    complex t;
		t.r=r+c1.r;
		t.i=i+c1.i;
		return t;

	      }
	      complex operator+(complex c)
	      {
		 complex t;
		 t.r=r+ c.r;
		 t.i=i+c.i;
		 return t;
	      }
	      void operator<<(){

	      }


complex(){
r=0;i=0;}
complex(int a,int b){
r=a;
i=b;
}
};

int main()
{clrscr();
 complex c,c1;

getch();
return 0;
}
