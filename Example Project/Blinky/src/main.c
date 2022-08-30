#include "hx_drv_tflm.h"
#include "hx_example_utils.h"

int main(int argc, char* argv[])
{
	
  while (1) 
  {
        
	hx_drv_led_on(HX_DRV_LED_GREEN);
	hx_drv_led_on(HX_DRV_LED_RED);
	hx_util_delay_ms(500);
	hx_drv_led_off(HX_DRV_LED_GREEN);
	hx_drv_led_off(HX_DRV_LED_RED);
	hx_util_delay_ms(500);
  }
     
}

