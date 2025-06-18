# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\primecounter_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\primecounter_autogen.dir\\ParseCache.txt"
  "primecounter_autogen"
  )
endif()
