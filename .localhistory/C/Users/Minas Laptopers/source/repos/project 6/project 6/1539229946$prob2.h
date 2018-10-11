#pragma once
#ifndef prob3_h
#define prob3_h
//working with a multidimensional array
int d[3][4][2] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24 };
int counter1, total1;
void example() {
	_asm {
		mov counter1, 0;
		mov eax, 0;
		lea esi, d;
	loop1:
		cmp counter1, 24;
		Je display;
		add eax, [esi];
		add esi, 4;
		inc counter1;
		Jmp loop1;
	display:
		mov total1, eax;
	}
	std::cout << "the total amount of stuff in the 3-d array: [ " << total1 << " ]" << std::endl;
}

#endif // !prob2_h
