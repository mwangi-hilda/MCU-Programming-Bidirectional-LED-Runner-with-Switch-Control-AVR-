#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

// LED setup (PORTF)
#define LED_DDR  DDRF
#define LED_PORT PORTF

// Switch setup (PORTD, PD0)
#define SWITCH_TERMINAL PD0   
#define SWITCH_DDR DDRD  // Data Direction Register
#define SWITCH_PORT PORTD // Output Register
#define SWITCH_PIN PIND  // Input Register (for reading)

int main(void) {
	// Set all PORTF pins as outputs (LEDs)
	LED_DDR = 0xFF;
	LED_PORT = 0x00; // Start with LEDs off

	// Set switch pin as input with pull-up
	SWITCH_DDR &= ~(1 << SWITCH_TERMINAL); // Input
	SWITCH_PORT |= (1 << SWITCH_TERMINAL); // Enable pull-up

	while (1) {
		if (!(bit_is_clear(SWITCH_PIN, 0))) { 
			for (int i = 6; i >= 0; i--) {    
				LED_PORT = (1 << i);         
				_delay_ms(500);                
			}
		}
		else { 
			for (int i = 0; i < 7; i++) {
				LED_PORT = (1 << i);         
				_delay_ms(500);          
			}
		}
	}
}