#include <string.h>
using namespace std;

int getCodes(string input, string output[10000]) {  
    if (input.size()==0)
    {
        output[0]="";
        return 1;
    }
    
    string result1[10000], result2[10000];
    int ans2=0;
    char let2;
    
    int digit= input[0]-'0';
    char let= 'a'+digit-1;
   // string letter(1,let);                  //converting char to string
    
    
    int ans1= getCodes (input.substr(1), result1);
    int counter=0;
    
        
    
    if (input[1]!='\0')
    {
        int digit2= input[1]-'0';
        int num= (digit*10)+digit2;
    
        if (num>=10 && num<=26)
        {
            let2= 'a'+num-1;
            //letter2(1,let2);
            ans2= getCodes (input.substr(2), result2);
        
        }   
         
    } 
    
    
    for (int i=0;i<ans1;++i,counter++)
         output[counter]= let+result1[i];
         
                        
            
    for (int i=0;i<ans2;++i, counter++)
        output[counter]= let2+result2[i];
        
    
    return counter;
    
    
}







