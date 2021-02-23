/*//////////////////////////////////////////////////////////////////////////////
 * File:   lcs.c
 * Author: Emilio Gordillo 18062
 *
 * Proyecto SPI - DIGITAL 2
 * PIC Maestro
 */

#include "lcs.h"

void SYSTEM_Initialize(void) {
    PORTS_MANAGER_Initialize();
    LCD_Initialize();
    SPI_MANAGER_Initialize();
}