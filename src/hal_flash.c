/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <zephyr.h>
#include <misc/printk.h>

#include "hal/hal_flash.h"

#if defined(CONFIG_BOARD_FRDM_K64F)
#define FLASH_ALIGN 8
#elif defined(CONFIG_BOARD_96B_CARBON)
#define FLASH_ALIGN 1
#else
#error "Board is currently not supported by bootloader"
#endif

/* All of the currently supported devices allow single byte writes. */
uint8_t hal_flash_align(uint8_t flash_id)
{
	return FLASH_ALIGN;
}
