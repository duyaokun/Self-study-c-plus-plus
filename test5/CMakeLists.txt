aux_source_directory(. SOURCE_FILES)
file(GLOB HEADER_FILES "*.h")
add_executable(test5 ${HEADER_FILES} ${SOURCE_FILES})
