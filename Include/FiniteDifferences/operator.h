
/*
 * Copyright (C) 2000
 * Ferdinando Ametrano, Luigi Ballabio, Adolfo Benin, Marco Marchioro
 *
 * This file is part of QuantLib.
 * QuantLib is a C++ open source library for financial quantitative
 * analysts and developers --- http://quantlib.sourceforge.net/
 *
 * QuantLib is free software and you are allowed to use, copy, modify, merge,
 * publish, distribute, and/or sell copies of it under the conditions stated
 * in the QuantLib License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the license for more details.
 *
 * You should have received a copy of the license along with this file;
 * if not, contact ferdinando@ametrano.net
 *
 * QuantLib license is also available at http://quantlib.sourceforge.net/LICENSE.TXT
*/

/*! \file operator.h
    \brief base classes for differential operators

    $Source$
    $Name$
    $Log$
    Revision 1.4  2001/01/17 14:37:55  nando
    tabs removed

    Revision 1.3  2000/12/14 12:32:30  lballabio
    Added CVS tags in Doxygen file documentation blocks

*/

#ifndef quantlib_operator_h
#define quantlib_operator_h

#include "qldefines.h"

namespace QuantLib {

    namespace FiniteDifferences {

        class TimeConstantOperator {
          public:
            enum { isTimeDependent = 0 };
        };

        class TimeDependentOperator {
          public:
            enum { isTimeDependent = 1 };
        };

    }

}


#endif
