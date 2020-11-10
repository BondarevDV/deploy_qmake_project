#ifndef BDVLIB_H
#define BDVLIB_H

#include "bdvlib_global.h"
#include <qstringlist.h>
#include <qstring.h>

class BDVLIB_EXPORT Bdvlib
{
private:
    QStringList m_list_msg;
public:
    Bdvlib();
    int getCountMsg() const;
    QString list_msg(int index) const;
    void setList_msg(const QString msg);
};

#endif // BDVLIB_H
