#include<stdio.h>
#include<stdint.h>

struct voltag_pwm
{
	int voltage;
	int pwm;
};

uint16_t BinarySearch(struct voltag_pwm* P, uint16_t key, uint16_t size);

struct voltag_pwm vp[] =
{
		{681,	2730},    
		{693,	2730},	 
		{690,	2718},
		{680,	2678},
		{670,	2639},
		{660,	2600},
		{650,	2560},
		{640,	2521},
		{630,	2481},
		{620,	2442},
		{610,	2403},
		{600,	2363},  
		{590,	3320},
		{580,	3264},
		{570,	3207},
		{560,	3151},
		{550,	3095},
		{540,	3038},
		{530,	2982},
		{520,	2926},
		{510,	2870},
		{500,	2813},
		{490,	2757},
		{480,	2701},
		{470,	2645},
		{460,	2588},
		{450,	2532},  //precharge voltage
};

void main(void){
    
    uint8_t size = sizeof(vp)/sizeof(vp[0]);
   // printf("Size of array %d\n",size);
    uint16_t result = BinarySearch(vp,vp[26].voltage,size); //key is voltage to conpare  vp[26].voltage comes from CAN //reference
    printf("VoltageDuty %d\n",result);
    
}

uint16_t BinarySearch(struct voltag_pwm* P, uint16_t key, uint16_t size){
    
    
    uint8_t l=0,h=size,mid;

   while(l<=h) //run upto low < h
   {         
       mid= (l+h)/2; 
     if( ((P+mid)->voltage) == key)
         return (P+mid)->pwm;
     else if(((P+mid)->voltage) < key) h = mid-1;
     else l=mid+1;
 
    }
}
