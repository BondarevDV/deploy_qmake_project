#include "bdvlib.h"

Bdvlib::Bdvlib()
{
}

int Bdvlib::getCountMsg() const
{
    return m_list_msg.count();
}

void Bdvlib::setList_msg(const QString msg)
{
    m_list_msg.append(msg);
}

QString Bdvlib::list_msg(int index) const
{
    return m_list_msg[index];
}
