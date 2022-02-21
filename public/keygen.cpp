#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    unsigned int reg =0, c=0 , reg2 = 0 ,sum = 0 , x=0 , y=0 , password[8];
    string user;
    cout<<"Enter username: ";
    cin>>user;
    for(int i=0; i <= user.length();i++){
        c = user[i];
        sum = c*(user.length()-i);
        reg += sum;
    }
    //-----------------------------------------------------
    reg = reg ^ 0x13131313;
    reg = ~reg ;
    reg = reg ^ 0x1234ABCD;
    reg2 = reg; 
    reg = reg & 0x0F0F0F0F;
    reg2 = reg2 & 0xF0F0F0F0;
    reg2 = reg2 >> 4;   
    //-----------------------------------------------------
    
    for (int i=0 ; i<4 ; i++){
        x = reg % 0x100 ;
        y = reg2 % 0x100 ; 
        if (x < 0x9)
            x = x |0x30;
        else
            x += 0x37;
        if (y < 0x9 )
            y = y | 0x30 ;
        else
            y += 0x37;
        reg /= 0x100;
        reg2 /= 0x100;
        password[i] = x;
        password[i+4]= y;
        // cout<<std::hex<<y<<"\n";
        // cout<<"\n--------\n"<<char(y);
    }
    //-------------------------------------------------------
    
    
    cout<<"Your password is : 12-";
    for(int i = 0 ; i<8 ; i++){
        cout<<char(password[i]);
        if(i==3)
            cout<<"-";
    }
    //-------------------------------------------------------
    return 0;
}
