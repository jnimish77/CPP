#include<cstdlib>
#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
   

int main() 
{

float i, j=0;


   initwindow(400,300); 
   
   
    
   for (i=0;i<=900;i=i+10, j++)
   {
   
    moveto(100,30);
   lineto(1100,30);
  
  
   moveto(100,150);
   lineto(100,30);
    settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(150,140,"1");
   
   moveto(200,150);
   lineto(200,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(250,140,"2");
   
   moveto(300,150);
   lineto(300,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(350,140,"3");
   
   moveto(400,150);
   lineto(400,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(450,140,"4");
   
   
   
   moveto(500,150);
   lineto(500,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(550,140,"5");
   
   
   moveto(600,150);
   lineto(600,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(650,140,"6");
   


   moveto(700,150);
   lineto(700,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(750,140,"7");
   
   
   moveto(800,150);
   lineto(800,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(850,140,"8");
   
   
   moveto(900,150);
   lineto(900,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(950,140,"9");
   
   
   
   moveto(1000,150);
   lineto(1000,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(1050,140,"10");
   
   
    moveto(1100,150);
   lineto(1100,30);
   
   
   
      line(50+i,350,150+i,350);

		line(50+i,350,50+i,400);
		line(150+i,350,150+i,400);

		line(50+i,400,150+i,400);

      delay(50);

      if( i == 800)
         break;

	
	
	//if(i==800)
		//break;
    
	 
	

       
      // if(i==750)
      // rectangle(750,350-i,850-i,400);
       //rectangle(50,350-i,150,400-i);
       //break;
       
       
       cleardevice();
    
}
   
   for (i=0;i<=900;i=i+10, j++)
   {
   
    moveto(100,30);
   lineto(1100,30);
  
  
   moveto(100,150);
   lineto(100,30);
    settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(150,140,"1");
   
   moveto(200,150);
   lineto(200,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(250,140,"2");
   
   moveto(300,150);
   lineto(300,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(350,140,"3");
   
   moveto(400,150);
   lineto(400,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(450,140,"4");
   
  
   moveto(500,150);
   lineto(500,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(550,140,"5");
   
   moveto(600,150);
   lineto(600,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(650,140,"6");
   
   moveto(700,150);
   lineto(700,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(750,140,"7");
  
   moveto(800,150);
   lineto(800,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(850,140,"8");
   
   moveto(900,150);
   lineto(900,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(950,140,"9");
   
   
   moveto(1000,150);
   lineto(1000,30);
   settextstyle(2,HORIZ_DIR,6); //here 2 means font_style, 6 means size of font
   outtextxy(1050,140,"10");
   
    moveto(1100,150);
   lineto(1100,30);
  
	 
		line(930,350-i,980,350-i);
		line(980,350-i,980,250-i);
		line(980,250-i,930,250-i);
		line(930,250-i,930,350-i);
		
	delay(40);
	 if (i==210)
	  break;
	 
      // if(i==750)
      // rectangle(750,350-i,850-i,400);
       //rectangle(50,350-i,150,400-i);
       //break;
       
       cleardevice();
     
}
	
   while(!kbhit());     
   closegraph(); 
   return 0; 
}
