cmake_minimum_required(VERSION 2.8)
project(zoe)

ENABLE_TESTING()
SET(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake )

SET(PERFORM_MEM_TESTS FALSE CACHE BOOL "Whether or not to enable memory testing")
MARK_AS_ADVANCED(PERFORM_MEM_TESTS)

IF(${PERFORM_MEM_TESTS})
  find_program(VALGRIND valgrind)
  IF(NOT VALGRIND)
    message(FATAL_ERROR 
"
  Error: You've enabled memory testing but we can't find valgrind
  Try one of the following: 
  1: Make sure valgrind is in your PATH 
  2: Install valgrind if you already haven't 
  3: Disable memory testing
")
  ENDIF(NOT VALGRIND)
ENDIF(${PERFORM_MEM_TESTS})

SET(HDRS 
  interpreter.h
  lexer.h
  parser.h
  tokenizer.h
  unicode.h
  error.h
  binding.h
  inet.h
  unacceptable.h
)

SET(SRCS
  interpreter.c
  lexer.c
  main.c
  parser.c
  tokenizer.c
  unicode.c
  error.c
  binding.c
  inet.c
  unacceptable.c
)

add_executable(zoe ${SRCS} ${HDRS})
target_link_libraries(zoe m ncurses readline)
#add_subdirectory(test)
install(
  TARGETS zoe
  RUNTIME DESTINATION bin
)

find_package(Doxygen)
if(DOXYGEN_FOUND)
  add_custom_target(docs
  ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  COMMENT "Generating API documentation with Doxygen" VERBATIM
  )
else(DOXYGEN_FOUND)
  message(WARNING 
    "Couldn't find doxygen. You won't be able to generate documentation now")
endif(DOXYGEN_FOUND)
