#include "hal_data.h"
#include "mc_math.h"


//#pragma default_variable_attributes = @ ".dtcm_noinit"
CURRENT_ALPHA_BETA_DEF Current_Ialpha_beta;
VOLTAGE_ALPHA_BETA_DEF Voltage_Alpha_Beta;
TRANSF_COS_SIN_DEF Transf_Cos_Sin;
CURRENT_DQ_DEF Current_Idq; 
VOLTAGE_DQ_DEF Voltage_DQ;
THREEPHASE_DUTYCYCLE_DEF Threephase_Dutycycle;
CURRENT_ABC_DEF Current_Iabc;
//#pragma default_variable_attributes =

//#pragma default_function_attributes = @ ".ram_code_from_flash"
//#pragma default_function_attributes = @ ".itcm_code_from_flash"
void Angle_To_Cos_Sin(float angle_temp,TRANSF_COS_SIN_DEF* cos_sin_temp)
{
  cos_sin_temp->Cos = cos(angle_temp);
  cos_sin_temp->Sin = sin(angle_temp);
}


void Clarke_Transf(CURRENT_ABC_DEF Current_abc_temp,CURRENT_ALPHA_BETA_DEF* Current_alpha_beta_temp)
{
  Current_alpha_beta_temp->Ialpha = (Current_abc_temp.Ia - (Current_abc_temp.Ib + Current_abc_temp.Ic) * 0.5F) *  0.666666667F;
  Current_alpha_beta_temp->Ibeta = (Current_abc_temp.Ib - Current_abc_temp.Ic) * 0.866025388F * 0.666666667F;
}
void Park_Transf(CURRENT_ALPHA_BETA_DEF current_alpha_beta_temp,TRANSF_COS_SIN_DEF cos_sin_temp,CURRENT_DQ_DEF* current_dq_temp)
{
  current_dq_temp->Id = current_alpha_beta_temp.Ialpha * cos_sin_temp.Cos + current_alpha_beta_temp.Ibeta * cos_sin_temp.Sin;
  current_dq_temp->Iq = -current_alpha_beta_temp.Ialpha * cos_sin_temp.Sin + current_alpha_beta_temp.Ibeta * cos_sin_temp.Cos;
}


void Rev_Park_Transf(VOLTAGE_DQ_DEF v_dq_temp,TRANSF_COS_SIN_DEF cos_sin_temp,VOLTAGE_ALPHA_BETA_DEF* v_alpha_beta_temp)
{
  v_alpha_beta_temp->Valpha = cos_sin_temp.Cos * v_dq_temp.Vd - cos_sin_temp.Sin * v_dq_temp.Vq;
  v_alpha_beta_temp->Vbeta  = cos_sin_temp.Sin * v_dq_temp.Vd + cos_sin_temp.Cos * v_dq_temp.Vq;
}

uint8_t sector;


PWM_PARAM_DEF Pwm_Param;
float test_Tcmp1,test_Tcmp2,test_Tcmp3;
float Tcmp1 = 0.0F,Tcmp2 = 0.0F,Tcmp3 = 0.0F;


//#pragma default_function_attributes =



