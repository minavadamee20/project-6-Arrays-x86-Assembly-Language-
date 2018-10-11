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
		Je display;
		add ebx, [esi];
		add esi, 4;
		inc counter;
		Jmp loop1;
	display:
		mov total_shirts, ebx;
	}
	std::cout << "total amount of shirts: [ " << total_shirts << " ]." << std::endl;
}//end totalShirts

void totalLargeShirts() {
	_asm {
		mov ebx, 0;
		lea esi, a;
		mov counter, 0;
		add esi, 8;
	loop2: 
		cmp counter, 4;
		Je display;
		add ebx, [esi];
		add esi, 16;
		inc counter;
		Jmp loop2;
	display:
		mov total_large, ebx;
	}
	std::cout << "total amount of large shirts: [ " << total_large << " ]." << std::endl;
}//end of totalLargeShirts

void totalBlack() {
	_asm {
		mov ebx, 0;
		lea esi, a;
		mov counter, 0;
		add esi,48;
	loop1:
		cmp counter, 4;
		Je display;
		add ebx, [esi];
		add esi, 4;
		inc counter;
		Jmp loop1;
	display:
		mov total_black, ebx;
	}
	std::cout << "total black shirts: [ " << total_black << " ]." << std::endl << std::endl << std::endl;
}//end of totalBlack

#endif // !prob1_h
