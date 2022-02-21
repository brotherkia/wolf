#include <iostream>

using namespace std;

int main()
{
    unsigned int reg =0, c=0 , reg2 = 0 ,sum = 0;
    reg = 'A';
    char hex1[20] , hex2[20];
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
    
    
    reg2 = 0x30303030 | reg2 ;
    reg = reg | 0x37303030;
    sprintf(hex1, "%X", reg);
    sprintf(hex2,"%X", reg2);
    cout<<hex1<<"\n"<<hex2 <<"\n-----------\n";
    reg =  0x37303030 | reg ;
    // cout<<reg<<"\n"<<reg2;
    sprintf(hex1, "%X", reg);
    sprintf(hex2,"%X", reg2);
    cout<<hex1<<"\n"<<hex2;
    // return 0;
}
