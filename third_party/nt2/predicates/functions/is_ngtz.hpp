//==============================================================================
//         Copyright 2003 - 2011   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2011   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_PREDICATES_FUNCTIONS_IS_NGTZ_HPP_INCLUDED
#define NT2_PREDICATES_FUNCTIONS_IS_NGTZ_HPP_INCLUDED

#include <boost/simd/predicates/include/functions/is_ngtz.hpp>
#include <nt2/include/functor.hpp>

/* Automatically generated for module core.base */

namespace nt2
{
  namespace tag
  {
    #ifdef DOXYGEN_ONLY
    /*! \brief Same as \classref{boost::simd::tag::is_ngtz_} **/
    struct is_ngtz_ {};
    #endif
    using boost::simd::tag::is_ngtz_;
  }

  #ifdef DOXYGEN_ONLY
  /*! \brief Same as \funcref{boost::simd::is_ngtz} **/
  template<class... Args>
  details::unspecified is_ngtz(Args&&... args);
  #endif
  using boost::simd::is_ngtz;
}

#endif
