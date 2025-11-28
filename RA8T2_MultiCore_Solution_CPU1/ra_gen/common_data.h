/* generated common header file - do not edit */
#ifndef COMMON_DATA_H_
#define COMMON_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "r_agt.h"
#include "r_timer_api.h"
#include "r_ethercat_phy.h"
#include "r_ether_phy_api.h"
#include "rm_ethercat_ssc_port.h"
#include "rm_ethercat_ssc_port_api.h"
#include "r_ioport.h"
#include "bsp_pin_cfg.h"
FSP_HEADER
/** AGT Timer Instance */
extern const timer_instance_t g_timer0;

/** Access the AGT instance using these structures when calling API functions directly (::p_api is not used). */
extern agt_instance_ctrl_t g_timer0_ctrl;
extern const timer_cfg_t g_timer0_cfg;

#ifndef ethercat_ssc_port_timer_callback
void ethercat_ssc_port_timer_callback(timer_callback_args_t * p_args);
#endif
#ifndef ETHER_PHY_LSI_TYPE_KIT_COMPONENT
  #define ETHER_PHY_LSI_TYPE_KIT_COMPONENT ETHER_PHY_LSI_TYPE_DEFAULT
#endif

#ifndef NULL
void NULL(ethercat_phy_instance_ctrl_t * p_instance_ctrl);
#endif

#ifndef NULL
bool NULL(ethercat_phy_instance_ctrl_t * p_instance_ctrl, uint32_t line_speed_duplex);
#endif

/** Ether Phy on EtherCAT Phy Instance. */
extern const ether_phy_instance_t g_ethercat_phy1;

/** Access the Ethernet PHY instance using these structures when calling API functions directly (::p_api is not used). */
extern ethercat_phy_instance_ctrl_t g_ethercat_phy1_ctrl;
extern const ether_phy_cfg_t g_ethercat_phy1_cfg;
#ifndef ETHER_PHY_LSI_TYPE_KIT_COMPONENT
  #define ETHER_PHY_LSI_TYPE_KIT_COMPONENT ETHER_PHY_LSI_TYPE_DEFAULT
#endif

#ifndef NULL
void NULL(ethercat_phy_instance_ctrl_t * p_instance_ctrl);
#endif

#ifndef NULL
bool NULL(ethercat_phy_instance_ctrl_t * p_instance_ctrl, uint32_t line_speed_duplex);
#endif

/** Ether Phy on EtherCAT Phy Instance. */
extern const ether_phy_instance_t g_ethercat_phy0;

/** Access the Ethernet PHY instance using these structures when calling API functions directly (::p_api is not used). */
extern ethercat_phy_instance_ctrl_t g_ethercat_phy0_ctrl;
extern const ether_phy_cfg_t g_ethercat_phy0_cfg;
/** EtherCAT SSC Port on EtherCAT SSC Port Instance. */
extern const ethercat_ssc_port_instance_t g_ethercat_ssc_port0;

/** Access the EtherCAT SSC Port instance using these structures when calling API functions directly (::p_api is not used). */
extern ethercat_ssc_port_instance_ctrl_t g_ethercat_ssc_port0_ctrl;
extern const ethercat_ssc_port_extend_cfg_t g_ethercat_ssc_port0_ext_cfg;
extern const ethercat_ssc_port_cfg_t g_ethercat_ssc_port0_cfg;
extern ethercat_ssc_port_instance_t const * gp_ethercat_ssc_port;

#ifndef NULL
void NULL(ethercat_ssc_port_callback_args_t * p_args);
#endif
#define IOPORT_CFG_NAME g_bsp_pin_cfg
#define IOPORT_CFG_OPEN R_IOPORT_Open
#define IOPORT_CFG_CTRL g_ioport_ctrl

/* IOPORT Instance */
extern const ioport_instance_t g_ioport;

/* IOPORT control structure. */
extern ioport_instance_ctrl_t g_ioport_ctrl;
void g_common_init(void);
FSP_FOOTER
#endif /* COMMON_DATA_H_ */
