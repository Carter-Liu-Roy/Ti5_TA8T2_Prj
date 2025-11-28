/* generated HAL source file - do not edit */
#include "hal_data.h"
ipc_instance_ctrl_t g_ipc1_ctrl;

            /** IPC configuration */
            const ipc_cfg_t g_ipc1_cfg =
            {
                .channel = 1,
                .p_callback = g_ipc1_callback,
#if defined(NULL)
                .p_context = NULL,
#else
                .p_context = (void *) &NULL,
#endif
                .ipl = (5),
#if defined(VECTOR_NUMBER_IPC_IRQ1)
                .irq = VECTOR_NUMBER_IPC_IRQ1,
#else
                .irq = FSP_INVALID_VECTOR,
#endif
            };

            /* Instance structure to use this module. */
            const ipc_instance_t g_ipc1 =
            {
                .p_ctrl = &g_ipc1_ctrl,
                .p_cfg = &g_ipc1_cfg,
                .p_api = &g_ipc_on_ipc
            };
ipc_instance_ctrl_t g_ipc0_ctrl;

            /** IPC configuration */
            const ipc_cfg_t g_ipc0_cfg =
            {
                .channel = 0,
                .p_callback = g_ipc0_callback,
#if defined(NULL)
                .p_context = NULL,
#else
                .p_context = (void *) &NULL,
#endif
                .ipl = (4),
#if defined(VECTOR_NUMBER_IPC_IRQ0)
                .irq = VECTOR_NUMBER_IPC_IRQ0,
#else
                .irq = FSP_INVALID_VECTOR,
#endif
            };

            /* Instance structure to use this module. */
            const ipc_instance_t g_ipc0 =
            {
                .p_ctrl = &g_ipc0_ctrl,
                .p_cfg = &g_ipc0_cfg,
                .p_api = &g_ipc_on_ipc
            };
void g_hal_init(void) {
g_common_init();
}
