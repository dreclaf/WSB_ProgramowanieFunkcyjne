set(DBHANDLER app)
project(${DBHANDLER})

aux_source_directory(. SRC_FILES)
add_executable(${DBHANDLER} ${SRC_FILES})