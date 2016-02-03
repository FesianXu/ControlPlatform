#include "../../HARDWARE/E17_TTL500/E17_TTL500.h"
#include "../../SYSTEM/sys/sys.h"
#include "../../SYSTEM/delay/delay.h"
#include "../../SYSTEM/USART/USART.h"
#include "../../SOFTWARE/TEST_INC/TEST_INC.h"
#include "string.h"
#include "stdlib.h"
//飞机端，地址为0x2345
//地面站的地址,既是本机的为0x5678

#ifdef __COMMAND_MODE

u8 E17_SendMsg(u8 which,u8 value)
{
	switch(which)
	{
		case CMD_X_PARAM:printf3("%x%x%x%x%x%x%x%x%x%x%x%x%x",0xD0,0x09,0x23,0x45,0x22,0x58,0x22,0x3A,0x22,value,0x22,0x0D,0x0A);break;
		case CMD_Y_PARAM:printf3("%x%x%x%x%x%x%x%x%x%x%x%x%x",0xD0,0x09,0x23,0x45,0x22,0x59,0x22,0x3A,0x22,value,0x22,0x0D,0x0A);break;
		case CMD_S_PARAM:printf3("%x%x%x%x%x%x%x%x%x%x%x%x%x",0xD0,0x09,0x23,0x45,0x22,0x53,0x22,0x3A,0x22,value,0x22,0x0D,0x0A);break;
		case CMD_D_PARAM:printf3("%x%x%x%x%x%x%x%x%x%x%x%x%x",0xD0,0x09,0x23,0x45,0x22,0x44,0x22,0x3A,0x22,value,0x22,0x0D,0x0A);break;
		default:break;
	}
	return 1;
}//文档上说发送完之后变成接受状态，可以连续发送吗？

#endif

