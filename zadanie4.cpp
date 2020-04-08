#include <iostream>
#include <fstream>    
using namespace std;
int a;
int liczba;
int main()
{
    
     
    ofstream a1; 
	ifstream a2;                     
    a1.open("a.txt");                      
    a2.open("");  
    
     while(!a2.eof())        
            {
            	a>>liczba;
            
            if (liczba%2 == 0 ) 
			cout << "parzysta"; 
  			else cout << "nieparzysta";
  			}
            
    a1.close();
   	a2.close();

    return 0;
}
