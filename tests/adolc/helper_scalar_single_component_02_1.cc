// ---------------------------------------------------------------------
//
// Copyright (C) 2016 - 2019 by the deal.II authors
//
// This file is part of the deal.II library.
//
// The deal.II library is free software; you can use it, redistribute
// it, and/or modify it under the terms of the GNU Lesser General
// Public License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full text of the license can be found in the file LICENSE at
// the top level of the deal.II distribution.
//
// ---------------------------------------------------------------------


// Evaluation of a single component (vector) system using a helper class
//
// AD number type: ADOL-C taped

#include "../tests.h"

#include "../ad_common_tests/helper_scalar_single_component_02.h"

int
main()
{
  initlog();

  deallog.push("Double");
  {
    test_vector<2, double, AD::NumberTypes::adolc_taped>();
    test_vector<3, double, AD::NumberTypes::adolc_taped>();
    deallog << "OK" << std::endl;
  }
  deallog.pop();

  deallog << "OK" << std::endl;
}
