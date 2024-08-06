#include <stdio.h>

int main() {
	int thang;
	printf("nhap thang:");
	scanf("%d", &thang);
	if((thang<1) && (thang>12)){
		printf("Thang ko hop le");
		}
		else
	{switch (thang){
		case1:case2:case3:case4:case5:case6:case7:
		case8:case9:case10:case11:case12:
		printf("thang %d co 31 ngay",thang);
		break;
		case 2:
			int nam;
			printf("nhap nam");
			scanf("%d",&nam);
			if((nam %4==0 && nam%100!=0)||(nam %400==0))
			printf("Thangs 2 nam %d co 29 ngay",nam);
			else
			printf("Thang 2 nam %d cos 28 ngay",nam);
			break;
	default :
		printf("Thang %d co 30 ngay",nam);
		
}
return 0;
	}