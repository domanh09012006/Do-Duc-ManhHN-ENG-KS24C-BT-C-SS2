#include<stdio.h>
int main(){
	
// Kieu so nguyen
	int Diem = 10; // Gioi han luu-2,147,483,648 -> 2,147,483,647 //kich thuoc 4 byte;
	short DiemKt = 8; // Gioi han luu-32,768 -> 32,767 //kich thuoc 2 byte;
	long long DiemThi = 6; // Gioi han luu-9223372036854775808 -> 9223372036854775807 //kich thuoc 8 byte;
// Kieu so thuc
	float DiemMieng = 8.5; // Gioi han luu 3.4E-38 -> 3.4E+38;
	double DiemTongKet = 6.5; // Gioi han luu 1.7E-308 -> 1.7E+308;
// Kieu ki tu(co the luu duoc ca so nguyen)
	char TenDuong = 'Hai Ba Trung'; // Gioi han luu-128 -> 127 //kich thuoc 1 byte
	
	printf("Diem %d\n", Diem);
	printf("Diem Kiem tra %hi\n ", DiemKt);
	printf("Diem Thi %lld\n", DiemThi);
	printf("Diem mieng %.1f\n", DiemMieng);
	printf("Diem Tong ket %.1lf\n", DiemTongKet);
	printf("Ten duong %c\n", TenDuong);
}
