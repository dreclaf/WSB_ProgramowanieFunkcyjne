set(APP_NAME app)
project(${APP_NAME})

aux_source_directory(. SRC_FILES)
add_executable(${APP_NAME} ${SRC_FILES})