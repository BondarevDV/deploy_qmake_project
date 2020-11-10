#ifndef BDVLIB_GLOBAL_H
#define BDVLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BDVLIB_LIBRARY)
#  define BDVLIB_EXPORT Q_DECL_EXPORT
#else
#  define BDVLIB_EXPORT Q_DECL_IMPORT
#endif

#endif // BDVLIB_GLOBAL_H
