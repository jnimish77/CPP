#include<iostream>
#include <stdlib.h>
#include <graphics.h>       //grapics library
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<cstdlib>
#include<fstream>
#include<string.h>
#include <windows.h>        //windows library for colors in the background



//accesssor declaration:
using namespace std;    
void MainMenu(void);
void revolver_general_info(void);
void set_revolver_type(void);
void set_reload(void);
void  set_numb_of_shots(void);
void model_details(void);

//object class
class Gun
{
	private:
		//datamembers and custom functions
		int revolver_type;
		int hit;
		int missed;
		int relaod;
		
		float hit_percent;
		float cylinder_radius;
		int numb_of_shots;
	
		
		double model;
		double range;	
		
	public:
		
		void set_revolver_type(int a) //to set the revolver type
			{
				revolver_type = a;
				if(a==1)
				
				cout<<"Type 1 Revolver :-   \n";  
				
				else
				
				cout<<"Type 2 Revolver :-    \n";
				
				
			}
			
		void model_details(double b)      //for model details
		
			{
				model = b;
				
				if(b==1)
				  {
				  
				  cout<<"1.Revolver Model name is ::->  'Apache revolver'  \n";
				  cout<<"Weight = 0.8(lbs)\n";
				  cout<<"length =203mm\n";
				  cout<<"caliber = 7mm\n";
				  cout<<"Double Action revolver\n"<<endl;
						
			}
				
			  if(b==2)
			{
				cout<<"2.Revolver Model name is ::->  'Colt Python'  \n";
				cout<<"Weight = 2.4(lbs)\n";
				cout<<"length =200mm\n";
				cout<<"Caliber = 8mm\n";
				cout<<"Double Action revolver\n"<<endl;
				
				if(b==3)
				{
				
				cout<<"3.Revolver Model name is ::->  'Colt Official Police' \n";
				cout<<"Weight = 1.9(lbs)\n";
				cout<<"length =153mm\n";
				cout<<"Six round cylinder";
				cout<<"Double Action revolver\n"<<endl;
			}
				
				if(b==4)
				{
				
				cout<<"4.Revolver Model name is ::->  'Frontier Bulldog'  \n";
				cout<<"Weight = 2.18(lbs)\n";
				cout<<"length =270mm\n";
				cout<<"Six round cylinder";
				cout<<"Single Action revolver\n"<<endl;
			}
				else
				{
				}
				cout<<"5.Revolver Model name is ::->  'Taurus Judge'  \n";
				cout<<"Weight = 1.80(lbs)\n";
				cout<<"length =190mm\n";
				cout<<"Seven round cylinder";
				cout<<"Single Action revolver\n"<<endl;
				}
			}
			
		void  set_numb_of_shots(int d, int e, int f )  //number of shots onformantion
			{
				
				hit = d;
				missed = e;
				numb_of_shots = f;
				
				cout<< "Number of Hit you made =   \n";
				cin>>d;
				
				cout<<"Number of Shots Missed/Miss Fired  = \n";
				cin>>e;
				
				f = d + e;
				cout<<"Total Number Of shots You Fired/ Total Rounds of Fire =  \n"<<f<<endl;
				
			}
			
			void set_hit_percent(float g, int d, int f)  // to set hit percent
			{
				 hit_percent = g;
				 hit = d;
				 numb_of_shots = f;
				 
				 g = d / f ;
				 cout<< "Hit Percent = "<<g<<endl;
				
			}
			
