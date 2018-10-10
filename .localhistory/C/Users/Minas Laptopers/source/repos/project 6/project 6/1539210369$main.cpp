#include <iostream>
int main() {
	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int total;
	_asm {
		mov ebx, 0;
		mov i, 0;
		lea esi;
	loop1:
		cmp i, 12;
		Je done;
		add ebx, [esi];
		add esi, 4;
		inc i;
		Jmp loop1;
	done:
		mov total, ebx;
	}
	std::cout << "total: [ " << total << " ]" << std::endl;
	system("pause");
	return 0;
}