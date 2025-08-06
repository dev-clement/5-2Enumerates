#ifndef ERRORLEVEL_HPP
#define ERRORLEVEL_HPP

#include <QObject>

// class ErrorLevel: public QObject
class ErrorLevel {
    // Q_OBJECT
    Q_GADGET
public:
    //explicit ErrorLevel(QObject *po_parent = nullptr);
    explicit ErrorLevel() = default;

    enum ErrorValue {
        INFORMATION = 0
        , WARNING
        , DEBUG
        , MESSAGE
    };

    Q_ENUM(ErrorValue)
// signals:
};

#endif // ERRORLEVEL_HPP
