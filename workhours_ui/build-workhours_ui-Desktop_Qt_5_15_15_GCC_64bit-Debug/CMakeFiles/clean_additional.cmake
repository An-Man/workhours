# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/workhours_ui_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/workhours_ui_autogen.dir/ParseCache.txt"
  "workhours_ui_autogen"
  )
endif()
