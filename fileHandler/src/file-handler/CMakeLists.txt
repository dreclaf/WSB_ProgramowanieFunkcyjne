set(LIB_NAME FileHandler)
message(${LIB_NAME})

project(${LIB_NAME})
aux_source_directory(. SRC_FILES)
message(${SRC_FILES})

add_library(${LIB_NAME} SHARED ${SRC_FILES})
target_include_directories(${LIB_NAME} INTERFACE .)
