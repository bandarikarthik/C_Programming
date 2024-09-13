#include <stdio.h>
#include<stdint.h>

struct spacket{

 uint8_t  crc;          //2  bit 
 uint8_t  status;       //1  bit 
 uint16_t payload;      //12 bit
 uint8_t  bat;          //3  bit
 uint8_t  sensor;       //3  bit
 uint8_t  longaddr;     //8  bit
 uint8_t  shortaddr;    //2  bit
 uint8_t  addrmode;     //1  bit

};

int main()
{
uint32_t packetvalue;
struct spacket packet;

printf("Enter packet value: ");scanf("%X",&packetvalue); //HEX format value

packet.crc = (uint8_t)packetvalue & 0x3;   //last 2 bits
//packet.status = (uint8_t)packetvalue & 0x4; 
//your mistake isthat you can acess 2nd bit but how will you elobrate  

packet.status = (uint8_t)((packetvalue >> 2) & 0x1);
packet.payload = ( uint16_t)((packetvalue >> 3) & 0xFFF);
packet.bat =        (uint8_t)((packetvalue >> 15) & 0x7);
packet.sensor =     (uint8_t)((packetvalue >> 18) & 0x7);
packet.longaddr = (uint8_t) ((packetvalue >> 21) & 0xFF);
packet.shortaddr = (uint8_t) ((packetvalue >> 29) & 0x3);
packet.addrmode = (uint8_t) ((packetvalue >> 31) & 0x1);

printf("packet.crc %#X\n",packet.crc);   // # is for printing x in console
printf("packet.status %#X\n",packet.status);
printf("packet.payload %#X\n",packet.payload);

printf("packet.bat %#X\n",packet.bat);
printf("packet.sensor %#X\n",packet.sensor);


printf("packet.longaddr%#X\n",packet.longaddr);

printf("packet.shortaddr%#X\n",packet.shortaddr);
printf("packet.addrmode %#X\n",packet.addrmode);

printf("size of structure %ld\n", sizeof(struct spacket));
 
    return 0;
}



/*
//output:
Enter packet value: abcdefab
packet.crc 0X3
packet.status 0
packet.payload 0XDF5
packet.bat 0X3
packet.sensor 0X3
packet.longaddr0X5E
packet.shortaddr0X1
packet.addrmode 0X1
*/



  
