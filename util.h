#pragma once
#define PATTERN_SINGLETON_IMPLEMENT(className) \
className *className::instance = NULL;\
className *className::getInstance()\
{\
	if (!instance)\
	{\
		printf("im in new:%p\n", instance);\
		instance = new className();\
	}\
	return instance;\
}

#define PATTERN_SINGLETON_DECLARE(className)\
public:\
	static className *getInstance();\
private:\
	static className *instance;

#define MAX(a, b) ((a) > (b) ? (a) : (b))



#define FLOG(fmt, ...) do{\
	FILE *fp = fopen("D:\\flog.txt", "a");\
	fprintf(fp, "[%s:%s:%d]:", __FILE__, __FUNCTION__, __LINE__);\
	fprintf(fp, fmt, ##__VA_ARGS__);\
	fclose(fp);\
	}while(0);