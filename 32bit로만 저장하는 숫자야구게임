//숫자 야구게임을 비트로 저장한 미친 게임이다... 
//licence 오동현 배끼면 앞으로 개 망할거임 배끼지 않도록.. 
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

//0~2 U
#define set_Unibble(mem, index, value) ( mem = ( mem & ~( 0x0F << ( index * 4 ) ) ) | ( value << (index * 4) ) )
#define get_Unibble(mem, index) ((( mem >> ( index * 4  ) ) & 0x0F))
//0~2 P
#define set_Pnibble(mem, index, value) ( mem |= ( value << (( index * 4 ) + 12 ) ) )
#define get_Pnibble(mem, index) ( ( mem >> (( index * 4 ) + 12) & 0x0F))
//0 ball, 1 strike
#define set_2bit(mem, index, value) (mem = (mem & ~(0x03<<((index * 2)+24))) | (value << ((index * 2)+24)))
#define get_2bit(mem, index) (((mem >> ((index * 2)+24)) & 0x03))

uint32_t mem = 0, temp = 0;;

void init(void);
void input(void);
void process(void);

int main() {
    init();
	do {
		process();
	} while(get_2bit(mem, 1) != 3);
	printf("you did a great JOB!!");
	return 0;
}


void init(void) {
	srandom(time(NULL));
	char i = 2;
	do {
		temp = random()%10;
		// printf("%d ", temp); //init test checking
		if(get_Pnibble(mem, (i+1)%3) == temp || get_Pnibble(mem, (i+2)%3) == temp) {
			continue;
		} else {
			set_Pnibble(mem, i, temp);
			i--;
		}
	} while(i != -1);
}

void input(void) {
	for(int i=0; i<3; i++) { 
		scanf("%d", &temp);
		set_Unibble(mem, i, temp);
	}
	// printf("%d %d %d\n", get_Unibble(mem, 0), get_Unibble(mem, 1), get_Unibble(mem, 2)); //input test checking
}

void process(void) {
	set_2bit(mem, 0, 0); //ball
	set_2bit(mem, 1, 0); //strike
	input();
	for(char i=0; i<3; i++) {
		if(get_Pnibble(mem, i) == get_Unibble(mem, i)) set_2bit(mem, 1, get_2bit(mem,1)+1);
		if(get_Pnibble(mem, (i+1)%3) == get_Unibble(mem, i) || get_Pnibble(mem, (i+2)%3) == get_Unibble(mem, i)) set_2bit(mem, 0, get_2bit(mem,0)+1);
	}
	printf("S : %d, B : %d\n", get_2bit(mem, 1), get_2bit(mem, 0));
}
