#ifndef SIM808_H_INCLUDED
#define SIM808_H_INCLUDED
#include <stdint.h>

/***************************************************************/
/**\name	DEBUGGING ENABLER       */
/***************************************************************/
#define SIMVERBOSE 1
#define SIMVERBOSE2 0


/***************************************************************/
/**\name	TYPE DEF'S      */
/***************************************************************/
typedef enum  {
    STATE_OFF,
    STATE_ON,
	STATE_INITIAL,
	STATE_START,
	STATE_CONFIG,
	STATE_GPRSACT,
	STATE_STATUS,
	STATE_CONNECTING,
	STATE_CONNECTED,
	STATE_CLOSING,
	STATE_CLOSED,
	STATE_PDPDEACT,
} tcp_state;

struct sim808_t {
    char * batteryPercentage;
    //add GPS longitude
    //add GPS latitude

};

void simInit(void);
void simSend(const char* data);
int simReceive(const uint8_t* data, uint8_t length);
uint8_t simAvailable(void);



#endif /* SIM808_H_INCLUDED */
