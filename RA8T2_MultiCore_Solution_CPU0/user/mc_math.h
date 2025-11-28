#ifndef __MC_MATH_H
#define __MC_MATH_H
#include "hal_data.h"
//#include "UserAPI/bsp_adc.h"



//CKTIM=300M PWM=20K
#define CKTIM               300000000               // GPT clk = 300MHz
#define PWM_FREQ            20000                   // 20K
#define PWM_PULSE  (CKTIM/(PWM_FREQ))

#define PWM_HALF_PULSE      PWM_PULSE/2
// speed loop 
#define SPEED_COUNT         5                       //  20k /5 = 4k  
#define SpeedLoop_HZ        (PWM_FREQ/SPEED_COUNT)
#define SPEED_PID_PERIOD (1.0f/((float)SpeedLoop_HZ))



typedef struct
{
  float Cos;
  float Sin;
}TRANSF_COS_SIN_DEF;
extern TRANSF_COS_SIN_DEF Transf_Cos_Sin;

typedef struct
{
  float Ialpha;
  float Ibeta;
}CURRENT_ALPHA_BETA_DEF;
extern CURRENT_ALPHA_BETA_DEF Current_Ialpha_beta;

typedef struct
{
  float Ia;
  float Ib;
  float Ic;
}CURRENT_ABC_DEF;
extern CURRENT_ABC_DEF Current_Iabc;

typedef struct
{
  float Id;
  float Iq;
}CURRENT_DQ_DEF;
extern CURRENT_DQ_DEF Current_Idq;

typedef struct
{
  float Valpha;
  float Vbeta;
}VOLTAGE_ALPHA_BETA_DEF;
extern VOLTAGE_ALPHA_BETA_DEF Voltage_Alpha_Beta;

 

typedef struct
{
  float Vd;
  float Vq;
}VOLTAGE_DQ_DEF;
extern VOLTAGE_DQ_DEF Voltage_DQ;


extern uint8_t sector;

typedef struct
{
  float UdcTest;   //母线电压
  float TpwmCoef;  //PWM运算系数
  float MaxVout;   //电流环输出电压限幅udc/1.732
}PWM_PARAM_DEF;

extern PWM_PARAM_DEF Pwm_Param;


typedef struct
{
    uint16_t PhaseU_Tcmp;
    uint16_t PhaseV_Tcmp;
    uint16_t PhaseW_Tcmp;
    
} THREEPHASE_DUTYCYCLE_DEF;
extern THREEPHASE_DUTYCYCLE_DEF Threephase_Dutycycle;


void Angle_To_Cos_Sin(float angle_temp,TRANSF_COS_SIN_DEF* cos_sin_temp);
void Clarke_Transf(CURRENT_ABC_DEF Current_abc_temp,CURRENT_ALPHA_BETA_DEF* Current_alpha_beta_temp);
void Rev_Park_Transf(VOLTAGE_DQ_DEF v_dq_temp,TRANSF_COS_SIN_DEF cos_sin_temp,VOLTAGE_ALPHA_BETA_DEF* v_alpha_beta_temp);
void Park_Transf(CURRENT_ALPHA_BETA_DEF current_alpha_beta_temp,TRANSF_COS_SIN_DEF cos_sin_temp,CURRENT_DQ_DEF* current_dq_temp);

extern float Tcmp1,Tcmp2,Tcmp3,Tx,Ty,f_temp,Ta,Tb,Tc;




#endif

