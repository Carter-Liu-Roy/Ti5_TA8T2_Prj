/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_dmac.h"
#include "r_transfer_api.h"
#include "r_gpt.h"
#include "r_timer_api.h"
#include "r_sci_b_uart.h"
            #include "r_uart_api.h"
#include "r_adc_b.h"
                      #include "r_adc_api.h"
#include "r_ipc.h"
#include "r_gpt_three_phase.h"
            #include "r_three_phase_api.h"
FSP_HEADER
/* Transfer on DMAC Instance. */
extern const transfer_instance_t g_transfer3;

/** Access the DMAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dmac_instance_ctrl_t g_transfer3_ctrl;
extern const transfer_cfg_t g_transfer3_cfg;

#ifndef NULL
void NULL(transfer_callback_args_t * p_args);
#endif
/* Transfer on DMAC Instance. */
extern const transfer_instance_t g_transfer2;

/** Access the DMAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dmac_instance_ctrl_t g_transfer2_ctrl;
extern const transfer_cfg_t g_transfer2_cfg;

#ifndef NULL
void NULL(transfer_callback_args_t * p_args);
#endif
/** Timer on GPT Instance. */
extern const timer_instance_t g_timer3;

/** Access the GPT instance using these structures when calling API functions directly (::p_api is not used). */
extern gpt_instance_ctrl_t g_timer3_ctrl;
extern const timer_cfg_t g_timer3_cfg;

#ifndef g_timer3_50us_interrupt
void g_timer3_50us_interrupt(timer_callback_args_t * p_args);
#endif
/* Transfer on DMAC Instance. */
extern const transfer_instance_t g_transfer1;

/** Access the DMAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dmac_instance_ctrl_t g_transfer1_ctrl;
extern const transfer_cfg_t g_transfer1_cfg;

#ifndef g_dma_ch1_callback
void g_dma_ch1_callback(transfer_callback_args_t * p_args);
#endif
/* Transfer on DMAC Instance. */
extern const transfer_instance_t g_transfer0;

/** Access the DMAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dmac_instance_ctrl_t g_transfer0_ctrl;
extern const transfer_cfg_t g_transfer0_cfg;

#ifndef g_dma_ch0_end
void g_dma_ch0_end(transfer_callback_args_t * p_args);
#endif
/** UART on SCI Instance. */
            extern const uart_instance_t      g_encoder_rs485;

            /** Access the UART instance using these structures when calling API functions directly (::p_api is not used). */
            extern sci_b_uart_instance_ctrl_t     g_encoder_rs485_ctrl;
            extern const uart_cfg_t g_encoder_rs485_cfg;
            extern const sci_b_uart_extended_cfg_t g_encoder_rs485_cfg_extend;

            #ifndef user_uart_callback
            void user_uart_callback(uart_callback_args_t * p_args);
            #endif
/** ADC on ADC_B instance. */
                    extern const adc_instance_t g_adc0;

                    /** Access the ADC_B instance using these structures when calling API functions directly (::p_api is not used). */
                    extern adc_b_instance_ctrl_t g_adc0_ctrl;
                    extern const adc_cfg_t g_adc0_cfg;
                    extern const adc_b_scan_cfg_t g_adc0_scan_cfg;

                    #ifndef g_adc_scan_end
                    void g_adc_scan_end(adc_callback_args_t * p_args);
                    #endif
/** IPC Instance. */
            extern const ipc_instance_t g_ipc1;

            /** Access the IPC instance using these structures when calling API functions directly
            (::p_api is not used). */
            extern ipc_instance_ctrl_t g_ipc1_ctrl;
            extern const ipc_cfg_t g_ipc1_cfg;

#ifndef g_ipc1_callback
            void g_ipc1_callback(ipc_callback_args_t * p_args);
#endif
/** IPC Instance. */
            extern const ipc_instance_t g_ipc0;

            /** Access the IPC instance using these structures when calling API functions directly
            (::p_api is not used). */
            extern ipc_instance_ctrl_t g_ipc0_ctrl;
            extern const ipc_cfg_t g_ipc0_cfg;

#ifndef g_ipc0_callback
            void g_ipc0_callback(ipc_callback_args_t * p_args);
#endif
/** Timer on GPT Instance. */
extern const timer_instance_t g_timer2;

/** Access the GPT instance using these structures when calling API functions directly (::p_api is not used). */
extern gpt_instance_ctrl_t g_timer2_ctrl;
extern const timer_cfg_t g_timer2_cfg;

#ifndef NULL
void NULL(timer_callback_args_t * p_args);
#endif
/** Timer on GPT Instance. */
extern const timer_instance_t g_timer1;

/** Access the GPT instance using these structures when calling API functions directly (::p_api is not used). */
extern gpt_instance_ctrl_t g_timer1_ctrl;
extern const timer_cfg_t g_timer1_cfg;

#ifndef NULL
void NULL(timer_callback_args_t * p_args);
#endif
/** Timer on GPT Instance. */
extern const timer_instance_t g_timer0;

/** Access the GPT instance using these structures when calling API functions directly (::p_api is not used). */
extern gpt_instance_ctrl_t g_timer0_ctrl;
extern const timer_cfg_t g_timer0_cfg;

#ifndef g_gpt4_callback
void g_gpt4_callback(timer_callback_args_t * p_args);
#endif
/** GPT Three-Phase Instance. */
extern const three_phase_instance_t g_three_phase0;

/** Access the GPT Three-Phase instance using these structures when calling API functions directly (::p_api is not used). */
extern gpt_three_phase_instance_ctrl_t g_three_phase0_ctrl;
extern const three_phase_cfg_t g_three_phase0_cfg;
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
