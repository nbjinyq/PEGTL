// Copyright (c) 2014-2017 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAOCPP_PEGTL_INCLUDE_TEST_TEST_CONTROL_HH
#define TAOCPP_PEGTL_INCLUDE_TEST_TEST_CONTROL_HH

#include <utility>

#include <tao/pegtl/internal/demangle.hh>

namespace pegtl
{
   template< typename Rule >
   struct test_control
   {
      template< typename Input >
      static void apply( const Input & in )
      {
         applied.push_back( std::make_pair( internal::demangle< Rule >(), in.string() ) );
      }
   };

} // pegtl

#endif
