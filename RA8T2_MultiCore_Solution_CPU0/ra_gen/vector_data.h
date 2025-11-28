/* generated vector header file - do not edit */
        #ifndef VECTOR_DATA_H
        #define VECTOR_DATA_H
        #ifdef __cplusplus
        extern "C" {
        #endif
                /* Number of interrupts allocated */
        #ifndef VECTOR_DATA_IRQ_COUNT
        #define VECTOR_DATA_IRQ_COUNT    (22)
        #endif
        /* ISR prototypes */
        void gpt_counter_overflow_isr(void);
        void gpt_capture_compare_a_isr(void);
        void gpt_capture_compare_b_isr(void);
        void ipc_isr(void);
        void adc_b_calend0_isr(void);
        void adc_b_calend1_isr(void);
        void adc_b_adi0_isr(void);
        void adc_b_fifoovf_isr(void);
        void adc_b_fiforeq0_isr(void);
        void adc_b_fiforeq1_isr(void);
        void adc_b_fiforeq2_isr(void);
        void adc_b_fiforeq3_isr(void);
        void adc_b_fiforeq4_isr(void);
        void sci_b_uart_rxi_isr(void);
        void sci_b_uart_txi_isr(void);
        void sci_b_uart_tei_isr(void);
        void sci_b_uart_eri_isr(void);
        void dmac_int_isr(void);

        /* Vector table allocations */
        #define VECTOR_NUMBER_GPT4_COUNTER_OVERFLOW ((IRQn_Type) 0) /* GPT4 COUNTER OVERFLOW (Overflow) */
        #define GPT4_COUNTER_OVERFLOW_IRQn          ((IRQn_Type) 0) /* GPT4 COUNTER OVERFLOW (Overflow) */
        #define VECTOR_NUMBER_GPT4_CAPTURE_COMPARE_A ((IRQn_Type) 1) /* GPT4 CAPTURE COMPARE A (Capture/Compare match A) */
        #define GPT4_CAPTURE_COMPARE_A_IRQn          ((IRQn_Type) 1) /* GPT4 CAPTURE COMPARE A (Capture/Compare match A) */
        #define VECTOR_NUMBER_GPT4_CAPTURE_COMPARE_B ((IRQn_Type) 2) /* GPT4 CAPTURE COMPARE B (Capture/Compare match B) */
        #define GPT4_CAPTURE_COMPARE_B_IRQn          ((IRQn_Type) 2) /* GPT4 CAPTURE COMPARE B (Capture/Compare match B) */
        #define VECTOR_NUMBER_IPC_IRQ0 ((IRQn_Type) 3) /* IPC IRQ0 (CPU Mutual Interrupt 0) */
        #define IPC_IRQ0_IRQn          ((IRQn_Type) 3) /* IPC IRQ0 (CPU Mutual Interrupt 0) */
        #define VECTOR_NUMBER_IPC_IRQ1 ((IRQn_Type) 4) /* IPC IRQ1 (CPU Mutual Interrupt 1) */
        #define IPC_IRQ1_IRQn          ((IRQn_Type) 4) /* IPC IRQ1 (CPU Mutual Interrupt 1) */
        #define VECTOR_NUMBER_ADC_CALEND0 ((IRQn_Type) 5) /* ADC CALEND0 (End of calibration of A/D converter unit 0) */
        #define ADC_CALEND0_IRQn          ((IRQn_Type) 5) /* ADC CALEND0 (End of calibration of A/D converter unit 0) */
        #define VECTOR_NUMBER_ADC_CALEND1 ((IRQn_Type) 6) /* ADC CALEND1 (End of calibration of A/D converter unit 1) */
        #define ADC_CALEND1_IRQn          ((IRQn_Type) 6) /* ADC CALEND1 (End of calibration of A/D converter unit 1) */
        #define VECTOR_NUMBER_ADC_ADI0 ((IRQn_Type) 7) /* ADC ADI0 (End of A/D scanning operation(Gr.0)) */
        #define ADC_ADI0_IRQn          ((IRQn_Type) 7) /* ADC ADI0 (End of A/D scanning operation(Gr.0)) */
        #define VECTOR_NUMBER_ADC_FIFOOVF ((IRQn_Type) 8) /* ADC FIFOOVF (FIFO data overflow) */
        #define ADC_FIFOOVF_IRQn          ((IRQn_Type) 8) /* ADC FIFOOVF (FIFO data overflow) */
        #define VECTOR_NUMBER_ADC_FIFOREQ0 ((IRQn_Type) 9) /* ADC FIFOREQ0 (FIFO data read request interrupt(Gr.0)) */
        #define ADC_FIFOREQ0_IRQn          ((IRQn_Type) 9) /* ADC FIFOREQ0 (FIFO data read request interrupt(Gr.0)) */
        #define VECTOR_NUMBER_ADC_FIFOREQ1 ((IRQn_Type) 10) /* ADC FIFOREQ1 (FIFO data read request interrupt(Gr.1)) */
        #define ADC_FIFOREQ1_IRQn          ((IRQn_Type) 10) /* ADC FIFOREQ1 (FIFO data read request interrupt(Gr.1)) */
        #define VECTOR_NUMBER_ADC_FIFOREQ2 ((IRQn_Type) 11) /* ADC FIFOREQ2 (FIFO data read request interrupt(Gr.2)) */
        #define ADC_FIFOREQ2_IRQn          ((IRQn_Type) 11) /* ADC FIFOREQ2 (FIFO data read request interrupt(Gr.2)) */
        #define VECTOR_NUMBER_ADC_FIFOREQ3 ((IRQn_Type) 12) /* ADC FIFOREQ3 (FIFO data read request interrupt(Gr.3)) */
        #define ADC_FIFOREQ3_IRQn          ((IRQn_Type) 12) /* ADC FIFOREQ3 (FIFO data read request interrupt(Gr.3)) */
        #define VECTOR_NUMBER_ADC_FIFOREQ4 ((IRQn_Type) 13) /* ADC FIFOREQ4 (FIFO data read request interrupt(Gr.4)) */
        #define ADC_FIFOREQ4_IRQn          ((IRQn_Type) 13) /* ADC FIFOREQ4 (FIFO data read request interrupt(Gr.4)) */
        #define VECTOR_NUMBER_SCI2_RXI ((IRQn_Type) 14) /* SCI2 RXI (Receive data full) */
        #define SCI2_RXI_IRQn          ((IRQn_Type) 14) /* SCI2 RXI (Receive data full) */
        #define VECTOR_NUMBER_SCI2_TXI ((IRQn_Type) 15) /* SCI2 TXI (Transmit data empty) */
        #define SCI2_TXI_IRQn          ((IRQn_Type) 15) /* SCI2 TXI (Transmit data empty) */
        #define VECTOR_NUMBER_SCI2_TEI ((IRQn_Type) 16) /* SCI2 TEI (Transmit end) */
        #define SCI2_TEI_IRQn          ((IRQn_Type) 16) /* SCI2 TEI (Transmit end) */
        #define VECTOR_NUMBER_SCI2_ERI ((IRQn_Type) 17) /* SCI2 ERI (Receive error) */
        #define SCI2_ERI_IRQn          ((IRQn_Type) 17) /* SCI2 ERI (Receive error) */
        #define VECTOR_NUMBER_DMAC0_INT ((IRQn_Type) 18) /* DMAC0 INT (DMAC0 transfer end) */
        #define DMAC0_INT_IRQn          ((IRQn_Type) 18) /* DMAC0 INT (DMAC0 transfer end) */
        #define VECTOR_NUMBER_DMAC1_INT ((IRQn_Type) 19) /* DMAC1 INT (DMAC1 transfer end) */
        #define DMAC1_INT_IRQn          ((IRQn_Type) 19) /* DMAC1 INT (DMAC1 transfer end) */
        #define VECTOR_NUMBER_GPT0_CAPTURE_COMPARE_A ((IRQn_Type) 20) /* GPT0 CAPTURE COMPARE A (Capture/Compare match A) */
        #define GPT0_CAPTURE_COMPARE_A_IRQn          ((IRQn_Type) 20) /* GPT0 CAPTURE COMPARE A (Capture/Compare match A) */
        #define VECTOR_NUMBER_GPT0_CAPTURE_COMPARE_B ((IRQn_Type) 21) /* GPT0 CAPTURE COMPARE B (Capture/Compare match B) */
        #define GPT0_CAPTURE_COMPARE_B_IRQn          ((IRQn_Type) 21) /* GPT0 CAPTURE COMPARE B (Capture/Compare match B) */
        /* The number of entries required for the ICU vector table. */
        #define BSP_ICU_VECTOR_NUM_ENTRIES (22)

        #ifdef __cplusplus
        }
        #endif
        #endif /* VECTOR_DATA_H */