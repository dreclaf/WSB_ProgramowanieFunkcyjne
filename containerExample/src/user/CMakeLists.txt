set(USER User)
project(${USER})

aux_source_directory(. SRC_FILES)
add_library(${USER} SHARED ${SRC_FILES})

target_link_libraries(${USER} PUBLIC Utils)
target_include_directories(${USER} INTERFACE .)