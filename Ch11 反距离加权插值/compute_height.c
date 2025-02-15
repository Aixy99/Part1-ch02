#include "Ch11.h"



double computeH(PosArray* arr, Pos p, int n) {
	computeDistance(arr, p);

	double h = 0.0;
	double up = 0.0; // ����
	double down = 0.0; // ��ĸ
	//showPosArray(*arr);
	printf("%s ��ֵ�б�: ", p.pointName);
	for (int i = 0; i < n; i++) {
		up += arr->data[i].h * (1.0 / arr->data[i].distance);
		down += 1.0 / arr->data[i].distance;
		printf("%s ", arr->data[i].pointName);
	}
	printf("\n\n");
	h = up / down;
	return h;
}