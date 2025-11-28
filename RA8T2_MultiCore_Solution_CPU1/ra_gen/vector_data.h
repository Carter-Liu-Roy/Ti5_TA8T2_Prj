/* generated vector header file - do not edit */
        #ifndef VECTOR_DATA_H
        #define VECTOR_DATA_H
        #ifdef __cplusplus
        extern "C" {
        #endif
                /* Number of interrupts allocated */
        #ifndef VECTOR_DATA_IRQ_COUNT
        #define VECTOR_DATA_IRQ_COUNT    (6)
        #endif
        /* ISR prototypes */
        void ethercat_ssc_port_isr_esc_cat(void);
        void ethercat_ssc_port_isr_esc_sync0(void);
        void ethercat_ssc_port_isr_esc_sync1(void);
        void agt_int_isr(void);
        void ipc_isr(void);

        /* Vector table allocations */
        #define VECTOR_NUMBER_ETHC_I ((IRQn_Type) 0) /* ETHC I (Interrupt) */
        #define ETHC_I_IRQn          ((IRQn_Type) 0) /* ETHC I (Interrupt) */
        #define VECTOR_NUMBER_ETHC_SI0 ((IRQn_Type) 1) /* ETHC SI0 (Sync0 Interrupt) */
        #define ETHC_SI0_IRQn          ((IRQn_Type) 1) /* ETHC SI0 (Sync0 Interrupt) */
        #define VECTOR_NUMBER_ETHC_SI1 ((IRQn_Type) 2) /* ETHC SI1 (Sync1 Interrupt) */
        #define ETHC_SI1_IRQn          ((IRQn_Type) 2) /* ETHC SI1 (Sync1 Interrupt) */
        #define VECTOR_NUMBER_AGT0_INT ((IRQn_Type) 3) /* AGT0 INT (AGT interrupt) */
        #define AGT0_INT_IRQn          ((IRQn_Type) 3) /* AGT0 INT (AGT interrupt) */
        #define VECTOR_NUMBER_IPC_IRQ0 ((IRQn_Type) 4) /* IPC IRQ0 (CPU Mutual Interrupt 0) */
        #define IPC_IRQ0_IRQn          ((IRQn_Type) 4) /* IPC IRQ0 (CPU Mutual Interrupt 0) */
        #define VECTOR_NUMBER_IPC_IRQ1 ((IRQn_Type) 5) /* IPC IRQ1 (CPU Mutual Interrupt 1) */
        #define IPC_IRQ1_IRQn          ((IRQn_Type) 5) /* IPC IRQ1 (CPU Mutual Interrupt 1) */
        /* The number of entries required for the ICU vector table. */
        #define BSP_ICU_VECTOR_NUM_ENTRIES (6)

        #ifdef __cplusplus
        }
        #endif
        #endif /* VECTOR_DATA_H */