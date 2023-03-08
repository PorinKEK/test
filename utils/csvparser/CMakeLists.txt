
set(SRCS
    src/csvparser.cpp
)

set(HEADERS
    src/csvparser.h
)

add_library(csvparser SHARED ${SRCS} ${HEADERS})