/* generated common source file - do not edit */
#include "common_data.h"
agt_instance_ctrl_t g_timer0_ctrl;
const agt_extended_cfg_t g_timer0_extend =
{
    .count_source            = AGT_CLOCK_PCLKB,
    .agto                    = AGT_PIN_CFG_DISABLED,
    .agtoab_settings_b.agtoa = AGT_PIN_CFG_DISABLED,
    .agtoab_settings_b.agtob = AGT_PIN_CFG_DISABLED,
    .measurement_mode        = AGT_MEASURE_DISABLED,
    .agtio_filter            = AGT_AGTIO_FILTER_NONE,
    .enable_pin              = AGT_ENABLE_PIN_NOT_USED,
    .trigger_edge            = AGT_TRIGGER_EDGE_RISING,
    .counter_bit_width       = AGT_COUNTER_BIT_WIDTH_16,
};
const timer_cfg_t g_timer0_cfg =
{
    .mode                = TIMER_MODE_PERIODIC,
    /* Actual period: 0.001 seconds. Actual duty: 50%. */ .period_counts = (uint32_t) 0xf424, .duty_cycle_counts = 0x7a12, .source_div = (timer_source_div_t)0,
    .channel             = 0,
    .p_callback          = ethercat_ssc_port_timer_callback,
    /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
    .p_context           = (void *) &NULL,
#endif
    .p_extend            = &g_timer0_extend,
    .cycle_end_ipl       = (4),
#if defined(VECTOR_NUMBER_AGT0_INT)
    .cycle_end_irq       = VECTOR_NUMBER_AGT0_INT,
#else
    .cycle_end_irq       = FSP_INVALID_VECTOR,
#endif
};
/* Instance structure to use this module. */
const timer_instance_t g_timer0 =
{
    .p_ctrl        = &g_timer0_ctrl,
    .p_cfg         = &g_timer0_cfg,
    .p_api         = &g_timer_on_agt
};
ethercat_phy_instance_ctrl_t g_ethercat_phy1_ctrl;

const ethercat_phy_extended_cfg_t g_ethercat_phy1_extended_cfg =
{
    .p_target_init                     = NULL,
    .p_target_link_partner_ability_get = NULL
};

const ether_phy_cfg_t g_ethercat_phy1_cfg =
{

    .channel                   = 1,
    .phy_lsi_address           = 3,
    .phy_reset_wait_time       = 0x00020000,
    .mii_bit_access_wait_time  = 8,
    .phy_lsi_type              = ETHER_PHY_LSI_TYPE_ICS1894,
    .flow_control              = ETHER_PHY_FLOW_CONTROL_DISABLE,
    .mii_type                  = ETHER_PHY_MII_TYPE_MII,
    .p_context                 = NULL,
    .p_extend                  = &g_ethercat_phy1_extended_cfg,

};
/* Instance structure to use this module. */
const ether_phy_instance_t g_ethercat_phy1 =
{
    .p_ctrl        = &g_ethercat_phy1_ctrl,
    .p_cfg         = &g_ethercat_phy1_cfg,
    .p_api         = &g_ether_phy_on_ethercat_phy
};
ethercat_phy_instance_ctrl_t g_ethercat_phy0_ctrl;

const ethercat_phy_extended_cfg_t g_ethercat_phy0_extended_cfg =
{
    .p_target_init                     = NULL,
    .p_target_link_partner_ability_get = NULL
};

const ether_phy_cfg_t g_ethercat_phy0_cfg =
{

    .channel                   = 0,
    .phy_lsi_address           = 2,
    .phy_reset_wait_time       = 0x00020000,
    .mii_bit_access_wait_time  = 8,
    .phy_lsi_type              = ETHER_PHY_LSI_TYPE_ICS1894,
    .flow_control              = ETHER_PHY_FLOW_CONTROL_DISABLE,
    .mii_type                  = ETHER_PHY_MII_TYPE_MII,
    .p_context                 = NULL,
    .p_extend                  = &g_ethercat_phy0_extended_cfg,

};
/* Instance structure to use this module. */
const ether_phy_instance_t g_ethercat_phy0 =
{
    .p_ctrl        = &g_ethercat_phy0_ctrl,
    .p_cfg         = &g_ethercat_phy0_cfg,
    .p_api         = &g_ether_phy_on_ethercat_phy
};
ethercat_ssc_port_instance_ctrl_t g_ethercat_ssc_port0_ctrl;

#define RA_NOT_DEFINED (1)
const ethercat_ssc_port_extend_cfg_t g_ethercat_ssc_port0_ext_cfg =
{
    .eeprom_size             = ETHERCAT_SSC_PORT_EEPROM_SIZE_OVER_32KBIT,
    .tx_signal_delay_port0   = ETHERCAT_SSC_PORT_TX_SIGNAL_DELAY_00NS,
    .tx_signal_delay_port1   = ETHERCAT_SSC_PORT_TX_SIGNAL_DELAY_00NS,

#if (RA_NOT_DEFINED == g_ethercat_phy0)
    .p_ether_phy_instance[0] = NULL,
#else
    .p_ether_phy_instance[0] = &g_ethercat_phy0,
#endif
#if (RA_NOT_DEFINED == g_ethercat_phy1)
    .p_ether_phy_instance[1] = NULL,
#else
    .p_ether_phy_instance[1] = &g_ethercat_phy1,
#endif
};

const ethercat_ssc_port_cfg_t g_ethercat_ssc_port0_cfg =
{
    .reset_hold_time = 1,
    .reset_wait_time = 15000,
    .address_offset  = 0,

#if defined(VECTOR_NUMBER_ETHC_I)
    .common_irq   = VECTOR_NUMBER_ETHC_I,
#else
    .common_irq   = FSP_INVALID_VECTOR,
#endif
    .common_ipl   = (12),
 #if defined(VECTOR_NUMBER_ETHC_SI0)
    .sync0_irq   = VECTOR_NUMBER_ETHC_SI0,
#else
    .sync0_irq   = FSP_INVALID_VECTOR,
#endif
    .sync0_ipl = (12),
 #if defined(VECTOR_NUMBER_ETHC_SI1)
    .sync1_irq   = VECTOR_NUMBER_ETHC_SI1,
#else
    .sync1_irq   = FSP_INVALID_VECTOR,
#endif
    .sync1_ipl = (12),

    .p_callback       = NULL,

    .p_timer_instance =
#if (RA_NOT_DEFINED == g_timer0)
                    NULL,
#else
                    &g_timer0,
#endif

    .p_context = NULL,
    .p_extend  = &g_ethercat_ssc_port0_ext_cfg,
};
#undef RA_NOT_DEFINED

/* Instance structure to use this module. */
const ethercat_ssc_port_instance_t g_ethercat_ssc_port0 =
{
    .p_ctrl        = &g_ethercat_ssc_port0_ctrl,
    .p_cfg         = &g_ethercat_ssc_port0_cfg,
    .p_api         = &g_ethercat_ssc_port_on_ethercat_ssc_port
};

ethercat_ssc_port_instance_t const * gp_ethercat_ssc_port = &g_ethercat_ssc_port0;
ioport_instance_ctrl_t g_ioport_ctrl;
const ioport_instance_t g_ioport =
        {
            .p_api = &g_ioport_on_ioport,
            .p_ctrl = &g_ioport_ctrl,
            .p_cfg = &g_bsp_pin_cfg,
        };

void g_common_init(void) {
}
