#pragma once
#ifndef prob1_h
#define prob1_h
#include <iostream>
int a[4][4] = { 10,20,30,40,20,10,40,30,5,15,20,25,30,25,20,15 };
int counter, total_shirts, total_large, total_black;
void totalShirts() {
	_asm {
		mov ebx, 0;
		lea esi, a;
		mov counter, 0;
	loop1:
		cmp counter, 16;
		Je display1;
		add ebx, [esi];
		add esi, 4;
		inc counter;
		Jmp loop1;
	display1:
		mov total_shirts, ebx;
	setUp2:
		mov ebx, 0;
		lea esi, a;
		mov counter, 0;
		add esi, 8;
	loopLarge: 
		cmp counter, 4;
		Je display2;
		add ebx, [esi];
		add esi, 16;
		inc counter;
		Jmp loopLarge;
	display2:
		mov total_large, ebx;
	setUp3:
		mov ebx, 0;
		lea esi, a;
		mov counter, 0;
		add esi,48;
	loop1:
		cmp counter, 4;
		Je display3;
		add ebx, [esi];
		add esi, 4;
		inc counter;
		Jmp loop1;
	display3:
		mov total_black, ebx;
	}//end of asm
	std::cout << "total amount of shirts: [ " << total_shirts << " ]." << std::endl;
	std::cout << "total amount of large shirts: [ " << total_large << " ]." << std::endl;
	std::cout << "total black shirts: [ " << total_black << " ]." << std::endl << std::endl << std::endl;
}//end of prob1 function																						

#endif // !prob1_h
