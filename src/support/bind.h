// -*- C++ -*-
/**
 * \file bind.h
 * This file is part of LyX, the document processor.
 * Licence details can be found in the file COPYING.
 *
 * \author Peter Kümmel
 *
 * Full author contact details are available in file CREDITS.
 */

#ifndef LYX_BIND_H
#define LYX_BIND_H

#if defined(_MSC_VER) && (_MSC_VER >= 1600)

#include <functional>
using std::tr1::bind;
using std::tr1::placeholders::_1;
using std::tr1::placeholders::_2;
using std::tr1::ref;

#else

#include "support/bind.h"
using boost::bind;
using boost::_1;
using boost::_2;
using boost::ref;

#endif


#endif