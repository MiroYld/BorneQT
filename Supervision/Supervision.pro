QT       += core gui
QT       += sql
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    metier/user.cpp \
    model/dao/daouser.cpp \
    model/dbal/dbal.cpp \
    security/security.cpp \
    supervision.cpp

HEADERS += \
    metier/user.h \
    model/dao/daouser.h \
    model/dbal/dbal.h \
    security/security.h \
    supervision.h

FORMS += \
    security/security.ui \
    supervision.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ress.qrc

DISTFILES += \
    img/Academic-Hat.png \
    img/Add.png \
    img/Alert.png \
    img/BluRay.png \
    img/Bookmark.png \
    img/Books.png \
    img/CD.png \
    img/Calender.png \
    img/Camera.png \
    img/Carton.png \
    img/Cross.png \
    img/DVD.png \
    img/Delete.png \
    img/Documents-icon.png \
    img/Flashlight.png \
    img/Gift.png \
    img/Globe.png \
    img/Guitar.png \
    img/Hat-and-Magic-Wand.png \
    img/Hat.png \
    img/Home.png \
    img/ID.png \
    img/Info.png \
    img/Key.png \
    img/Magic-Wand.png \
    img/Mail.png \
    img/Map.png \
    img/Medal-Bronze.png \
    img/Medal-Gold.png \
    img/Medal-Silver.png \
    img/Mic.png \
    img/Minus.png \
    img/Notepad.png \
    img/Padlock.png \
    img/Pencil-and-Ruler.png \
    img/Pencil.png \
    img/Photos.png \
    img/Pin.png \
    img/Preferences.png \
    img/Printer.png \
    img/Ruler.png \
    img/Safe.png \
    img/Screw-Driver.png \
    img/Search-32.png \
    img/Search.png \
    img/Spanner.png \
    img/Tag.png \
    img/Tick.png \
    img/Ticket.png \
    img/Tools.png \
    img/Trash.png \
    img/User.png \
    img/darkBg.jpg \
    img/dnd.png \
    img/iconfinder_063_Undo_183192.png \
    img/iconfinder_Cancel_1493282.png \
    img/iconfinder_content-cut_326596.png \
    img/iconfinder_content-paste_326599.png \
    img/iconfinder_document-open_118911.png \
    img/iconfinder_editor-redo-arrow-reload-glyph_763333.png \
    img/iconfinder_floppy_285657.png \
    img/iconfinder_icon-2-mail-envelope-open_314274.png \
    img/iconfinder_icon-ios7-copy_211733.png \
    img/iconfinder_image_file_2639838.png \
    img/logo.jpg \
    img/logo.png \
    img/logo2.png \
    img/suitcase.png \
    img/th.png