			void set_reload(int reload)     //set the reload the gun info
			{
				//reload = h;
				
				cout<<"want to relaod the revolver ? \n";
				cout<< "OK ! How many rounds/Bullets you want to reload ?\n"<<endl;
				
				cin>>reload;
				cout<<"You have successfully reloaded"<<reload<<"number of rounds/bullets\n"<<endl;
				
			}
		~Gun(){}      // default destructor.
	
};

	
	void set_revolver_type(void)   //settig the custom accessor of revolver type
			{
				
				system("cls");  // to clear the window 
				char x;         //declaring the character input
				//int revolver_type;
			//	int a;
			//	revolver_type = a;
				
				
				cout<<"\n   Which Option  ? (a/b)  =  ";
				//cout<<"\n\n\t\t";
				cin>>x;
				
				cout<<"\n\n\t\t";
				
				
				if(x=='a')
				
			     	{
				 
						cout<<"Type 1 Revolver :-   \n\n\t\t";
						cout<<"Single Action revolver is selected  \n\n\t\t"<<endl;
					}
					
					
				if(x=='b')
					{
				
					cout<<"Type 2 Revolver :-    \n\n\t\t";
					cout<<"Double Action revolver is selected  \n\n\t\t"<<endl;
				
				}
				
				cout<<"\n Would you like to go to main menu ? (y/n) ";
				cin>>x;
				
				if (x=='y')    
					{
						MainMenu();    //redirect to the main menu accessor 
					}
				if (x=='n')
					{ 
						cout<<endl;
	 
	 					exit(0); 
					}
			}
			
			
		void model_details(void)  //custom accessor for the model details option from the menu
		
			{ 
			
				system("cls");
				char x;
				cout<<"\n   Which Option  ? (a/b/c/d/e)  =  ";
				//cout<<"\n\n\t\t";
				cin>>x;
				
				cout<<"\n\n\t\t";
				//for different if condition
				if(x=='a')
				  {
				  
				  cout<<"1.Revolver Model name is ::->  'Apache revolver'  \n\n\t\t\t";
				  cout<<"Weight = 0.8(lbs)\n\t\t\t";
				  cout<<"length =203mm\n\t\t\t";
				  cout<<"caliber = 7mm\n\t\t\t";
				  cout<<"Double Action revolver\n\n\n\t\t"<<endl;
					}	
				  
				
				if(x=='b')
				{
				
				cout<<"2.Revolver Model name is ::->  'Colt Python'  \n\t\t\t";
				cout<<"Weight = 2.4(lbs)\n\t\t\t";
				cout<<"length =200mm\n\t\t\t";
				cout<<"Caliber = 8mm\n\t\t\t";
				cout<<"Double Action revolver\n\n\n\t\t"<<endl;
					}
				
				if(x=='c')
				{
				
				cout<<"3.Revolver Model name is ::->  'Colt Official Police' \n\t\t\t";
				cout<<"Weight = 1.9(lbs)\n\t\t\t";
				cout<<"length =153mm\n\t\t\t";
				cout<<"Six round cylinder\t\t\t";
				cout<<"Double Action revolver\n\n\t\t"<<endl;
				}
				
				if(x=='d')
				{
				
				cout<<"4.Revolver Model name is ::->  'Frontier Bulldog'  \n\t\t\t";
				cout<<"Weight = 2.18(lbs)\n\t\t\t";
				cout<<"length =270mm\n\t\t\t";
				cout<<"Six round cylinder\n\t\t\t";
				cout<<"Single Action revolver\n\n\n\t\t"<<endl;
			
				}
				
				if(x=='e')
				{
				
				cout<<"5.Revolver Model name is ::->  'Taurus Judge'  \n\t\t\t";
				cout<<"Weight = 1.80(lbs)\n\t\t\t";
				cout<<"length =190mm\n\t\t\t";
				cout<<"Seven round cylinder\n\t\t\t";
				cout<<"Single Action revolver\n\n\n\t\t"<<endl;
				}
			
				
				cout<<"\n Would you like to go to main menu ? (y/n) ";
				cin>>x;
				
				if (x=='y')
					{
						MainMenu();   //redirecting to the MainMenu
					}
				if (x=='n')
					{ 
						cout<<endl;
	 
	 					exit(0); 
					}
				}
				
				
		void  set_numb_of_shots(void)   //nummebr of shots selection accessor.
			{
				system("cls");
				
				//custom function
				char x;
				float d;
				float e;
				float f;
				float hit;
				float missed;
				float numb_of_shots;
				float g;
				float hit_percent;
				float missed_percent;
				
				hit = d;           // for  number of hit 
				missed = e;        //for   numebr of missed hit
				numb_of_shots = f; 
				
				cout<< "\n\n\t 1. Number of Hit you made =     ";
				cin>>d;
				
				cout<<"\n\n\t 2. Number of Shots Missed/Miss Fired  =   ";
				cin>>e;
				
				f = d + e;            //for total number of shots
				cout<<"\n\n   Total Number Of shots You Fired/ Total Rounds of Fire =    "<<f<<"\n\n\t"<<endl;
				
				f=f;
				 
				 hit_percent = (d / f)*100 ;     //to get the hit percentage
				 cout<< "\n\t\t Hit Percent =  "<<hit_percent<<"  %  \n\t"<<endl;
				 
				 
				 
				 missed_percent = (e / f)*100 ;    //to get misses percentage.
				 cout<< "\n\t\t Missed fire Percent =  "<<missed_percent<<"  % \n "<<endl;
				 cout<<"\n \n\t Would you like to go to main menu ? (y/n) \n ";
				cin>>x;
				
				if (x=='y')
					{
						MainMenu();         //redirecting to the MainMenu
					}
				if (x=='n')
					{ 
						cout<<endl;
	 
	 					exit(0); 
					}
				 
				
			}
			
	void set_reload(void)                 //Setting up the reload custom accessor
			{
				system("cls");
				char x;
				int reload;
				//reload = h;
				
				cout<<"\n\n\t want to relaod the revolver ? \n\t";
				cout<< "\n\n OK ! How many rounds/Bullets you want to reload ?\n\t\t";
				
				cin>>reload;   //asking the input for the number of reload
				cout<<" \n\n You have successfully reloaded--> "<<reload<<"  number of rounds/bullets \n\n\t\t";
				
				
				cout<<"\n\n\t  Would you like to go to main menu ? (y/n) ";
				cin>>x;
				
				if (x=='y')
					{
						MainMenu();    //redircting to the MainMenu
					}
				if (x=='n')
					{ 
						cout<<endl;
	 
	 					exit(0); 
					}
				
			}
			
	void revolver_general_info(void)   //Setting up Acessor fot revolver general information 
	{
		system("cls");
		
		char x;
		
 		 char buffer[25000];   //using array of 25000 characters
 
  		ifstream examplefile ("/Users/Nimish/Desktop/Revolver_info.txt");  //reading the text file
 
  		if (! examplefile.is_open())
  		{ 
     	cout << "Error opening file"; 
     	
     	exit (1); 
  		}

 		 while (! examplefile.eof() )
  		{
    	examplefile.getline (buffer,25000);
    		cout << buffer << endl;
  		}
  	
	cout<<"\n Would you like to go to main menu ? (y/n) ";
				cin>>x;
				
				if (x=='y')
					{
						MainMenu();  //redirect to the MainMenu
					}
				if (x=='n')
					{ 
						cout<<endl;
	 
	 					exit(0); 
					}
		
	}
	
	
	void draw_Graphics(void)   //custom accessor for the graphics
	{
	    system("cls");
	{
			float i, j=0;  //custom funnction declaration for the graphics

	

      system("pause");
   initwindow(400,300);  //graphics window size declaration
   
   
    
   for (i=0;i<=300;i=i+10, j++)
   {
     
    setcolor(WHITE);  //white color declaration
	moveto(300,150);
   lineto(600,150);
   moveto(300,160);
   lineto(600,160);
   
   moveto(300,220);
   lineto(600,220);
   moveto(300,210);
   lineto(600,210);
   
   moveto(300,240);
   lineto(300,130);
   
   moveto(280,230);
   lineto(280,140);
    moveto(200,140);
    lineto(280,140);
    moveto(200,230);
    lineto(280,230);
    
    moveto(200,230);
    lineto(200,140);
   
   
   moveto(185,130);
   lineto(300,130);
   
   moveto(90,240);       //triangle line;
   lineto(300,240);
   
   moveto(185,130); 	// straight line to triangle
   lineto(90,240);
   
   
   moveto(600,220);
   lineto(600,150);
   moveto(595,220);
   lineto(595,150);
   
   moveto(185,240);
   lineto(185,130);
   
   moveto(90,240);
   lineto(90,450);
   moveto(200,240);
   lineto(200,450);
   
   moveto(90,450);
   lineto(200,450);
   
   moveto(105,260);
   lineto(105,430);
   moveto(185,260);
   lineto(185,430);
   
   moveto(105,260);
   lineto(185,260);
   moveto(105,430);
   lineto(185,430);
   moveto(145,260);
   lineto(145,430);
   
   arc(250,240,180,0,50);
   arc(250,240,180,0,45);
   bar(250,240,240,275);
   
   delay(100);
   
   
   circle(300+i,185,20);
   circle(300+i,185,17);
   circle(300+i,185,14);
   

   
   if( i == 300)     //for loop will brewak if it reaches to the 300 at x-co-ordinatess
         break;
   

       
      cleardevice();   //clears the screeen and make the continuous image
    
	
}
     //another for loop for firing of the Gun
	 for (i=300;i<=1500;i=i+10, j++)
   {
   
	moveto(300,150);
   lineto(600,150);
   moveto(300,160);
   lineto(600,160);
   
   moveto(300,220);
   lineto(600,220);
   moveto(300,210);
   lineto(600,210);
   
   moveto(300,240);
   lineto(300,130);
   
   moveto(280,230);
   lineto(280,140);
    moveto(200,140);
    lineto(280,140);
    moveto(200,230);
    lineto(280,230);
    
    moveto(200,230);
    lineto(200,140);
   
   
   moveto(185,130);
   lineto(300,130);
   
   moveto(90,240);      //triangle line;
   lineto(300,240);
   
   moveto(185,130); 	// straight line to triangle
   lineto(90,240);
   
   
   moveto(600,220);
   lineto(600,150);
   moveto(595,220);
   lineto(595,150);
   
   moveto(185,240);
   lineto(185,130);
   
   moveto(90,240);
   lineto(90,450);
   moveto(200,240);
   lineto(200,450);
   
   moveto(90,450);
   lineto(200,450);
   
   moveto(105,260);
   lineto(105,430);
   moveto(185,260);
   lineto(185,430);
   
   moveto(105,260);
   lineto(185,260);
   moveto(105,430);
   lineto(185,430);
   moveto(145,260);
   lineto(145,430);
   
   arc(250,240,180,0,50);
   arc(250,240,180,0,45);
   bar(250,240,240,275);
   
 
   circle(300+i,185,20);
     
   circle(300+i,185,17);
   circle(300+i,185,14);

   
   if( i == 1500)      //it wiat will break if reaches to 1500 to x-axis 
         break;
   
   
	delay(10);       //providing some meday to image that controls the moving sped of the bullet
  
    cleardevice();    	
}
  	
	while(!kbhit());     
    closegraph();       //clear the screen every time the bullet moves
   

}
	char x;
   		cout<<"\n Would you like to go to main menu ? (y/n) ";
				cin>>x;
				
				if (x=='y')
					{
						MainMenu();   //redirects to the MainMenu
					}
				if (x=='n')
					{ 
						cout<<endl;
	 
	 					exit(0); 
					} 	
	}
	
 	// MainMenu setting up that shows up when enter inside the Program
	void MainMenu(void)
	{
		
		system("cls");
		char x;
		
		cout<<" \n\n\t * What whould you like to do?\n\n\n\t";

		cout<<"(r) - Revolver General Information\n\n\t"
			<<"(c) - Choose a Revolver Type\n\n\t"
			<<"(m) - Model Details\n\n\t"
			<<"(f) - Fire Shots\n\n\t"
			<<"(b) - Bullets Reload\n\n\t"
			<<"(g) - Graphics\n\n\t"
			<<"(e) - Exit\n\n\n\n\t";

	 	cin>>x;   //taking input interms of characters
	 	
	
	switch(x)    //switch cases
	{
	
	case 'r':
	{
               revolver_general_info();   //it go to 'revolver general info' accessor
                break;
				}
				
                case 'c':
                {
                         set_revolver_type();  //it will go to and take the values for this accesssor.
						 break; 
                                                 
                }
				case 'm':  
					{
						model_details();  //takes the model details
						break;
					}
				case 'f':
					{	
						set_numb_of_shots();  //redirects to the 'number of shots' accessor
						break;
					}
				case 'b':
					{
						set_reload();       // goes back and take the values from this accessor
						break;
					}
					case 'g':
					{
						draw_Graphics();  //goes to the custom Graphics accessor
						break;
					}
				case 'e':
 {
	 				 cout<<"\nExit Game: Are you sure? (y/n) ";
	  				
					  	cin>>x;
					 if (x == 'y')
						 {
					 cout<<endl;
	 
						 exit(0);
							 }
	 
					 if (x == 'n')
						 {
						 MainMenu();  //redirects to the MainMenu
						 }

							} 
							}
							}
	
    //main function	
	int main()
		
		{
			
			char x;
			//for that colors in backgrounds
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_INTENSITY| BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
			cout<<"                    ****Object ::- GUN (REVOLVER)****            \n\n\n";
			
			cout<<endl;
			cout<<endl;
			cout<<"                    -----WELCOME  TO  MY  PROJECT------          \n\n\n\n\n\n\n";
			
			cout<<"\t\t\t";	
			system("pause"); 		 //"press any key to continue" options
			cout<<endl<<endl<<endl;
		     
			 system("cls"); 		 //clears the screen
		  	cout<<"\n\n\n\n\n\n\t (y) - Let's have a look inside ?"
		  
           	<<endl<<endl<<endl
           	<<"\n\t (n) - Exit \n\n\n\t\t";
           
          	cin>>x;   				 //takes the characters as an input

           if (x == 'y')
		   {
			   MainMenu(); //redirects to the MainMenu
                
           }

			if (x == 'n')
			{
			  cout<<endl<<endl;
			  
			  }
           return 0;	
	
		}
	//**********************  end of the file********************************//
	
