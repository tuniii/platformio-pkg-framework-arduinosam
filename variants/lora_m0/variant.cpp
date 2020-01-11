/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

/*
 * Pins descriptions
 */
const PinDescription g_APinDescription[]=
{
  { PORTA,  2, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel0, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2 }, /* VREF_EN */
  { PORTA,  4, PIO_ANALOG, (PIN_ATTR_PWM|PIN_ATTR_TIMER), ADC_Channel4, PWM0_CH0, TCC0_CH0, EXTERNAL_INT_4 }, /* VBAT */
  { PORTA,  5, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), ADC_Channel5,PWM0_CH1,  TCC0_CH1, EXTERNAL_INT_5 }, /* MISO */
  { PORTA,  6, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), ADC_Channel6, PWM1_CH0, TCC1_CH0, EXTERNAL_INT_6 }, /* MOSI */
  { PORTA,  7, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), ADC_Channel7, PWM1_CH1, TCC1_CH1, EXTERNAL_INT_7 }, /* SCK */
  { PORTA,  8, PIO_TIMER, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), ADC_Channel16, PWM0_CH0, TCC0_CH0, EXTERNAL_INT_NMI }, /* NTC3 */
  { PORTA,  9, PIO_TIMER, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), ADC_Channel17, PWM0_CH1, TCC0_CH1, EXTERNAL_INT_9 }, /* NTC4 */
  { PORTA, 10, PIO_SERCOM, (PIN_ATTR_PWM|PIN_ATTR_TIMER), ADC_Channel18, PWM1_CH0, TCC1_CH0, EXTERNAL_INT_10 }, /* NTC1 */
  { PORTA, 11, PIO_SERCOM, (PIN_ATTR_PWM|PIN_ATTR_TIMER), ADC_Channel19, PWM1_CH1, TCC1_CH1, EXTERNAL_INT_11 }, /* NTC2 */
  { PORTA, 14, PIO_TIMER, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM3_CH0, TC3_CH0, EXTERNAL_INT_14 }, /* NSS */
  { PORTA, 27, PIO_TIMER, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_15 }, /* DIO0 */
  { PORTA, 28, PIO_TIMER, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_8 }, /* RFM_RESET */
  { PORTA, 24, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, /* D- */
  { PORTA, 25, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, /* D+ */
} ;

const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2, TC3, TC4, TC5 } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ;

