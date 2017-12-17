/* Spiral for Even Roll no CO15320*/

#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{ int i,x,y;
int z;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
x=70;
y=100;
/*
arc(100,100,0,180,100);
arc(110,100,180,360,90);
arc(100,100,0,180,80);
arc(110,100,180,360,70);
arc(100,100,0,180,60);  */
line(100,50,300,50);
line(300,50,300,100);
line(300,100,110,100);
line(110,100,110,60);
line(110,60,290,60);
line(290,60,290,90);
line(290,90,120,90);
z=1;
for(i=100;i>=10;)
{
if(z==1){
arc(x,y,0,180,i);
z=0;
}
else{
x=x+10;
arc(x,y,180,360,i);
z=1;
x=x-10;
}
i=i-10;
}

getch();
closegraph();
}