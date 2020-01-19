cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

set_target_properties(${TARGET} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)
if( NOT CMAKE_BUILD_TYPE )
  set( CMAKE_BUILD_TYPE Debug CACHE STRING
       "Choose the type of build, options are: None Debug Release RelWithDebInfo
MinSizeRel."
       FORCE )
endif()
add_executable(
    main
    main.cpp    
    IFigure.h
    CRectangle.h
    CRectangle.cpp
    CCircle.h
    CCircle.cpp
    CTriangle.h
    CTriangle.cpp
    CFigureFactory.h
    CFigureFactory.cpp
    )
