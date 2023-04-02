set(UTILS Utils)
project(${UTILS})

aux_source_directory(. SRC_FILES)
add_library(${UTILS} SHARED ${SRC_FILES})

target_include_directories(${UTILS} INTERFACE .)