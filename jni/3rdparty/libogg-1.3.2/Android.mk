# Copyright (C) 2009 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

##########################################
# Reference : to resolve config_types.h related errors
# https://github.com/vincentjames501/libvorbis-libogg-android/blob/master/jni/include/ogg/config_types.h
##########################################

include $(CLEAR_VARS)

LOCAL_MODULE    := libogg


LOCAL_CFLAGS   := -Werror


LOCAL_C_INCLUDES :=	jni/3rdParty/libogg-1.3.2/include

LOCAL_SRC_FILES :=	3rdParty/libogg-1.3.2/src/bitwise.c	\
			3rdParty/libogg-1.3.2/src/framing.c


include $(BUILD_STATIC_LIBRARY)
