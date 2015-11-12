//==============================================================================
//         Copyright 2003 - 2012   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2012   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef BOOST_SIMD_ARITHMETIC_FUNCTIONS_SQR_HPP_INCLUDED
#define BOOST_SIMD_ARITHMETIC_FUNCTIONS_SQR_HPP_INCLUDED
#include <boost/simd/include/functor.hpp>
#include <boost/dispatch/include/functor.hpp>

namespace boost { namespace simd { namespace tag
  {
   /*!
      @brief  sqr generic tag

      Represents the sqr function in generic contexts.

      @par Models:
    **/
    struct sqr_ : ext::elementwise_<sqr_>
    {
      /// @brief Parent hierarchy
     typedef ext::elementwise_<sqr_> parent;
    };
  }
  /*!
    Computes the square of its parameter.

    @par semantic:
    For any given value @c x of type @c T:

    @code
    T r = sqr(x);
    @endcode

    is equivalent to:

    @code
    T r = x*x;
    @endcode

    @param  a0

    @return      a value of the same type as the input.

  **/
  BOOST_DISPATCH_FUNCTION_IMPLEMENTATION(tag::sqr_, sqr, 1)
} }

#endif


