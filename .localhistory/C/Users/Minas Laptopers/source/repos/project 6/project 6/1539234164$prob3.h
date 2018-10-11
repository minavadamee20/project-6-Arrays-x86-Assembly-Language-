#pragma once
#ifndef prob3_h
#define prob3_h
//working with a multidimensional array
int b[3][3][2] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
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
		Jmp loopAllshirts;
	displayTotalAll:
		mov total_all, eax;
	}
}//end of all shirts
void mediumShirts() {
	_asm {
		mov counter1, 0;
		mov eax, 0;
		lea esi, b;
		add esi, 8;
	LoopMedium:
		cmp counter1, 6;
		Je displayMedium;
		add eax, [esi];
		add esi, 12;
		inc counter1;
		Jmp LoopMedium;
	displayMedium:
		mov medium_total, eax;
	}
}//end of mediumshirts

void shortSleeve() {
	_asm {
		mov counter1, 0;
		mov eax, 0;
		lea esi, b;
		add esi, 16;
	LoopShort:
		cmp counter1, 3;
		Je displayShort;
		add eax, [esi];
		add esi, 4;
		inc counter1;
		Jmp LoopShort;
	displayShort:
	}
}//end of shortsleeve
void red() {
	_asm {
		mov counter1, 0;
		mov eax, 0;
		lea esi, b;
		add esi, 28;
	LoopRed:
		cmp counter1, 3;
		Je displayRed;
		add eax, [esi];
		add esi, 4;
		inc counter1;
		Jmp LoopRed;
	displayRed:
		mov red_total, eax;

	}
	std::cout << "total number of all shirts: [ " << total_all << " ]" << std::endl;
	std::cout << "total number of medium shirts: [ " << medium_total << " ]" << std::endl;
	std::cout << "total number of short sleeves: [ " << short_total << " ]" << std::endl;
	std::cout << "total number of red shirts: [ " << red_total << " ]" << std::endl;
}





#endif // !prob3_h
