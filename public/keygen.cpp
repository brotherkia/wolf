#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    unsigned int reg =0, c=0 , reg2 = 0 ,sum = 0 , x=0 , y=0 , password[100];
    reg = 'A';
    char hex1[20] , hex2[20] , hex3[20];
    // string user = "A";
    // cout<<"Enter username: ";
    // cin>>user;
    // for(int i=0; i <= user.length();i++){
    //     c = user[i];
    //     sum = c*(user.length()-i);
    //     reg += sum;
    // }
    reg = reg ^ 0x13131313;
    reg = ~reg ;
    reg = reg ^ 0x1234ABCD;
    reg2 = reg; 
    reg = reg & 0x0F0F0F0F;
    reg2 = reg2 & 0xF0F0F0F0;
    reg2 = reg2 >> 4;
    
    sprintf(hex1, "%X", reg);
    sprintf(hex2,"%X", reg2);
    cout<<hex1<<"\n"<<hex2 <<"\n-----------\n";





    // x = (reg % 100) | 0x30;
    // cout<<std::hex<<x<<"||||||||||||";
    // sprintf(hex3 , "%X",x);
    // cout<<hex3<<"\n";
    
    
    
    
    
    
    
    
    for (int i=0 ; i<4 ; i++){
        x = reg % 100 ;
        // printf(hex3 ,"%X",x);
        y = reg % 100 ; 
        if (x < 0x9)
            x = x |0x30;
        else
            x += 0x37;
        if (y < 0x9 )
            y = y | 30 ;
        else
            y += 0x37;
        reg /= 100;
        reg2 /= 100;
        cout<<"---";
        cout<<"\n";
        password[i] = x;
        password[i+4]= y;
    }
    cout<<std::hex<<password[i]
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    
    // reg2 = 0x30303030 | reg2 ;
    // reg = reg | 0x37303030;
    // sprintf(hex1, "%X", reg);
    // sprintf(hex2,"%X", reg2);
    // cout<<hex1<<"\n"<<hex2 <<"\n-----------\n";
    // reg =  0x37303030 | reg ;
    // // cout<<reg<<"\n"<<reg2;
    // sprintf(hex1, "%X", reg);
    // sprintf(hex2,"%X", reg2);
    // cout<<hex1<<"\n"<<hex2;
    return 0;
}
