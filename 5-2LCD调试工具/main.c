#include <REGX52.H>
#include <LCD1602.h>
#include <Delay.h>
int nowTime=0;
void main ()
{
	LCD_Init ();
	LCD_ShowString(1,1,"Time:");
	while (1)
	{	
		LCD_ShowNum(1,6,nowTime,3);
		Delay(1000);
		nowTime++;
	}
}