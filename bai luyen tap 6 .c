#include <stdio.h>

int main(){
	int m3;
	int tongTien;
	
	printf ("nhap so nuoc tieu thu: ");
	scanf ("%d",&m3);
	
	if (m3 < 0){
		printf ("so nuoc khong hop le");
	}
	else if (m3 <= 10){
		tongTien = 10 * 6000 + (m3 - 10) * 7000;
	}
	else if (m3 <= 30) {
        tongTien = 10 * 6000 + 10 * 7000 + (m3 - 20) * 8500;
    } 
    else {
        tongTien = 10 * 6000 + 10 * 7000 + 10 * 8500 + (m3 - 30) * 10000;
    }
     printf("so tien phai tra la: %d \n", tongTien);
	
	return 0;
}
