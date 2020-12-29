
#include <iostream>
#include <string.h>

using namespace std;
void reverseStr(string& s1) 
	{ 
	    int n = s1.length(); 
	  
	    // Swap character starting from two 	   
	    // corners 
	    for (int i = 0; i < n / 2; i++) 
	        swap(s1[i], s1[n - i - 1]); 
	} 

int main()
{
    string s1 ,s2;
    getline(cin , s1);
    s2=s1;
         reverseStr(s1); 
        cout<< "on reversing the string result shown below"<<endl;
        cout << s1<<endl; 

    
    if (s1==s2)
    {cout<< "paladrome";}
    else{cout<< "not a paladrome";
        
    }
    
 

return 0;
}