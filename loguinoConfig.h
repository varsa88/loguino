// DEBUG
#define ENABLE_DEBUG
// Loguino can log at 5 different levels of verbosity, 1 is the lowest,
// and 5 is the highest.
#define DEBUG_LEVEL 5
#define DEBUG_SERIAL_DEV Serial
#define DEBUG_SERIAL_BAUD 115200

#define MIN_CYCLE_TIME 5000

//Config sensors

// DHT22
#define ENABLE_DHT_POLLER
#define DEBUG_DHT_POLLER
#define DHT_PIN 6
#define DHT_TYPE DHT22

//Analog Pins
#define ENABLE_ANALOG_POLLER
#define DEBUG_ANALOG_POLLER
// Vbat voltage
#define AP_SAMPLE_PIN_7
// #define AP_HOLD_PIN_7_HIGH // Enable to enable pull-up
#define AP_PIN_7_NAME "Vbat"

// GPS
#define ENABLE_GPS_POLLER
//#define DEBUG_GPS_POLLER
#define GPS_LED_PIN 13
#ifdef GPS_USE_SOFTSERIAL
    #define GPS_RX_PIN 8
    #define GPS_TX_PIN 9
    #define GPS_SERIAL_DEV GPS_SOFT_SERIAL
#else
    #define GPS_SERIAL_DEV Serial1
#endif
#define GPS_SERIAL_DEV_SPEED 9600

// SD Card
#define ENABLE_SD_LOGGER
#define DEBUG_SD_LOGGER
#define SD_CS_PIN 4
#define SD_ACTIVE_PIN 8

//#define ENABLE_SERIAL_LOGGER
//#define DEBUG_SERIAL_LOGGER
#ifdef ENABLE_DEBUG
// If enabled, the serial poller will not initialize the serial interface.
#define NO_SERIAL_INIT
#endif
#define SERIAL_LOGGER_BAUD 115200
#define SERIAL_LOGGER_DEVICE Serial
