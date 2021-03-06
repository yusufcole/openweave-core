/*
 *
 *    Copyright (c) 2018 Nest Labs, Inc.
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 *    @file
 *      This file contains an implementation of a trait data source for the
 *      Weave DeviceIdentityTrait.
 *
 */

#ifndef DEVICE_IDENTITY_TRAIT_DATA_SOURCE_H
#define DEVICE_IDENTITY_TRAIT_DATA_SOURCE_H

#include <Weave/Profiles/data-management/TraitData.h>

namespace nl {
namespace Weave {
namespace DeviceLayer {
namespace Internal {

/**
 *  @class DeviceIdentityTraitDataSource
 *
 *  @brief
 *    Implements a data source for the Weave DeviceIdentityTrait.
 *
 */
class DeviceIdentityTraitDataSource : public ::nl::Weave::Profiles::DataManagement_Current::TraitDataSource
{
public:
    DeviceIdentityTraitDataSource(void);

private:
    WEAVE_ERROR GetLeafData(::nl::Weave::Profiles::DataManagement_Current::PropertyPathHandle aLeafHandle, uint64_t aTagToWrite,
                    ::nl::Weave::TLV::TLVWriter & aWriter) __OVERRIDE;
};

} // Internal
} // Device
} // Weave
} // nl

#endif // DEVICE_IDENTITY_TRAIT_DATA_SOURCE_H
