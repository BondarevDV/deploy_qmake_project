TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        test.cpp

HEADERS += \
    test.h


CONFIG(debug, debug|release) {
    message("Сборка в отладочном режиме...")
    build = build/debug

} else {
    message("Сборка релиза...")
    build = build/release
}


# каталог, куда ложить результирующий исполняемый файл
 DESTDIR = $${build}/bin
 # промежуточные файлы, созданные moc
 MOC_DIR = $$build/moc

 # объектные файлы
 OBJECTS_DIR = $$build/obj

 # промежуточные файлы, созданные компилятором
 # ресурсов Qt (rcc)
 RCC_DIR = $$build/rcc

 # промежуточные файлы, созданные компилятором
 # файлов форм (.ui) Qt (uic)
 UI_DIR = $$build/uic



#target.path= $$OUT_PWD
#target.files= *.o/*
#unix {
#    DESTDIR = $$OUT_PWD/release
#}
