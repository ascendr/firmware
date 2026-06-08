// Waveshare ESP32-S3-ETH
// Ethernet pin mapping follows Waveshare documentation.

#define HAS_GPS 0
#define HAS_SCREEN 1
#define HAS_WIRE 1

#define I2C_SDA 47
#define I2C_SCL 48

#define LED_PIN 21
#define LED_STATE_ON 1
#define BUTTON_PIN 0
#define BUTTON_NEED_PULLUP

// External SX1262 mapping (adjust if your module is wired differently).
#define USE_SX1262

#define LORA_SCK 41
#define LORA_MISO 40
#define LORA_MOSI 39
#define LORA_CS 42
#define LORA_RESET 45

#define SX126X_CS LORA_CS
#define SX126X_DIO1 16
#define SX126X_BUSY 17
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

#define HAS_ETHERNET 1
#define USE_WS5500 1

#define ETH_MISO_PIN 12
#define ETH_MOSI_PIN 11
#define ETH_SCLK_PIN 13
#define ETH_CS_PIN 14
#define ETH_INT_PIN 10
#define ETH_RST_PIN 9
#define ETH_ADDR 1
