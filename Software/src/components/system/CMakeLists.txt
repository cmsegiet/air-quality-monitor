set(COMPONENT_ADD_INCLUDEDIRS include)
set(COMPONENT_SRCS  "mics5524.c" 
                    "ssd1306.c"
                   )

set(COMPONENT_REQUIRES cexception main)

register_component()
