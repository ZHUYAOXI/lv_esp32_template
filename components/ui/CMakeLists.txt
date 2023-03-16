file(GLOB ui_src "*.c")
idf_component_register(SRCS ${ui_src}
                    INCLUDE_DIRS "."
                    REQUIRES lvgl driver)
