#include <mbed.h>
#include "XBee.h"

int main() {

  XBee xbeecon(p13, p14);

  while(1) {
    uint8_t panIdRequestCode[2];

    panIdRequestCode[0] = (uint8_t)'I';
    panIdRequestCode[1] = (uint8_t)'D';

    AtCommandRequest panIdRequest(panIdRequestCode);
    xbeecon.send(panIdRequest);

    XBeeResponse response = xbeecon.getResponse();
}