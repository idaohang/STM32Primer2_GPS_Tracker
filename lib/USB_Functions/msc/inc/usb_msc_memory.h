/********************************************************************************/
/*!
	@file			usb_msc_memory.h
	@author         Nemui Trinomius (http://nemuisan.blog.bai.ne.jp)
    @version        1.00
    @date           2012.01.30
	@brief          Memory management layer.
					Based On STMicro's Sample Thanks!

    @section HISTORY
		2012.01.30	V1.00	Start Here.

    @section LICENSE
		BSD License. See Copyright.txt
*/
/********************************************************************************/
#ifndef __USB_MSC_MEMORY_H
#define __USB_MSC_MEMORY_H	0x0100

#ifdef __cplusplus
 extern "C" {
#endif

/* Include */
#include "stm32f10x.h"
#include "usb_regs.h"
#include "usb_mem.h"
#include "usb_conf.h"
#include "usb_lib.h"
#include "usb_msc_mass_mal.h"
#include "usb_msc_scsi.h"
#include "usb_msc_bot.h"
#include "hw_config.h"
 
/* Macros Plus */
#define TXFR_IDLE     0
#define TXFR_ONGOING  1

/* Externals */
void Write_Memory (uint8_t lun, uint32_t Memory_Offset, uint32_t Transfer_Length);
void Read_Memory (uint8_t lun, uint32_t Memory_Offset, uint32_t Transfer_Length);

#ifdef __cplusplus
}
#endif

#endif /* __USB_MSC_MEMORY_H */
