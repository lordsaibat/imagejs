#include "bmp.h"

char *bmp_js(char *content, int size){
	char _bmp_header[BMP_JS_HEADER] = {0x42, 0x4d, 0x3d, 0x30, 0x3b, 0x2f, 0x2f, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x13, 0x0b, 0x00, 0x00, 0x13, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x47, 0x52, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0a};//, 0x2a, 0x2f, 0x3d, 0x30, 0x3b, 0x0a};
	char *buffer = (char*)malloc(BMP_JS_HEADER + size);
	for(int i = 0; i < BMP_JS_HEADER; i++){
		buffer[i] = _bmp_header[i];
	}
	for(int i = 0; i < size; i++){
		buffer[i + BMP_JS_HEADER] = content[i];
	}
	return buffer;
}
