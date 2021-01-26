#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "./st7789v/st7789v.h"

void app_main(void)
{
    lcd_init();
    lcd_show_string(0,0,"ESP32",COLOR_WHITE,COLOR_BLACK);
    lcd_show_string(0,8,"Lcd test",COLOR_WHITE,COLOR_BLACK);
    lcd_show_string(0,16,"Lcd ic: ST7789V",COLOR_WHITE,COLOR_BLACK);
    while (1)
    {
        vTaskDelay(100);
    }
}
