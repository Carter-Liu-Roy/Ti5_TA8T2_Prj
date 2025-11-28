/* generated configuration header file - do not edit */
#ifndef RENESASHW_H_
#define RENESASHW_H_
#include "string.h"
#include "rm_ethercat_ssc_port_api.h"
#include "rm_ethercat_ssc_port.h"

/**
 * BOOL: Should be adapted to the boolean type of the microcontroller */
#ifndef BOOL
 #define BOOL        uint8_t
#endif

/**
 * UINT8: Should be adapted to the unsigned8 type of the microcontroller  */
#ifndef UINT8
 #define UINT8       uint8_t
#endif

/**
 * UINT16: Should be adapted to the unsigned16 type of the microcontroller  */
#ifndef UINT16
 #define UINT16      uint16_t
#endif

/**
 * UINT32: Should be adapted to the unsigned32 type of the microcontroller  */
#ifndef UINT32
 #define UINT32      uint32_t
#endif

/**
 * UINT64: Should be adapted to the unsigned64 type of the microcontroller  */
#ifndef UINT64
 #define UINT64      uint64_t
#endif

/**
 * USHORT: Should be adapted to the unsigned16 type of the microcontroller */
#ifndef USHORT
 #define USHORT      uint16_t
#endif

/**
 * INT8: Should be adapted to the integer8 type of the microcontroller */
#ifndef INT8
 #define INT8        int8_t
#endif

/**
 * INT16: Should be adapted to the integer16 type of the microcontroller  */
#ifndef INT16
 #define INT16       int16_t
#endif

/**
 * INT32: Should be adapted to the integer32 type of the microcontroller */
#ifndef INT32
 #define INT32       int32_t
#endif

/**
 * INT64: Should be adapted to the integer64 type of the microcontroller */
#ifndef INT64
 #define INT64       int64_t
#endif

/**
 * CHAR: Should be adapted to the character type of the microcontroller */
#ifndef CHAR
 #define CHAR        char
#endif

/**
 * UCHAR: Should be adapted to the unsigned character type of the microcontroller */
#ifndef UCHAR
 #define UCHAR       unsigned char
#endif

/**
 * MEM_ADDR: Type to access local memory addresses */
#ifndef MEM_ADDR
 #define MEM_ADDR    UINT8
#endif

/**
 * ESCMEM: Should be defined to select the memory type of the ESC memory (e.g. near, far or huge),
 * if the microcontroller does not support different memory types, ESCMEM shall be defined to nothing */
#ifndef ESCMEM
 #define ESCMEM
#endif

/*******************************************************************************
 * Macro definitions
 *******************************************************************************/
#define ESC_MEM_ADDR                  UINT8
#define ESC_MEM_SHIFT                 0

#define ESC_REG_ERROR_LED_OVERRIDE    (0x0139)
#define ESC_LED_OVERRIDE_OFF          (0x00)
#define ESC_LED_OFF                   (0x10)
#define ESC_LED_BLINKING              (0x1D)
#define ESC_LED_SINGLE_FLASH          (0x11)
#define ESC_LED_DOUBLE_FLASH          (0x12)
#define ESC_LED_FLICKERING            (0x1E)
#define ESC_LED_ON                    (0x1F)

#ifndef TIMER_INT_HEADER
 #define    TIMER_INT_HEADER
#endif

#define     ESC_RD             0x02    /* read access to ESC */
#define     ESC_WR             0x04    /* write access to ESC */

#define ECAT_TIMER_INC_P_MS    1000    // the timer unit 1ms

/*******************************************************************************
 * Exported global variables and functions (to be accessed by other files)
 *******************************************************************************/
extern ethercat_ssc_port_instance_ctrl_t g_ethercat_ssc_port0_ctrl;
extern const ethercat_ssc_port_cfg_t g_ethercat_ssc_port0_cfg;

