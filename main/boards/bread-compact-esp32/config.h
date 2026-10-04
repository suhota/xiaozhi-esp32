#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

#define AUDIO_INPUT_SAMPLE_RATE  16000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

// Simplex I2S Mode (Separate clocks for Mic & Amp)
#define AUDIO_I2S_METHOD_SIMPLEX

#ifdef AUDIO_I2S_METHOD_SIMPLEX

// Microphone (INMP441)
#define AUDIO_I2S_MIC_GPIO_WS   GPIO_NUM_4
#define AUDIO_I2S_MIC_GPIO_SCK  GPIO_NUM_5
#define AUDIO_I2S_MIC_GPIO_DIN  GPIO_NUM_6

// Speaker (MAX98357A)
#define AUDIO_I2S_SPK_GPIO_DOUT GPIO_NUM_7
#define AUDIO_I2S_SPK_GPIO_BCLK GPIO_NUM_15
#define AUDIO_I2S_SPK_GPIO_LRCK GPIO_NUM_16

#endif

// Buttons & LEDs (অব্যবহৃতগুলো NC রাখা নিরাপদ)
#define BOOT_BUTTON_GPIO        GPIO_NUM_0
#define TOUCH_BUTTON_GPIO       GPIO_NUM_NC
#define ASR_BUTTON_GPIO         GPIO_NUM_NC
#define BUILTIN_LED_GPIO        GPIO_NUM_NC

#define ML307_RX_PIN            GPIO_NUM_NC
#define ML307_TX_PIN            GPIO_NUM_NC

// OLED Display (SSD1306 128x64 I2C)
#define DISPLAY_SDA_PIN         GPIO_NUM_8
#define DISPLAY_SCL_PIN         GPIO_NUM_9
#define DISPLAY_WIDTH           128
#define DISPLAY_HEIGHT          64

#define DISPLAY_MIRROR_X        false
#define DISPLAY_MIRROR_Y        false

#define LAMP_GPIO               GPIO_NUM_NC

#endif // _BOARD_CONFIG_H_
