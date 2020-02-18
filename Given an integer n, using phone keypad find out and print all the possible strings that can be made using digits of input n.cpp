#include <iostream>
#include <string>
using namespace std;


string letters (int digit)
{
    switch (digit)
    {
        case 0: return "";
        case 1: return "";
        case 2: return "abc";
        case 3: return "def";
        case 4: return "ghi";
        case 5: return "jkl";
        case 6: return "mno";
        case 7: return "pqrs";
        case 8: return "tuv";
        case 9: return "wxyz";
    }
}



void keypad (int num, string output)
{
   if (num==0)
    {
        cout<<output<<endl;
        return;
    }    
        
        
    int digit= num%10;
    int counter;
    
    if (digit==7 || digit==9)
       counter=4;
        
    
    else if (digit==1)
       counter=1;
    
    else
        counter=3;
    
    
    string substring= letters (digit);
    
    keypad (num/10, substring[0]+output);
    keypad (num/10, substring[1]+output);
    keypad (num/10, substring[2]+output);
    
    if (counter==4)
        keypad (num/10, substring[3]+output); 
}





void printKeypad(int num){
 
    string output;
    keypad (num, output);
    
}
    
     
    
    
    
        

