#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include<limits>
using namespace std;

fstream& Go2Line(fstream& file, unsigned int num)
{
    file.seekg(ios::beg);
    for(unsigned int i=0; i < num - 1; ++i)
        file.ignore(numeric_limits<streamsize>::max(),'\n');

    return file;
}





int main()
{
    fstream file("/Users/Nimish/Desktop/481_wrf_alpha_mcpat_1_new.txt",ios_base::in);
    ofstream file2("/Users/Nimish/Desktop/pyn905.csv",ios_base::out);
    if (!file)
        cout << "Unable to open file /media/LOGGING/darsv1.csv\n";
    else 
    {
        //cout<<"Name"<<"              "<<"Area"<< "               " << "Gate Lickage" << endl;
        cout<<endl;
        
       Go2Line(file, 13);
       string line1;
        getline(file,line1);
       
        Go2Line(file, 14);
        string line2;
        getline(file,line2);
        Go2Line(file, 19);
        string line3;
        getline(file,line3);
        
        
        
        cout << line1<<line2<<" ," <<line3<< endl;
      
        
        
        
        cout<<endl;
        
        
        Go2Line(file, 22);
       string line22;
        getline(file,line22);
       
        Go2Line(file, 24);
        string line24;
        getline(file,line24);
        Go2Line(file, 27);
        string line27;
        getline(file,line27);
        cout << line22<<line24<<" ," <<line27<< endl;
        cout<<endl;
        
        
         Go2Line(file, 30);
       string line30;
        getline(file,line30);
       
        Go2Line(file, 32);
        string line32;
        getline(file,line32);
        Go2Line(file, 35);
        string line35;
        getline(file,line35);
        cout << line30<<line32<<" ," <<line35<< endl;
        cout<<endl;
        
        
         Go2Line(file, 38);
       string line38;
        getline(file,line38);
       
        Go2Line(file, 40);
        string line40;
        getline(file,line40);
        Go2Line(file, 43);
        string line43;
        getline(file,line43);
        cout << line38<<line40<<","<<line43<< endl;
        cout<<endl;
        
        
         Go2Line(file, 46);
       string line46;
        getline(file,line46);
       
        Go2Line(file, 48);
        string line48;
        getline(file,line48);
        Go2Line(file, 51);
        string line51;
        getline(file,line51);
        cout << line46<<line48<<","<<line51<< endl;
        cout<<endl;
        
        
        
         Go2Line(file, 63);
       string line63;
        getline(file,line63);
       
        Go2Line(file, 64);
        string line64;
        getline(file,line64);
        Go2Line(file, 67);
        string line67;
        getline(file,line67);
        cout << line63<<line64<<","<<line67<< endl;
        cout<<endl;
        
        
         Go2Line(file, 70);
       string line70;
        getline(file,line70);
       
        Go2Line(file, 71);
        string line71;
        getline(file,line71);
        Go2Line(file, 74);
        string line74;
        getline(file,line74);
        cout << line70<<line71<<","<<line74<< endl;
        cout<<endl;
        
        
         Go2Line(file,77);
       string line77;
        getline(file,line77);
       
        Go2Line(file, 78);
        string line78;
        getline(file,line78);
        Go2Line(file, 81);
        string line81;
        getline(file,line81);
        cout << line77<<line78<<","<<line81<< endl;
        cout<<endl;
        
        
         Go2Line(file, 84);
       string line84;
        getline(file,line84);
       
        Go2Line(file, 85);
        string line85;
        getline(file,line85);
        
        Go2Line(file, 88);
        string line88;
        getline(file,line88);
        
        cout << line84<<line85<<","<<line88<< endl;
        cout<<endl;
        
        
         Go2Line(file, 91);
       string line91;
        getline(file,line91);
       
        Go2Line(file, 92);
        string line92;
        getline(file,line92);
        
        Go2Line(file, 95);
        string line95;
        getline(file,line95);
        
        cout << line91<<line92<<","<<line95<< endl;
        cout<<endl;
        
        
        
         Go2Line(file, 98);
       string line98;
        getline(file,line98);
       
        Go2Line(file, 99);
        string line99;
        getline(file,line99);
        
        Go2Line(file, 102);
        string line102;
        getline(file,line102);
        
        cout << line98<<line99<<","<<line102<< endl;
        cout<<endl;
        
        
         Go2Line(file, 105);
       string line105;
        getline(file,line105);
       
        Go2Line(file, 106);
        string line106;
        getline(file,line106);
        
        Go2Line(file, 109);
        string line109;
        getline(file,line109);
        Go2Line(file, 112);
       string line112;
        getline(file,line112);
       
        Go2Line(file, 115);
        string line115;
        getline(file,line115);
        
        
        cout << line105<<line106<<","<<line109<<line112<<line115<< endl;
        cout<<endl;
        
        
        
        
         Go2Line(file, 118);
       string line118;
        getline(file,line118);
       
        Go2Line(file, 119);
        string line119;
        getline(file,line119);
        
        Go2Line(file, 122);
        string line122;
        getline(file,line122);
        
        cout << line118<<line119<<","<<line122<< endl;
        cout<<endl;
        
        
         Go2Line(file, 125);
       string line125;
        getline(file,line125);
       
        Go2Line(file, 126);
        string line126;
        getline(file,line126);
        
        Go2Line(file, 129);
        string line129;
        getline(file,line129);
        
        cout << line125<<line126<<","<<line129<< endl;
        cout<<endl;
         
    
        
        
        
        
    }

    return 0;
}
