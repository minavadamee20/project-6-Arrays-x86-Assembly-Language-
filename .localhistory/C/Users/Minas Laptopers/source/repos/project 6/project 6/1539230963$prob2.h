#pragma once
#ifndef prob3_h
#define prob3_h
//working with a multidimensional array
int d[3][3][2] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
int counter1, total_all, medium_total, short_total, red_total;
void allShirts() {
	_asm {
		mov counter1, 0;
		mov eax, 0;
		lea esi, b;
	loopAllshirts:
		cmp counter1, 18;
		Je displayTotalAll;
		add eax, [esi];
		add esi, 4;
		inc counter1;
	}
}


#endif // !prob2_h
