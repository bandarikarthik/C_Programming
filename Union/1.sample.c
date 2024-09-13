#include <stdio.h>
#include<stdint.h>

union upacket{
    
uint32_t packetvalue;    //hold 32-bit value

struct {
 uint32_t  crc          :2;          //2  bit 
 uint32_t  status       :1;       //1  bit 
 uint32_t payload       :12;      //12 bit
 uint32_t  bat          :3;          //3  bit
 uint32_t  sensor       :3;       //3  bit
 uint32_t  longaddr     :8;     //8  bit
 uint32_t  shortaddr    :2;    //2  bit
 uint32_t  addrmode     :1;     //1  bit
}packetfields;  //variable created inside i mean nestd.

};

int main()
{

union upacket packet;

printf("Enter packet value: ");scanf("%X",&packet.packetvalue); //HEX format value

printf("packet.crc %#X\n",packet.packetfields.crc);
printf("packet.status %#X\n",packet.packetfields.status);
printf("packet.payload %#X\n",packet.packetfields.payload);

printf("packet.bat %#X\n",packet.packetfields.bat);
printf("packet.sensor %#X\n",packet.packetfields.sensor);


printf("packet.longaddr%#X\n",packet.packetfields.longaddr);

printf("packet.shortaddr%#X\n",packet.packetfields.shortaddr);
printf("packet.addrmode %#X\n",packet.packetfields.addrmode);

printf("size of structure %ld\n", sizeof(packet));
    return 0;
}
