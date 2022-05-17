/**************************************************************************************************************
 *  EZ 3in1 dsCard.ch write NOR/PSRAM 
 *  By Aladin from EZTeam
 **************************************************************************************************************/

#ifndef NDS_DSCARD_V2_INCLUDE
#define NDS_DSCARD_V2_INCLUDE

#include "nds.h"

	#ifdef __cplusplus
	extern "C" {
	#endif

#ifndef BYTE
typedef unsigned char BYTE;
#endif

#ifndef WORD
typedef unsigned short WORD;
#endif

#ifndef DWORD
typedef unsigned long DWORD;
#endif

#ifndef BOOL
typedef bool BOOL ;
#endif
// export interface




//---------------------------------------------------
//DS Basic Ops
		//Basic ARM7 irq
		void		Enable_Arm7DS(void);

		//Basic Arm9 irq
		void		Enable_Arm9DS(void);

		
		//NORFlash/PSRAM Functions
#define FlashBase		0x08000000
#define	_Ez5PsRAM 	0x08000000
		void		OpenNorWrite();
		void		CloseNorWrite();
		void      SetRompage(u16 page);
		void 		SetRampage(u16 page);
		void  	OpenRamWrite();
		void 		CloseRamWrite();
		void      SetSerialMode();
		uint32   ReadNorFlashID();
		void 		chip_reset();
		void 		Block_Erase(u32 blockAdd);
		void 		ReadNorFlash(u8* pBuf,u32 address,u16 len);
		void 		WriteNorFlash(u32 address,u8 *buffer,u32 size);
		void 		WriteSram(uint32 address, u8* data , uint32 size );
		void 		ReadSram(uint32 address, u8* data , uint32 size );
		void 		SetShake(u16 data);
	#ifdef __cplusplus
	}
	#endif
#endif
