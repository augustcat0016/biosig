TEMPLATE = lib
TARGET = biosig
QMAKE_CC = $(CXX)
INCLUDEPATH += ./ \
               ./t210 \
               ./t220 \
               ./t230 \
               ./XMLParser
LIBS += -lz
CONFIG +=     warn_on \
    staticlib \
    debug

HEADERS += *.h \
  t210\*.h \
  t220\*.h \
  t230\*.h \
  XMLParser\*.h  
SOURCES +=  *.c \
  t210\*.c \
  t210\*.cpp \
  t220\*.c \
  t230\*.c \
  XMLParser\*.cpp