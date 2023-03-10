#ifndef __CST816T_H
#define __CST816T_H

#include <stdint.h>
#include <stdbool.h>
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    bool inited;
    char product_id[1];
    uint16_t max_x_coord;
    uint16_t max_y_coord;
    uint8_t i2c_dev_addr;
} cst816t_status_t;


#define CST816T_ADDR 0X15
#define CST816T_I2C_SLAVE_ADDR   0x15



void cst816t_init(uint16_t dev_addr);
bool cst816t_read(lv_indev_drv_t *drv, lv_indev_data_t *data);

#endif

#ifdef __cplusplus
}
// #endif
#endif /* __CST816T_H */
