// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------
// Copyright 2019 FZI Forschungszentrum Informatik
// Created on behalf of Universal Robots A/S
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!\file
 *
 * \author  Tristan Schnell schnell@fzi.de
 * \date    2019-04-09
 *
 */
//----------------------------------------------------------------------

#include "ur_client_library/rtde/control_package_pause.h"

namespace urcl
{
namespace rtde_interface
{
bool ControlPackagePause::parseWith(comm::BinParser& bp)
{
  bp.parse(accepted_);

  return true;
}
std::string ControlPackagePause::toString() const
{
  std::stringstream ss;
  ss << "accepted: " << static_cast<int>(accepted_);

  return ss.str();
}

size_t ControlPackagePauseRequest::generateSerializedRequest(uint8_t* buffer)
{
  return PackageHeader::serializeHeader(buffer, PackageType::RTDE_CONTROL_PACKAGE_PAUSE, PAYLOAD_SIZE);
}

}  // namespace rtde_interface
}  // namespace urcl
