#include <string>
using namespace std;

string letters (int digit)
{
    switch(digit)
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






int keypad(int num, string output[]){
        
    if (num== 0 || num==1)
    {
        output[0]= "";
        return 1;
    }
    
    
    string temp[10000];
    int ans= keypad (num/10, temp);
    
        
    int digit= num%10;
    int counter;
    //string alphabets= "  abcdefghijklmnopqrstuvwxyz";
    string substring= letters(digit);
    
    if (digit==7 || digit==9)
       counter=4;
        
    
    else if (digit==1)
       counter=1;
    
    else
        counter=3;
    
    
    
    int i,j,k=0;
    for (i=0;i<ans;++i)
    {
        for (j=0;j<counter;++j)
        {
            output[k]= temp[i]+substring[j]; 
            k=k+1;
        }
    }
    
    return k;
    
    
    
}
