#ifndef _ATMEL_MXT144U_H_
#define _ATMEL_MXT144U_H_

#include <linux/i2c.h>
#include <atmel_mxt_tp.h>
#include <linux/interrupt.h>


static struct mxt_platform_data mxt_platform_data = {
    .irqflags = IRQF_TRIGGER_LOW, /*IRQF_TRIGGER_FALLING*/
    .num_keys = mxts_num_keys,
    .keymap = mxts_keys,
    //.t15_num_keys = 3,
    //.t15_keymap = mxt_keymap,
#if defined(CONFIG_MXT_REPORT_VIRTUAL_KEY_SLOT_NUM)
    .max_y_t = 1919,     //Max value of Touch AA, asix more than this value will process by VirtualKeyHit
    .vkey_space_ratio = {5,8,15,10},
#endif
#if defined(CONFIG_MXT_SELFCAP_TUNE)
    .config_array = mxt_config_array,
#endif
    .fw_version = "0501.fw",                        /* For B1070 fw */
    .cfg_kotl_s = "160719_tp_k.raw.s",
    .cfg_kotl_g = "160719_tp_k.raw.g",
    .cfg_lens_s = "160719_tp_l.raw.s",
    .cfg_lens_g = "160719_tp_l.raw.g",
    .lily_lotus_ktol_g = "160926_tp_k.raw.g",
};


#endif
