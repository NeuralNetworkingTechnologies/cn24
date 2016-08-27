/*
 * This file is part of the CN24 semantic segmentation software,
 * copyright (C) 2015 Clemens-Alexander Brust (ikosa dot de at gmail dot com).
 *
 * For licensing information, see the LICENSE file included with this project.
 */

#include "Config.h"
#include "Test.h"

namespace Conv {
  template void AssertEqual<datum>(datum expected, datum actual, std::string description);
  template void AssertEqual<int>(int expected, int actual, std::string description);
  template void AssertLess<datum>(datum expected, datum actual, std::string description);
  template void AssertLess<int>(int expected, int actual, std::string description);
  template void AssertGreater<datum>(datum expected, datum actual, std::string description);
  template void AssertGreater<int>(int expected, int actual, std::string description);
}
