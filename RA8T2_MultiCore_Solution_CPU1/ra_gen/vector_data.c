/* generated vector source file - do not edit */
        #include "bsp_api.h"
        /* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
        #if VECTOR_DATA_IRQ_COUNT > 0
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_NUM_ENTRIES] BSP_PLACE_IN_SECTION(BSP_SECTION_APPLICATION_VECTORS) =
        {
                        [0] = ethercat_ssc_port_isr_esc_cat, /* ETHC I (Interrupt) */
            [1] = ethercat_ssc_port_isr_esc_sync0, /* ETHC SI0 (Sync0 Interrupt) */
            [2] = ethercat_ssc_port_isr_esc_sync1, /* ETHC SI1 (Sync1 Interrupt) */
            [3] = agt_int_isr, /* AGT0 INT (AGT interrupt) */
            [4] = ipc_isr, /* IPC IRQ0 (CPU Mutual Interrupt 0) */
            [5] = ipc_isr, /* IPC IRQ1 (CPU Mutual Interrupt 1) */
        };
        #if BSP_FEATURE_ICU_HAS_IELSR
        const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_NUM_ENTRIES] =
        {
            [0] = BSP_PRV_VECT_ENUM(EVENT_ETHC_I,GROUP0), /* ETHC I (Interrupt) */
            [1] = BSP_PRV_VECT_ENUM(EVENT_ETHC_SI0,GROUP1), /* ETHC SI0 (Sync0 Interrupt) */
            [2] = BSP_PRV_VECT_ENUM(EVENT_ETHC_SI1,GROUP2), /* ETHC SI1 (Sync1 Interrupt) */
            [3] = BSP_PRV_VECT_ENUM(EVENT_AGT0_INT,GROUP3), /* AGT0 INT (AGT interrupt) */
            [4] = BSP_PRV_VECT_ENUM(EVENT_IPC_IRQ0,GROUP4), /* IPC IRQ0 (CPU Mutual Interrupt 0) */
            [5] = BSP_PRV_VECT_ENUM(EVENT_IPC_IRQ1,GROUP5), /* IPC IRQ1 (CPU Mutual Interrupt 1) */
        };
        #endif
        #endif