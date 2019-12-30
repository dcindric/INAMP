
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
//    Opamp_1_Enable();
//    Opamp_2_Enable();
//    Opamp_3_Enable();
//    
//    Poziv Enable() funkcije nije potreban jer u slucaju operacijskog pojacala Start() funkcija obavlja istu funkcionalnost
    
    
   
    Opamp_1_Start();
    Opamp_2_Start();
    Opamp_3_Start();

    

    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
