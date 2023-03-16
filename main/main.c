#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "lvgl/lvgl.h"
#include "lv_port_disp.h"
#include "demos/lv_demos.h"
// #include "ui/ui.h"//ui写好取消注释
static void lvtickTask(void *arg);

void app_main(void)
{
   lv_init();
   lv_port_disp_init();
   // lv_port_indev_init();//有触屏等设备再启用
   xTaskCreate(lvtickTask, "lvtickTask", 1024 * 4, NULL, configMAX_PRIORITIES, NULL);

   lv_demo_benchmark();
   // ui_init();//ui写好取消注释
   while (1)
   {
      lv_task_handler();
      vTaskDelay(pdMS_TO_TICKS(10));
   }
}

static void lvtickTask(void *arg)
{
   while (1)
   {
      lv_tick_inc(5);
      vTaskDelay(pdMS_TO_TICKS(10));
   }
}
