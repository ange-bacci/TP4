TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -lpthread

SOURCES += \
    Archivage.cpp \
    BD.cpp \
    Chrono.cpp \
    InterfaceDeSaisie.cpp \
    kbhit.cpp \
    main.cpp \
    systeme.cpp \
    alarme.cpp \
    porte.cpp \
    capteur.cpp \
    objettempo.cpp \
    clavier.cpp \
    voyant.cpp

HEADERS += \
    Archivage.h \
    BD.h \
    Chrono.h \
    InterfaceDeSaisie.h \
    kbhit.h \
    ObjetTempo.h \
    systeme.h \
    alarme.h \
    porte.h \
    capteur.h \
    clavier.h \
    voyant.h
