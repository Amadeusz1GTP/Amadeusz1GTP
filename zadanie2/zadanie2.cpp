# Amadeusz1GTP
#include <iostream>


using namespace std;


struct gry {
    
int rok;
int ocena;
string wydawca;
string tytul;
string gatunek;

};

int main(){

    gry gra1;

    cout<<"Podaj tytul:"<<endl;
    cin>>gra1.tytul; 
    
    
    cout<<"Podaj ocene:"<<endl;
    cin>>gra1.ocena;
    
    
    cout<<"Podaj wydawce:"<<endl;
    cin>>gra1.wydawca;
    
    
    cout<<"Podaj gatunek:"<<endl;
    cin>>gra1.gatunek;
    
    
    cout<<"Podaj rok wydania:"<<endl;
    cin>>gra1.rok;
    
   
    
    


    gry gra2;

    cout<<"Podaj tytul:"<<endl;
    cin>>gra2.tytul;
    
    cout<<"Podaj ocene:"<<endl;
    cin>>gra2.ocena;
    
    
    cout<<"Podaj wydawce:"<<endl;
    cin>>gra2.wydawca;
    
    
    cout<<"Podaj gatunek:"<<endl;
    cin>>gra2.gatunek;
    
    
    cout<<"Podaj rok wydania:"<<endl;
    cin>>gra2.rok;
    
  
    
    
    
    cout<<"1.tytul:";
    cout<<gra1.tytul<<endl;
    
    cout<<"1.ocena:";
    cout<<gra1.ocena<<endl;
    
    cout<<"1.wydawca:";
    cout<<gra1.wydawca<<endl;
    
    cout<<"1.gatunek:";
    cout<<gra1.gatunek<<endl;
    
    cout<<"1.rok wydania:";
    cout<<gra1.rok<<endl;
    
    
    cout<<"2.tytul:";
    cout<<gra2.tytul<<endl;
    
    cout<<"2.ocena:";
    cout<<gra2.ocena<<endl;
    
    cout<<"2.wydawca:";
    cout<<gra2.wydawca<<endl;
    
    cout<<"2.gatunek:";
    cout<<gra2.gatunek<<endl;
    
    cout<<"2.rok wydania:";
    cout<<gra2.rok<<endl;
   


    return 0;
}
