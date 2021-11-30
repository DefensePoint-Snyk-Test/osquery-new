/**
 * Copyright (c) 2014-present, The osquery authors
 *
 * This source code is licensed as defined by the LICENSE file found in the
 * root directory of this source tree.
 *
 * SPDX-License-Identifier: (Apache-2.0 OR GPL-2.0-only)
 */

#pragma once

#include <asm/unistd.h>

#include <set>

const std::set<int> kSocketEventsSyscalls = {
  __NR_bind,
  __NR_connect};