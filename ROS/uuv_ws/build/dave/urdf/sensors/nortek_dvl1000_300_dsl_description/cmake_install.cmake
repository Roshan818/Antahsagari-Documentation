# Install script for directory: /home/roshan/uuv_ws/src/dave/urdf/sensors/nortek_dvl1000_300_dsl_description

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/roshan/uuv_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/roshan/uuv_ws/build/dave/urdf/sensors/nortek_dvl1000_300_dsl_description/catkin_generated/installspace/nortek_dvl1000_300_dsl_description.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nortek_dvl1000_300_dsl_description/cmake" TYPE FILE FILES
    "/home/roshan/uuv_ws/build/dave/urdf/sensors/nortek_dvl1000_300_dsl_description/catkin_generated/installspace/nortek_dvl1000_300_dsl_descriptionConfig.cmake"
    "/home/roshan/uuv_ws/build/dave/urdf/sensors/nortek_dvl1000_300_dsl_description/catkin_generated/installspace/nortek_dvl1000_300_dsl_descriptionConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nortek_dvl1000_300_dsl_description" TYPE FILE FILES "/home/roshan/uuv_ws/src/dave/urdf/sensors/nortek_dvl1000_300_dsl_description/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nortek_dvl1000_300_dsl_description" TYPE DIRECTORY FILES
    "/home/roshan/uuv_ws/src/dave/urdf/sensors/nortek_dvl1000_300_dsl_description/urdf"
    "/home/roshan/uuv_ws/src/dave/urdf/sensors/nortek_dvl1000_300_dsl_description/launch"
    REGEX "/[^/]*\\~$" EXCLUDE)
endif()