void   ethercat_ssc_port_enable_interrupt(ethercat_ssc_port_ctrl_t const * p_ctrl);
void   ethercat_ssc_port_disable_interrupt(ethercat_ssc_port_ctrl_t const * p_ctrl);
void   ethercat_ssc_port_clear_timer(ethercat_ssc_port_ctrl_t * const p_ctrl);
uint16_t ethercat_ssc_port_get_timer(ethercat_ssc_port_ctrl_t * const p_ctrl);
void   ethercat_ssc_port_increment_timer(ethercat_ssc_port_ctrl_t * const p_ctrl);
void ethercat_ssc_port_run_led (uint8_t * run_led_address, uint8_t * err_led_address, uint8_t run_led_status, uint8_t err_led_status);

#define HW_Init()                                     RM_ETHERCAT_SSC_PORT_Open(&g_ethercat_ssc_port0_ctrl, &g_ethercat_ssc_port0_cfg);
#define HW_Release()                                  RM_ETHERCAT_SSC_PORT_Close(&g_ethercat_ssc_port0_ctrl);

#define DISABLE_ESC_INT()                             ethercat_ssc_port_disable_interrupt( \
        &g_ethercat_ssc_port0_ctrl);
#define ENABLE_ESC_INT()                              ethercat_ssc_port_enable_interrupt( \
        &g_ethercat_ssc_port0_ctrl);
#define HW_ClearTimer()                               ethercat_ssc_port_clear_timer(&g_ethercat_ssc_port0_ctrl);
#define HW_GetTimer()                                 ethercat_ssc_port_get_timer(&g_ethercat_ssc_port0_ctrl);
#define HW_IncTimer()                                 ethercat_ssc_port_increment_timer( \
        &g_ethercat_ssc_port0_ctrl);
#define HW_SetLed(RunLed, ErrLed)                     if (ErrLed) {                                                       \
        ethercat_ssc_port_run_led(NULL,                                                                                   \
                                  &((( uint8_t *) g_ethercat_ssc_port0_ctrl.p_reg_esc)[ESC_REG_ERROR_LED_OVERRIDE]), \
                                  ESC_LED_OFF,                                                                            \
                                  ESC_LED_ON);                                                                            \
}                                                                                                                         \
    else {                                                                                                                \
        ethercat_ssc_port_run_led(NULL,                                                                                   \
                                  &((( uint8_t *) g_ethercat_ssc_port0_ctrl.p_reg_esc)[ESC_REG_ERROR_LED_OVERRIDE]), \
                                  ESC_LED_ON,                                                                             \
                                  ESC_LED_OFF);                                                                           \
    }

#define     HW_GetALEventRegister()                   (((( UINT16 ESCMEM *) g_ethercat_ssc_port0_ctrl. \
                                                         p_reg_esc)[((ESC_AL_EVENT_OFFSET) >>                         \
                                                                     1)                                               \
                                                        ]))
#define     HW_GetALEventRegister_Isr    HW_GetALEventRegister

#define     HW_EscRead(pData, Address, Len)           ESCMEMCPY((MEM_ADDR *) (pData),                                           \
                                                                &((ESC_MEM_ADDR ESCMEM *)                                       \
                                                                  g_ethercat_ssc_port0_ctrl.p_reg_esc)[((Address)        \
                                                                                                               >>               \
                                                                                                               ESC_MEM_SHIFT)], \
                                                                (Len))
#define     HW_EscReadIsr                HW_EscRead
#define     HW_EscReadDWord(DWordValue,                                                                                       \
                            Address)                  ((DWordValue) =                                                         \
                                                           (UINT32) (((volatile UINT32 *)                                     \
                                                                      g_ethercat_ssc_port0_ctrl.p_reg_esc)[(           \
                                                                                                                      Address \
                                                                                                                      >>      \
                                                                                                                      2)      \
                                                                     ]))
#define     HW_EscReadDWordIsr(DWordValue,                                                                                    \
                               Address)               ((DWordValue) =                                                         \
                                                           (UINT32) (((volatile UINT32 *)                                     \
                                                                      g_ethercat_ssc_port0_ctrl.p_reg_esc)[(           \
                                                                                                                      Address \
                                                                                                                      >>      \
                                                                                                                      2)      \
                                                                     ]))
