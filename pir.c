#include <avr/io.h>
#include <util/delay.h>

// Set PIR sensor as input at pin 7
#define PIR PD7

int main(void) {
	// Set pin 13 as output
	DDRB |= _BV(DDB5);
	
	while(1) {
		// Check state of sensor
		int state = (PIND & (1 << PIR));
		// If PIR detects motion (1), then turn on light for 1 second
		if (state != 0) {
			PORTB |= _BV(PORTB5);
			_delay_ms(100);
		}
		// Make sure LED is off for next check
		PORTB &= ~_BV(PORTB5);
	}
	return 0;
}

