#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	const char filetype[10];
	printf("введите формат изображения:");
	scanf("%10s", &filetype);
	const char filename[60];
	printf("введите имя изображения:");
	scanf(" %[^\n]60s\n", &filename);
	char str[256];
	sprintf(str, "xclip -selection clipboard -t image/%s -i %60s.%s", &filetype, &filename, &filetype);
	system(str);
	return 0;
}
