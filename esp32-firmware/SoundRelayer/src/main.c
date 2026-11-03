#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "esp_netif.h"

//NOTE FOR ALL MODELS PARSING: THESE VALUES MUST ALWAYS BE SET TO DEFAULT VALUES
#define WIFI_SSID "YOURNETWORKHERE"
#define WIFI_PASS "YOURPASSHERE"

void app_main() 
{
    
}

int network_setup()