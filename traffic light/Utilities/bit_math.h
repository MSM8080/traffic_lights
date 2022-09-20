/*
 * bit_math.h
 *
 * Created: 9/18/2022 3:17:39 PM
 *  Author: MSM
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

// set bit value to pin
#define SETBIT(reg,pin) (reg |= (1<<pin))
// clear bit value from pin
#define CLEARBIT(reg,pin) (reg &=(~ (1<<pin)))
// toggle bit value in pin
#define TOGGLEBIT(reg,pin) (reg ^= (1<<pin))
// get bit value from pin
#define GETBIT(reg,pin) ((reg & (1<<pin))>>pin)

#endif /* BIT_MATH_H_ */