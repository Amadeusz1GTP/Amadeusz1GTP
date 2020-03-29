#include <iostream>

using namespace std;


int t[121];
t[5]=5;

int main()
{


for(int i =0; i<121; i++){
    t[i]=0;
}
	
	int a;
	
    cout<<"Podaj liczbe"<<endl;
    cin>>a;
    
    if(119>=a>=1)
    {
    	t[a]=100;
    	t[a-1]=10;
    	t[a+1]=10;
	}
    else
    {
    	exit(0);
	}
    
    for(int i = 120; i >= 0; i--)
 {
    cout<<t[i]<<endl;
 }  
    return 0;
}
