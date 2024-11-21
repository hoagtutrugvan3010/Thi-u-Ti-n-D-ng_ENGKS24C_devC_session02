#include<stdio.h>
	int main(){
		
		//khai bao bien PI float ban kinh
		const float PI = 3.14;
		int radius = 5;
		//tinh chuvi va dien tich hinh tron
		float perimeter = PI * radius * 2;
		printf(" chu vi hinh tron la %d\n",perimeter);
		
		float acreage = PI * radius * radius;
		printf(" dien tich hinh tron la %d\n",acreage);
		
		return 0;
	}
