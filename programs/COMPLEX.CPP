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



complex(){
r=0;i=0;}
complex(int a,int b){
r=a;
i=b;
}
};

int main()
{clrscr();
 complex c,c1,c2(1,2),c3(4,5);
c.setdata(2,3); // seting c r=2 i=3
c.getdata();   //                       output is  2+i3
c1.getdata();  //                  	outpit is  0+i0
c2.getdata(); //                        outpt is   1+2i
c3=c3.add(c2); // 		         	c3=5+i7
c3.getdata();                //         output is  5+i7
c3=c2+c3;
c3.getdata();
getch();
return 0;
}