#define     HW_EscReadWord(WordValue,                                                                                  \
                           Address)                   ((WordValue) =                                                   \
                                                           (((volatile UINT16 *)                                       \
                                                             g_ethercat_ssc_port0_ctrl.p_reg_esc)[((Address) >> \
                                                                                                          1)])) // the esc pointer is handled as a word pointer so the address must be divided by 2
#define     HW_EscReadWordIsr(WordValue, Address)     HW_EscReadWord(WordValue, Address)                        // the esc pointer is handled as a word pointer so the address must be divided by 2
#define     HW_EscReadByte(ByteValue,                                                                             \
                           Address)                   ((ByteValue) =                                              \
                                                           (((volatile UINT8 *) g_ethercat_ssc_port0_ctrl. \
                                                             p_reg_esc)[(Address)]))
#define     HW_EscReadByteIsr(ByteValue, Address)     HW_EscReadByte(ByteValue, Address)

/* ECATCHANGE_START(V5.01) HW2*/
#define     HW_EscReadMbxMem(pData, Address, Len)     ESCMBXMEMCPY((MEM_ADDR *) (pData),                                           \
                                                                   &((ESC_MEM_ADDR ESCMEM *)                                       \
                                                                     g_ethercat_ssc_port0_ctrl.p_reg_esc)[((                \
                                                                                                                      Address)     \
                                                                                                                  >>               \
                                                                                                                  ESC_MEM_SHIFT)], \
                                                                   (Len))

#define     HW_EscWrite(pData, Address,                                                                                         \
                        Len)                          ESCMEMCPY(&((ESC_MEM_ADDR ESCMEM *)                                       \
                                                                  g_ethercat_ssc_port0_ctrl.p_reg_esc)[((Address)        \
                                                                                                               >>               \
                                                                                                               ESC_MEM_SHIFT)], \
                                                                (MEM_ADDR *) (pData),                                           \
                                                                (Len))

/* ECATCHANGE_END(V5.01) HW2*/
#define     HW_EscWriteIsr    HW_EscWrite
#define     HW_EscWriteDWord(DWordValue,                                                                                 \
                             Address)                 ((((volatile UINT32 *) g_ethercat_ssc_port0_ctrl.p_reg_esc) \
                                                        [(Address >> 2)]) = (DWordValue))
#define     HW_EscWriteDWordIsr(DWordValue,                                                                              \
                                Address)              ((((volatile UINT32 *) g_ethercat_ssc_port0_ctrl.p_reg_esc) \
                                                        [(Address >> 2)]) = (DWordValue))
#define     HW_EscWriteWord(WordValue,                                                                                   \
                            Address)                  ((((volatile UINT16 *) g_ethercat_ssc_port0_ctrl.p_reg_esc) \
                                                        [((Address) >>                                                   \
                                                          1)                                                             \
                                                        ]) = (WordValue))                 // the esc pointer is handled as a word pointer so the address must be divided by 2
#define     HW_EscWriteWordIsr(WordValue, Address)    HW_EscWriteWord(WordValue, Address) // the esc pointer is handled as a word pointer so the address must be divided by 2
#define     HW_EscWriteByte(ByteValue,                                                                                               \
                            Address)                  ((((volatile UINT8 *) g_ethercat_ssc_port0_ctrl.p_reg_esc)[(            \
                                                                                                                            Address) \
                                                        ]) = (ByteValue))
#define     HW_EscWriteByteIsr(ByteValue, Address)    HW_EscWriteByte(ByteValue, Address)
#define     HW_EscWriteMbxMem(pData, Address,                                                                                      \
                              Len)                    ESCMBXMEMCPY(&((ESC_MEM_ADDR ESCMEM *)                                       \
                                                                     g_ethercat_ssc_port0_ctrl.p_reg_esc)[((                \
                                                                                                                      Address)     \
                                                                                                                  >>               \
                                                                                                                  ESC_MEM_SHIFT)], \
                                                                   (MEM_ADDR *) (pData),                                           \
                                                                   (Len))
#endif /* RENESASHW_H_ */
