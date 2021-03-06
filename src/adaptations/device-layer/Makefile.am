#
#    Copyright (c) 2014-2017 Nest Labs, Inc.
#    All rights reserved.
#
#    Licensed under the Apache License, Version 2.0 (the "License");
#    you may not use this file except in compliance with the License.
#    You may obtain a copy of the License at
#
#        http://www.apache.org/licenses/LICENSE-2.0
#
#    Unless required by applicable law or agreed to in writing, software
#    distributed under the License is distributed on an "AS IS" BASIS,
#    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#    See the License for the specific language governing permissions and
#    limitations under the License.
#

#
#    Description:
#      This file is the GNU automake template for the OpenWeave Device Layer
#      library.

include $(abs_top_nlbuild_autotools_dir)/automake/pre.am

if CONFIG_DEVICE_LAYER

lib_LIBRARIES                   		= libDeviceLayer.a

libDeviceLayer_a_CPPFLAGS        = \
    -I$(top_srcdir)/src/include    \
    $(LWIP_CPPFLAGS)               \
    $(SOCKETS_CPPFLAGS)            \
    $(NULL)

libDeviceLayer_a_SOURCES         = \
    AESBlockCipher.cpp                  \
    BLEManager.cpp                      \
    CASEAuth.cpp                        \
    ConfigurationManager.cpp            \
    ConnectivityManager.cpp             \
    DeviceControlServer.cpp             \
    DeviceDescriptionServer.cpp         \
    DeviceIdentityTraitDataSource.cpp   \
    EchoServer.cpp                      \
    Entropy.cpp                         \
    ESPUtils.cpp                        \
    FabricProvisioningServer.cpp        \
    Globals.cpp                         \
    Logging.cpp                         \
    NetworkInfo.cpp                     \
    NetworkProvisioningServer.cpp       \
    PlatformManager.cpp                 \
    ServiceDirectoryManager.cpp         \
    ServiceProvisioningServer.cpp       \
    ServiceTunnelAgent.cpp              \
    TestDeviceIds.cpp                   \
    Time.cpp                            \
    TimeSyncManager.cpp                 \
    TraitManager.cpp                    \
    Warm.cpp                            \
    trait-support/weave/trait/description/DeviceIdentityTrait.cpp \
    $(NULL)

EXTRA_DIST                       = \
    $(NULL)

endif # CONFIG_DEVICE_LAYER

include $(abs_top_nlbuild_autotools_dir)/automake/post.am
