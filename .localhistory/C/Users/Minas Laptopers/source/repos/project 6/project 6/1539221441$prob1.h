#pragma once
#ifndef prob1_h
#define prob1_h
#include <iostream>
int a[4][4] = { 10,20,30,40,20,10,40,30,5,15,20,25,30,25,20,15 };
int counter, total_shirts, total_large, total_black;
void totalShirts() {
	_asm {
		mov ebx, 0;
		mov lea, a;
		mov counter, 0;
	loop1:
		cmp counter, 16;
		Je display;
		add ebx, [esi];
		add esi, 4;
		inc counter;
		Jmp loop1;
	display:
		mov total_shirts, ebx;
	}
	std::cout << "total amount of shirts: [ " << total_shirts << " ]." << std::endl;
}

#endif // !prob1_h
