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
            [5] = adc_b_calend0_isr, /* ADC CALEND0 (End of calibration of A/D converter unit 0) */
            [6] = adc_b_calend1_isr, /* ADC CALEND1 (End of calibration of A/D converter unit 1) */
            [7] = adc_b_adi0_isr, /* ADC ADI0 (End of A/D scanning operation(Gr.0)) */
            [8] = adc_b_fifoovf_isr, /* ADC FIFOOVF (FIFO data overflow) */
            [9] = adc_b_fiforeq0_isr, /* ADC FIFOREQ0 (FIFO data read request interrupt(Gr.0)) */
            [10] = adc_b_fiforeq1_isr, /* ADC FIFOREQ1 (FIFO data read request interrupt(Gr.1)) */
            [11] = adc_b_fiforeq2_isr, /* ADC FIFOREQ2 (FIFO data read request interrupt(Gr.2)) */
            [12] = adc_b_fiforeq3_isr, /* ADC FIFOREQ3 (FIFO data read request interrupt(Gr.3)) */
            [13] = adc_b_fiforeq4_isr, /* ADC FIFOREQ4 (FIFO data read request interrupt(Gr.4)) */
            [14] = sci_b_uart_rxi_isr, /* SCI2 RXI (Receive data full) */
            [15] = sci_b_uart_txi_isr, /* SCI2 TXI (Transmit data empty) */
            [16] = sci_b_uart_tei_isr, /* SCI2 TEI (Transmit end) */
            [17] = sci_b_uart_eri_isr, /* SCI2 ERI (Receive error) */
            [18] = dmac_int_isr, /* DMAC0 INT (DMAC0 transfer end) */
            [19] = dmac_int_isr, /* DMAC1 INT (DMAC1 transfer end) */
            [20] = gpt_capture_compare_a_isr, /* GPT0 CAPTURE COMPARE A (Capture/Compare match A) */
            [21] = gpt_capture_compare_b_isr, /* GPT0 CAPTURE COMPARE B (Capture/Compare match B) */
        };
        #if BSP_FEATURE_ICU_HAS_IELSR
        const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_NUM_ENTRIES] =
        {
            [0] = BSP_PRV_VECT_ENUM(EVENT_GPT4_COUNTER_OVERFLOW,GROUP0), /* GPT4 COUNTER OVERFLOW (Overflow) */
            [1] = BSP_PRV_VECT_ENUM(EVENT_GPT4_CAPTURE_COMPARE_A,GROUP1), /* GPT4 CAPTURE COMPARE A (Capture/Compare match A) */
            [2] = BSP_PRV_VECT_ENUM(EVENT_GPT4_CAPTURE_COMPARE_B,GROUP2), /* GPT4 CAPTURE COMPARE B (Capture/Compare match B) */
            [3] = BSP_PRV_VECT_ENUM(EVENT_IPC_IRQ0,GROUP3), /* IPC IRQ0 (CPU Mutual Interrupt 0) */
            [4] = BSP_PRV_VECT_ENUM(EVENT_IPC_IRQ1,GROUP4), /* IPC IRQ1 (CPU Mutual Interrupt 1) */
            [5] = BSP_PRV_VECT_ENUM(EVENT_ADC_CALEND0,GROUP5), /* ADC CALEND0 (End of calibration of A/D converter unit 0) */
            [6] = BSP_PRV_VECT_ENUM(EVENT_ADC_CALEND1,GROUP6), /* ADC CALEND1 (End of calibration of A/D converter unit 1) */
            [7] = BSP_PRV_VECT_ENUM(EVENT_ADC_ADI0,GROUP7), /* ADC ADI0 (End of A/D scanning operation(Gr.0)) */
            [8] = BSP_PRV_VECT_ENUM(EVENT_ADC_FIFOOVF,GROUP0), /* ADC FIFOOVF (FIFO data overflow) */
            [9] = BSP_PRV_VECT_ENUM(EVENT_ADC_FIFOREQ0,GROUP1), /* ADC FIFOREQ0 (FIFO data read request interrupt(Gr.0)) */
            [10] = BSP_PRV_VECT_ENUM(EVENT_ADC_FIFOREQ1,GROUP2), /* ADC FIFOREQ1 (FIFO data read request interrupt(Gr.1)) */
            [11] = BSP_PRV_VECT_ENUM(EVENT_ADC_FIFOREQ2,GROUP3), /* ADC FIFOREQ2 (FIFO data read request interrupt(Gr.2)) */
            [12] = BSP_PRV_VECT_ENUM(EVENT_ADC_FIFOREQ3,GROUP4), /* ADC FIFOREQ3 (FIFO data read request interrupt(Gr.3)) */
            [13] = BSP_PRV_VECT_ENUM(EVENT_ADC_FIFOREQ4,GROUP5), /* ADC FIFOREQ4 (FIFO data read request interrupt(Gr.4)) */
            [14] = BSP_PRV_VECT_ENUM(EVENT_SCI2_RXI,GROUP6), /* SCI2 RXI (Receive data full) */
            [15] = BSP_PRV_VECT_ENUM(EVENT_SCI2_TXI,GROUP7), /* SCI2 TXI (Transmit data empty) */
            [16] = BSP_PRV_VECT_ENUM(EVENT_SCI2_TEI,GROUP0), /* SCI2 TEI (Transmit end) */
            [17] = BSP_PRV_VECT_ENUM(EVENT_SCI2_ERI,GROUP1), /* SCI2 ERI (Receive error) */
            [18] = BSP_PRV_VECT_ENUM(EVENT_DMAC0_INT,GROUP2), /* DMAC0 INT (DMAC0 transfer end) */
            [19] = BSP_PRV_VECT_ENUM(EVENT_DMAC1_INT,GROUP3), /* DMAC1 INT (DMAC1 transfer end) */
            [20] = BSP_PRV_VECT_ENUM(EVENT_GPT0_CAPTURE_COMPARE_A,GROUP4), /* GPT0 CAPTURE COMPARE A (Capture/Compare match A) */
            [21] = BSP_PRV_VECT_ENUM(EVENT_GPT0_CAPTURE_COMPARE_B,GROUP5), /* GPT0 CAPTURE COMPARE B (Capture/Compare match B) */
        };
        #endif
        #endif