#include<stdio.h>
#include<stdlib.h>
#define MAX_HEIGHT 41
struct box {
	int length, width, height;
};
typedef struct box box;
int get_volume(box b) {
	return b.length*b.width*b.height;
}
#if 0
int sort_box_height(box b) {
	if(b.height < 41)
		return 1;
	else
		return 0;
}
#else
int sort_box_height(box b) {
	return (b.height < MAX_HEIGHT)? 1 : 0;
}
#endif
int main()
{
	int n;
	scanf("%d",&n);
	box *boxes = malloc (n * sizeof(box));
	for(int i=0;i<n;i++) {
		scanf("%d%d%d",&boxes[i].length,&boxes[i].width,&boxes[i].height);
	}
	for(int i=0;i<n;i++) {
		if(sort_box_height(boxes[i]))
			printf("%d\n",get_volume(boxes[i]));
	}
	return 0;
}
