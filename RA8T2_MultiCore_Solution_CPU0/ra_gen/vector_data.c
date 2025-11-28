/* generated vector source file - do not edit */
        #include "bsp_api.h"
        /* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
        #if VECTOR_DATA_IRQ_COUNT > 0
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_NUM_ENTRIES] BSP_PLACE_IN_SECTION(BSP_SECTION_APPLICATION_VECTORS) =
        {
                        [0] = gpt_counter_overflow_isr, /* GPT4 COUNTER OVERFLOW (Overflow) */
            [1] = gpt_capture_compare_a_isr, /* GPT4 CAPTURE COMPARE A (Capture/Compare match A) */
            [2] = gpt_capture_compare_b_isr, /* GPT4 CAPTURE COMPARE B (Capture/Compare match B) */
            [3] = ipc_isr, /* IPC IRQ0 (CPU Mutual Interrupt 0) */
            [4] = ipc_isr, /* IPC IRQ1 (CPU Mutual Interrupt 1) */
            [5] = adc_b_limclpi_isr, /* ADC LIMCLPI (Limiter clip interrupt with the limit table 0 to 7) */
            [6] = adc_b_err0_isr, /* ADC ERR0 (A/D converter unit 0 Error) */
            [7] = adc_b_err1_isr, /* ADC ERR1 (A/D converter unit 1 Error) */
            [8] = adc_b_resovf0_isr, /* ADC RESOVF0 (A/D conversion overflow on A/D converter unit 0) */
            [9] = adc_b_resovf1_isr, /* ADC RESOVF1 (A/D conversion overflow on A/D converter unit 1) */
            [10] = adc_b_calend0_isr, /* ADC CALEND0 (End of calibration of A/D converter unit 0) */
            [11] = adc_b_calend1_isr, /* ADC CALEND1 (End of calibration of A/D converter unit 1) */
            [12] = adc_b_adi0_isr, /* ADC ADI0 (End of A/D scanning operation(Gr.0)) */
            [13] = adc_b_adi1_isr, /* ADC ADI1 (End of A/D scanning operation(Gr.1)) */
            [14] = adc_b_adi2_isr, /* ADC ADI2 (End of A/D scanning operation(Gr.2)) */
            [15] = adc_b_adi3_isr, /* ADC ADI3 (End of A/D scanning operation(Gr.3)) */
            [16] = adc_b_adi4_isr, /* ADC ADI4 (End of A/D scanning operation(Gr.4)) */
            [17] = adc_b_fifoovf_isr, /* ADC FIFOOVF (FIFO data overflow) */
            [18] = adc_b_fiforeq0_isr, /* ADC FIFOREQ0 (FIFO data read request interrupt(Gr.0)) */
            [19] = adc_b_fiforeq1_isr, /* ADC FIFOREQ1 (FIFO data read request interrupt(Gr.1)) */
            [20] = adc_b_fiforeq2_isr, /* ADC FIFOREQ2 (FIFO data read request interrupt(Gr.2)) */
            [21] = adc_b_fiforeq3_isr, /* ADC FIFOREQ3 (FIFO data read request interrupt(Gr.3)) */
            [22] = adc_b_fiforeq4_isr, /* ADC FIFOREQ4 (FIFO data read request interrupt(Gr.4)) */
            [23] = sci_b_uart_rxi_isr, /* SCI2 RXI (Receive data full) */
            [24] = sci_b_uart_txi_isr, /* SCI2 TXI (Transmit data empty) */
            [25] = sci_b_uart_tei_isr, /* SCI2 TEI (Transmit end) */
            [26] = sci_b_uart_eri_isr, /* SCI2 ERI (Receive error) */
            [27] = dmac_int_isr, /* DMAC0 INT (DMAC0 transfer end) */
            [28] = dmac_int_isr, /* DMAC1 INT (DMAC1 transfer end) */
            [29] = gpt_capture_compare_a_isr, /* GPT0 CAPTURE COMPARE A (Capture/Compare match A) */
            [30] = gpt_capture_compare_b_isr, /* GPT0 CAPTURE COMPARE B (Capture/Compare match B) */
        };
        #if BSP_FEATURE_ICU_HAS_IELSR
        const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_NUM_ENTRIES] =
        {
            [0] = BSP_PRV_VECT_ENUM(EVENT_GPT4_COUNTER_OVERFLOW,GROUP0), /* GPT4 COUNTER OVERFLOW (Overflow) */
            [1] = BSP_PRV_VECT_ENUM(EVENT_GPT4_CAPTURE_COMPARE_A,GROUP1), /* GPT4 CAPTURE COMPARE A (Capture/Compare match A) */
            [2] = BSP_PRV_VECT_ENUM(EVENT_GPT4_CAPTURE_COMPARE_B,GROUP2), /* GPT4 CAPTURE COMPARE B (Capture/Compare match B) */
            [3] = BSP_PRV_VECT_ENUM(EVENT_IPC_IRQ0,GROUP3), /* IPC IRQ0 (CPU Mutual Interrupt 0) */
            [4] = BSP_PRV_VECT_ENUM(EVENT_IPC_IRQ1,GROUP4), /* IPC IRQ1 (CPU Mutual Interrupt 1) */
            [5] = BSP_PRV_VECT_ENUM(EVENT_ADC_LIMCLPI,GROUP5), /* ADC LIMCLPI (Limiter clip interrupt with the limit table 0 to 7) */
            [6] = BSP_PRV_VECT_ENUM(EVENT_ADC_ERR0,GROUP6), /* ADC ERR0 (A/D converter unit 0 Error) */
            [7] = BSP_PRV_VECT_ENUM(EVENT_ADC_ERR1,GROUP7), /* ADC ERR1 (A/D converter unit 1 Error) */
            [8] = BSP_PRV_VECT_ENUM(EVENT_ADC_RESOVF0,GROUP0), /* ADC RESOVF0 (A/D conversion overflow on A/D converter unit 0) */
            [9] = BSP_PRV_VECT_ENUM(EVENT_ADC_RESOVF1,GROUP1), /* ADC RESOVF1 (A/D conversion overflow on A/D converter unit 1) */
            [10] = BSP_PRV_VECT_ENUM(EVENT_ADC_CALEND0,GROUP2), /* ADC CALEND0 (End of calibration of A/D converter unit 0) */
            [11] = BSP_PRV_VECT_ENUM(EVENT_ADC_CALEND1,GROUP3), /* ADC CALEND1 (End of calibration of A/D converter unit 1) */
            [12] = BSP_PRV_VECT_ENUM(EVENT_ADC_ADI0,GROUP4), /* ADC ADI0 (End of A/D scanning operation(Gr.0)) */
            [13] = BSP_PRV_VECT_ENUM(EVENT_ADC_ADI1,GROUP5), /* ADC ADI1 (End of A/D scanning operation(Gr.1)) */
            [14] = BSP_PRV_VECT_ENUM(EVENT_ADC_ADI2,GROUP6), /* ADC ADI2 (End of A/D scanning operation(Gr.2)) */
            [15] = BSP_PRV_VECT_ENUM(EVENT_ADC_ADI3,GROUP7), /* ADC ADI3 (End of A/D scanning operation(Gr.3)) */
            [16] = BSP_PRV_VECT_ENUM(EVENT_ADC_ADI4,GROUP0), /* ADC ADI4 (End of A/D scanning operation(Gr.4)) */
            [17] = BSP_PRV_VECT_ENUM(EVENT_ADC_FIFOOVF,GROUP1), /* ADC FIFOOVF (FIFO data overflow) */
            [18] = BSP_PRV_VECT_ENUM(EVENT_ADC_FIFOREQ0,GROUP2), /* ADC FIFOREQ0 (FIFO data read request interrupt(Gr.0)) */
            [19] = BSP_PRV_VECT_ENUM(EVENT_ADC_FIFOREQ1,GROUP3), /* ADC FIFOREQ1 (FIFO data read request interrupt(Gr.1)) */
            [20] = BSP_PRV_VECT_ENUM(EVENT_ADC_FIFOREQ2,GROUP4), /* ADC FIFOREQ2 (FIFO data read request interrupt(Gr.2)) */
            [21] = BSP_PRV_VECT_ENUM(EVENT_ADC_FIFOREQ3,GROUP5), /* ADC FIFOREQ3 (FIFO data read request interrupt(Gr.3)) */
            [22] = BSP_PRV_VECT_ENUM(EVENT_ADC_FIFOREQ4,GROUP6), /* ADC FIFOREQ4 (FIFO data read request interrupt(Gr.4)) */
            [23] = BSP_PRV_VECT_ENUM(EVENT_SCI2_RXI,GROUP7), /* SCI2 RXI (Receive data full) */
            [24] = BSP_PRV_VECT_ENUM(EVENT_SCI2_TXI,GROUP0), /* SCI2 TXI (Transmit data empty) */
            [25] = BSP_PRV_VECT_ENUM(EVENT_SCI2_TEI,GROUP1), /* SCI2 TEI (Transmit end) */
            [26] = BSP_PRV_VECT_ENUM(EVENT_SCI2_ERI,GROUP2), /* SCI2 ERI (Receive error) */
            [27] = BSP_PRV_VECT_ENUM(EVENT_DMAC0_INT,GROUP3), /* DMAC0 INT (DMAC0 transfer end) */
            [28] = BSP_PRV_VECT_ENUM(EVENT_DMAC1_INT,GROUP4), /* DMAC1 INT (DMAC1 transfer end) */
            [29] = BSP_PRV_VECT_ENUM(EVENT_GPT0_CAPTURE_COMPARE_A,GROUP5), /* GPT0 CAPTURE COMPARE A (Capture/Compare match A) */
            [30] = BSP_PRV_VECT_ENUM(EVENT_GPT0_CAPTURE_COMPARE_B,GROUP6), /* GPT0 CAPTURE COMPARE B (Capture/Compare match B) */
        };
        #endif
        #endif