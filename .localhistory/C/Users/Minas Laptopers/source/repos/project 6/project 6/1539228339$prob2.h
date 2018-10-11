#pragma once
#ifndef prob3_h
#define prob3_h
//working with a multidimensional array
int a[3][4][2] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24 };
int counter, total;
void example() {
	_asm {
		mov counter, 0;
		mov ebx, 0;
		lea esi, a;
	}
}

#endif // !prob2_h
