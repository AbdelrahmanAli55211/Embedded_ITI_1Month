#ifndef _H_BIT_OPERATIONS
#define _H_BIT_OPERATIONS
#define clear_bit(reg,n) reg&=~(1<<n)
#define set_bit(reg,n) reg|=(1<<n)
#define toggle_bit(reg,n) reg^=(1<<n)
#define read_bit(reg,n) ( (reg & (1<<n))) >>n
#endif
