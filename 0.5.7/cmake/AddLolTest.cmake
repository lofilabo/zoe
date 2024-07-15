INCLUDE(ParseArguments)

FUNCTION(ADD_LOL_TEST TEST_NAME)
  PARSE_ARGUMENTS(ARG "LOLCODE;OUTPUT;INPUT" "ERROR" ${ARGN})

  IF(NOT ARG_LOLCODE)
    SET(ARG_LOLCODE ${CMAKE_CURRENT_SOURCE_DIR}/test.lol)
  ENDIF(NOT ARG_LOLCODE)

  SET( TEST_COMMAND python ${CMAKE_SOURCE_DIR}/test/testDriver.py ${CMAKE_BINARY_DIR}/lci ${ARG_LOLCODE} )

  IF(ARG_OUTPUT)
    LIST(APPEND TEST_COMMAND -o=${CMAKE_CURRENT_SOURCE_DIR}/${ARG_OUTPUT})
  ENDIF(ARG_OUTPUT)

  IF(ARG_INPUT)
    LIST(APPEND TEST_COMMAND -i=${CMAKE_CURRENT_SOURCE_DIR}/${ARG_INPUT})
  ENDIF(ARG_INPUT)

  IF(ARG_ERROR)
    LIST(APPEND TEST_COMMAND -e)
  ENDIF(ARG_ERROR)

  IF(PERFORM_MEM_TESTS)
    LIST(APPEND TEST_COMMAND -m)
  ENDIF(PERFORM_MEM_TESTS)

  ADD_TEST(NAME ${TEST_NAME} COMMAND ${TEST_COMMAND})

ENDFUNCTION()
