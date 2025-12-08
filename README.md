This is a demo project dedicated for Shanghai Ti5 robo...
Author: Carter Liu from Renesas
The sampel project uses below peripherials: 
1. ADC  (Auto triggered by GPT ch4)
2. GPT  (general timer to record time and other function)
3. UART (encoder data auto read posization information)
4. Three phase pwm module (PWM output)
5. DMA (UNIT0 ch0: Transfer data from 0x73 address to USCI2 TDR(1 byte); UNIT0 ch1: Transfer data from SCI2 RDR to g_recBuf(8 bytes);)
6. EtherCAT running in M33 and others running in M85
7. M33 M85 exchange data sample.
8. Dual core on-line debug sample
