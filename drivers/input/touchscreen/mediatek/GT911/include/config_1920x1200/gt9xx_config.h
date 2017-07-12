/* drivers/input/touchscreen/gt1x_generic.h
 *
 * 2010 - 2014 Goodix Technology.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be a reference
 * to you, when you are integrating the GOODiX's CTP IC into your system,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * Version: 1.0
 * Revision Record:
 *      V1.0:  first release. 2014/09/28.
 *
 */

#ifndef _GT9XX_CONFIG_H_
#define _GT9XX_CONFIG_H_

/***************************PART2:TODO define**********************************/
/*TODO: puts the config info corresponded to your TP here, the following is just
		a sample config, send this config should cause the chip can not work normally*/

/* TODO define your config for Sensor_ID == 0 here, if needed */
#define CTP_CFG_GROUP1 {\
0x4F,0x20,0x03,0x00,0x05,0x05,0x35,0x06,\
0x01,0x08,0x1E,0x0F,0x50,0x37,0x03,0x05,\
0x01,0x01,0x00,0x00,0x22,0x22,0x00,0x14,\
0x14,0x21,0x14,0x8C,0x2E,0x0E,0x32,0x34,\
0xD3,0x07,0x00,0x00,0x00,0x02,0x03,0x1D,\
0x00,0x01,0x00,0x00,0x00,0x03,0x64,0x32,\
0x00,0x00,0x00,0x1E,0x46,0x94,0xC5,0x02,\
0x07,0x00,0x00,0x04,0xAE,0x20,0x00,0x99,\
0x26,0x00,0x88,0x2D,0x00,0x79,0x36,0x00,\
0x6E,0x40,0x00,0x6E,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x1E,0x23,0x04,0x46,0x00,\
0x11,0x32,0x05,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x02,0x04,0x06,0x08,0x0A,0x0C,0x0E,0x10,\
0x12,0x14,0x16,0x18,0x1A,0x1C,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x14,0x13,\
0x12,0x10,0x0F,0x0C,0x0A,0x08,0x06,0x04,\
0x02,0x00,0x16,0x18,0x1C,0x1D,0x1E,0x1F,\
0x20,0x21,0x22,0x24,0x26,0x28,0x29,0x2A,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x53,0x01\
}

#define CTP_CFG_GROUP1_CHARGER {}

/* TODO puts your group2 config info here,if need. */
#define CTP_CFG_GROUP2 {}

/* TODO puts your group2 config info here,if need. */
#define CTP_CFG_GROUP2_CHARGER {}

/* TODO puts your group3 config info here,if need. */
#define CTP_CFG_GROUP3 {}

/* TODO puts your group3 config info here,if need. */
#define CTP_CFG_GROUP3_CHARGER {}

/* TODO: define your config for Sensor_ID == 3 here, if needed */
#define CTP_CFG_GROUP4 {}

/* TODO: define your config for Sensor_ID == 4 here, if needed */
#define CTP_CFG_GROUP5 {}

/* TODO: define your config for Sensor_ID == 5 here, if needed */
#define CTP_CFG_GROUP6 {}

#define TPD_CALIBRATION_MATRIX_ROTATION_NORMAL {4096, 0, 0, 0, 4096, 0, 0, 0}
#define TPD_CALIBRATION_MATRIX_ROTATION_FACTORY {4096, 0, 0, 0, 4096, 0, 0, 0}

#endif /* _GT1X_CONFIG_H_ */
