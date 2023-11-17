#include <stdio.h>
#include "pico/stdlib.h"
//#include "hardware/spi.h"

#define CS	3
#define SCK	4
#define MOSI	1
#define MISO 	2

#define HIGH	1
#define LOW	0

int main(){

	uint8_t buff[6];

	//spi_inst_t *spi = spi0;

	stdio_init_all();

//	/* init CS pin HIGH */
//	gpio_init(CS);
//	gpio_set_dir(CS, GPIO_OUT);
//	gpio_put(CS,HIGH);
//
//	/* set SPI freq at 1MHz */
//	spi_init(spi, 10e6);
//
//	/* spi format */
//	spi_set_format(spi0,
//			8,
//			1, /* polarity CPOL */
//			1, /* phase CPHA */
//			SPI_MSB_FIRST);
//
//	//init spi
//	gpio_set_function(SCK,GPIO_FUNC_SPI);
//	gpio_set_function(MOSI,GPIO_FUNC_SPI);
//	gpio_set_function(MISO,GPIO_FUNC_SPI);
//
	while(true){
		printf("Hello world!\n");
		sleep_ms(1000);
	}
}
