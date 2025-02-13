// Copyright (c) Konstantin Belyalov. All rights reserved.
// Licensed under the MIT license.

#ifndef __VEML6030_H
#define __VEML6030_H

#include "main.h"
#include <stdbool.h>

#include <stdint.h>

#ifdef __cplusplus
#define EXPORT extern "C"
#else
#define EXPORT
#endif

// ALS gain constants
#define REG_ALS_CONF_GAIN_1     (0x00 << 11) // x1 (default)
#define REG_ALS_CONF_GAIN_2     (0x01 << 11) // x2
#define REG_ALS_CONF_GAIN_1_8   (0x02 << 11) // x(1/8)
#define REG_ALS_CONF_GAIN_1_4   (0x03 << 11) // x(1/4)

// ALS integration times (ms)
#define REG_ALS_CONF_IT25       (0x0C << 6)
#define REG_ALS_CONF_IT50       (0x08 << 6)
#define REG_ALS_CONF_IT100      (0x00 << 6)
#define REG_ALS_CONF_IT200      (0x01 << 6)
#define REG_ALS_CONF_IT400      (0x02 << 6)
#define REG_ALS_CONF_IT800      (0x03 << 6)

#define COIN_TASK_SIZE 600
#define COIN_TASK_PRIORITY (configMAX_PRIORITIES-1)


// VEML6030 registers //
#define REG_ALS_CONF            0x00
#define REG_ALS_WH              0x01
#define REG_ALS_WL              0x02
#define REG_POWER_SAVING        0x03
#define REG_ALS                 0x04
#define REG_WHITE               0x05
#define REG_ALS_INT             0x06

// Register 0x0: ALS_CONF //
// ALS integration times - all bits
#define REG_ALS_CONF_IT_CLEAR   (0x0f << 6)
// ALS persistent protect number
#define REG_ALS_CONF_PERS_1     (0x00 << 4)
#define REG_ALS_CONF_PERS_2     (0x01 << 4)
#define REG_ALS_CONF_PERS_4     (0x02 << 4)
#define REG_ALS_CONF_PERS_8     (0x03 << 4)
// ALS interrupt enable
#define REG_ALS_CONF_IT_ENABLE  (0x01 << 1)
// ALS shutdown setting
#define REG_ALS_CONF_SHUTDOWN   0x01

// Register 0x3: POWER SAVING
// Power saving modes
#define REG_POWER_SAVING_PSM_1  (0x00 << 1)
#define REG_POWER_SAVING_PSM_2  (0x01 << 1)
#define REG_POWER_SAVING_PSM_3  (0x02 << 1)
#define REG_POWER_SAVING_PSM_4  (0x03 << 1)
#define PSM_MASK         (0x3 << 1)
#define PSM_EN           (1 << 0)  


#define VEML6030_I2C_ADDRESS 0x48
#define VEML6030_I2C_WRITE_ADDRESS 0x90
#define VEML6030_I2C_READ_ADDRESS 0x91
#endif


//Function declaration 
int32_t veml6030_init();
int32_t veml6030_read_white(uint16_t *white_data);
int32_t veml6030_read_als(uint16_t *als_data);
//static int32_t veml6030_read_register(uint8_t reg);
static int32_t veml6030_write_register(uint8_t reg, uint16_t value, uint8_t addr);
int32_t veml6030_read_register_als_white(uint8_t reg, uint8_t *buffer);
int32_t veml6030_read_register_als_white_cont(uint8_t reg, uint8_t *buffer);
double toLux(uint16_t total_num);
uint32_t veml6030_power_on();

double toLux(uint16_t total_num);

uint32_t veml6030_shutdown();


uint32_t veml6030_set_als_integration_time(uint16_t it);


uint16_t veml6030_get_als_integration_time();


uint32_t veml6030_set_als_gain(uint16_t gain);


uint16_t veml6030_get_als_gain();


uint32_t veml6030_set_psm(uint16_t psm);


uint16_t veml6030_get_psm();

uint32_t veml6030_int_en(uint16_t en);
//uint16_t veml6030_int_clear();
bool veml6030_read_res(double *resals, double *resw);

void vCoinDetectionTask(void *pvParametersr);