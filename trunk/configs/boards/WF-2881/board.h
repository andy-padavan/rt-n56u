/* ASUS RT-N56U B1 */

#define BOARD_PID		"WF-2881"
#define BOARD_NAME		"WF-2881"
#define BOARD_DESC		"NETIS WF2881 Wireless Router"
#define BOARD_VENDOR_NAME	"NETIS"
#define BOARD_VENDOR_URL	"http://netiskorea.com/"
#define BOARD_MODEL_URL		"http://netiskorea.com/product.php?uid=50&model=WF2881"
#define BOARD_BOOT_TIME		30
#define BOARD_FLASH_TIME	120

#undef BOARD_GPIO_BTN_RESET
#define BOARD_GPIO_BTN_WPS	12

#undef  BOARD_GPIO_LED_ALL
#undef  BOARD_GPIO_LED_WIFI
#define BOARD_GPIO_LED_SW2G	14	/* soft led */
#define BOARD_GPIO_LED_SW5G	15	/* soft led */
#define BOARD_GPIO_LED_POWER	12
#define BOARD_GPIO_LED_LAN	16
#define BOARD_GPIO_LED_WAN	7

#define BOARD_GPIO_LED_USB	6

#undef  BOARD_GPIO_LED_ROUTER
#undef  BOARD_GPIO_PWR_USB
#define BOARD_HAS_5G_11AC	1
#define BOARD_NUM_ANT_5G_TX	2
#define BOARD_NUM_ANT_5G_RX	2
#define BOARD_NUM_ANT_2G_TX	2
#define BOARD_NUM_ANT_2G_RX	2
#define BOARD_NUM_ETH_LEDS	0
#define BOARD_HAS_EPHY_L1000	1
#define BOARD_HAS_EPHY_W1000	1
#define BOARD_NUM_UPHY_USB3	0
#define BOARD_USB_PORT_SWAP	0

