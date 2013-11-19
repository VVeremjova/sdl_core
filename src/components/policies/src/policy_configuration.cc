/**
 * @file policy_configuration.cc
 * @brief Policy configuration source file.
 */
// Copyright (c) 2013, Ford Motor Company
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// Redistributions of source code must retain the above copyright notice, this
// list of conditions and the following disclaimer.
//
// Redistributions in binary form must reproduce the above copyright notice,
// this list of conditions and the following
// disclaimer in the documentation and/or other materials provided with the
// distribution.
//
// Neither the name of the Ford Motor Company nor the names of its contributors
// may be used to endorse or promote products derived from this software
// without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 'A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#include "policies/policy_configuration.h"

namespace policies_ns = NsSmartDeviceLink::policies;

//----------------------------------------------------------------------------

policies_ns::PolicyConfiguration::PolicyConfiguration()
  : pt_file_name_()
  , preload_pt_file_name_() {
}

//-----------------------------------------------------------------------------

void policies_ns::PolicyConfiguration::set_pt_file_name(
    std::string pt_file_path) {
  pt_file_name_ = pt_file_path;
}

//-----------------------------------------------------------------------------

std::string policies_ns::PolicyConfiguration::pt_file_name() const {
  return pt_file_name_;
}

//-----------------------------------------------------------------------------

void policies_ns::PolicyConfiguration::set_preload_pt_file_name(
    std::string preload_pt_file_path) {
  preload_pt_file_name_ = preload_pt_file_path;
}

//-----------------------------------------------------------------------------

std::string policies_ns::PolicyConfiguration::preload_pt_file_name() const {
  return preload_pt_file_name_;
}