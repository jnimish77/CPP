#include <iostream>
using namespace std;

class CQuadrilateral {
  protected:
    int width1,length1,width2,length2,height ;
    int angle1,angle2,angle3,angle4;
  public:
    void set_values (int a, int b,int c,int d,int e)
      { width1=a;length1=b;width2=c;length2=d ;height=e;}
      void get_values(int p,int q,int r,int s)
      {angle1=p;angle2=q;angle3=r;angle4=s;
      }
  };

class CRectangle: public CQuadrilateral {
  public:
    int area ()
      { return (width1 * length1); }
    int perimeter()
    {return (2*(length1+width1));
    }
    int a1()
    {return (angle1);
    }
    int a2()
    {return (angle2);
    }
    int a3()
    {return (angle3);
    }
    int a4()
    {return (angle4);
    }
  };

class CSqure: public CQuadrilateral {
  public:
    int area ()
      { return (width1*length1); }
       int perimeter()
    {return (4*width1);
    }
     int a1()
    {return (angle1);
    }
    int a2()
    {return (angle2);
    }
    int a3()
    {return (angle3);
    }
    int a4()
    {return (angle4);
    }
  };
  class Ctrapezoid: public CQuadrilateral {
  	
  public:
    int area ()
    
      { return ((length1+length2)*height/2); }
       int perimeter()
    {return (length1+width1+length2+width2);
    }
     int a1()
    {return (angle1);
    }
    int a2()
    {return (angle2);
    }
    int a3()
    {return (angle3);
    }
    int a4()
    {return (angle4);
    }
  };
  class Cparallelogram: public CQuadrilateral {
  public:
    int area ()
    
      { return (length1*height); }
       int perimeter()
    {return (2*(length1+width1));
    }
     int a1()
    {return (angle1);
    }
    int a2()
    {return (angle2);
    }
    int a3()
    {return (angle3);
    }
    int a4()
    {return (angle4);
    }
  };

int main () {
  CRectangle rect;
  CSqure squ;
  Ctrapezoid trap;
  Cparallelogram parr;
  CQuadrilateral * qqua1 = &rect;
    CQuadrilateral * qqua2 = &squ;
    CQuadrilateral * qqua3 = &trap;
    CQuadrilateral * qqua4 = &parr;
  
  (*qqua1).set_values (4,5,4,5,4);
    (*qqua2).set_values (4,4,4,4,4);
   (*qqua3).set_values (22,22,28,47,21);
    (*qqua4).set_values (4,6,4,6,5);
     (*qqua1).get_values (90,90,90,90);
    (*qqua2).get_values (90,90,90,90);
   (*qqua3).get_values (60,60,120,120);
    (*qqua4).get_values (120,60,120,60);
  cout<<"Rectangle"<<endl;
  cout <<"Area="<<rect.area() << endl;
   cout <<"Perimeter="<< rect.perimeter() << endl;
   cout<<"four angles"<<endl;
   cout<<rect.a1()<<endl;
   cout<<rect.a2()<<endl;
   cout<<rect.a3()<<endl;
   cout<<rect.a4()<<endl;
   cout<<"opposite sides are same & all angles are 90"<<endl;
   cout<<endl;
   cout<<"Squre"<<endl;
  cout <<"Area="<< squ.area() << endl;
   cout << "Perimeter="<<squ.perimeter() << endl;
   cout<<"four angles"<<endl;
   cout<<squ.a1()<<endl;
   cout<<squ.a2()<<endl;
   cout<<squ.a3()<<endl;
   cout<<squ.a4()<<endl;
   cout<<"All sides are same & all angles are 90"<<endl;
   cout<<endl;
  cout<<"Trapezoid"<<endl;
  cout << "Area="<<trap.area() << endl;
   cout << "Perimeter="<<trap.perimeter() << endl;
   cout<<"four angles"<<endl;
   cout<<trap.a1()<<endl;
   cout<<trap.a2()<<endl;
   cout<<trap.a3()<<endl;
   cout<<trap.a4()<<endl;
   cout<<"Two sides are parellal and total of all angles are 360"<<endl;
   cout<<endl;
  cout<<endl<<"Parallelogram"<<endl;
  cout <<"Area=" <<parr.area() << endl;
  cout << "Perimeter="<<parr.perimeter() << endl;
  cout<<"four angles"<<endl;
  cout<<parr.a1()<<endl;
   cout<<parr.a2()<<endl;
   cout<<parr.a3()<<endl;
   cout<<parr.a4()<<endl;
   cout<<"opposite sides are parellal and opposite angles are same"<<endl;
 
 
  
  
  
  
  return 0;
}
