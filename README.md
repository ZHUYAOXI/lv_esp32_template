| Supported Targets | ESP32 | ESP32-C2 | ESP32-C3 | ESP32-S2 | ESP32-S3 |
| ----------------- | ----- | -------- | -------- | -------- | -------- |

# 设置目标芯片

idf.py set-target esp32s3

# 配置显示

idf.py menuconfig
配置屏幕类型、引脚、时钟、LVGL
# 编译烧写

idf.py build flash -p comx monitor
