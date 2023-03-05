#include<iostream.h>
#include<conio.h>
void main()
{
int row, col;
clrscr();
for(row=1;row<=5;row++)
{
 for(col=1;col<=5;col++)
 {
  if(row+col==4 || row-col==2 ||row==3)
  {
   cout<<" * ";
  }
  else
  {
   cout<<" ";
  }
 }
 cout<<endl;
}
getch();
}