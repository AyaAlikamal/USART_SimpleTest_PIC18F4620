/* 
 * File:   application.c
 * Author: AyaAli
 * Created on September 22, 2023, 10:24 AM
 */
#include "application.h"

usart_t usart_obj;
void usart_int_init(){
    Std_ReturnType ret = E_OK;    
    usart_obj.baudrate = 9600;
    usart_obj.baudrate_gen_cfg = BAUDRATE_ASYNC_8BIT_LOW_SPEED;
    usart_obj.tx_cfg.usart_tx_enable = EUSART_ASYNCHRONOUSE_TX_ENABLE;
    usart_obj.tx_cfg.usart_tx_interrupt_enable = EUSART_ASYNCHRONOUSE_TX_INTERRUPT_DISABLE ;
    usart_obj.tx_cfg.usart_tx_9bit_enable = EUSART_ASYNCHRONOUSE_TX_9Bit_DISABLE ;
    usart_obj.rx_cfg.usart_rx_enable = EUSART_ASYNCHRONOUSE_RX_ENABLE;
    usart_obj.rx_cfg.usart_rx_interrupt_enable = EUSART_ASYNCHRONOUSE_RX_INTERRUPT_DISABLE ;
    usart_obj.rx_cfg.usart_rx_9bit_enable = EUSART_ASYNCHRONOUSE_RX_9Bit_DISABLE ;
    
    usart_obj.EUSART_Framming_Error_HUNDELER = NULL;
    usart_obj.EUSART_Overrun_Error_HUNDELER = NULL;
    usart_obj.EUSART_RX_DEFUALTINTERRUPT_HUNDELER = NULL;
    usart_obj.EUSART_TX_DEFUALTINTERRUPT_HUNDELER = NULL;
    ret = USART_ASYNC_Init(&usart_obj);
};


uint_8 rec_usart = 0;
int main() {
Std_ReturnType ret = E_NOT_OK;
usart_int_init();
while(1){
  
}
 return (EXIT_SUCCESS);
}
void application_initialize(void){
   Std_ReturnType ret = E_NOT_OK;

}

