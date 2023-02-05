/*
 * init.h
 *
 * Created: 24.11.2022. 12:30:20
 *  Author: Aleksandar Bogdanovic
 */ 


#ifndef INIT_H_
#define INIT_H_

void init() {
	DDRB = (1 << PORTB0);
	PORTB = (1 << PORTB0);
}

#endif /* INIT_H_ */
