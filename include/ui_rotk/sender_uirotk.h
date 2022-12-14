#ifndef QOT_SENDER_H
#define QOT_SENDER_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

#define KEY_LENGTH 512
#define OUTPUT_LENGTH 128
#define PATH_MAX 8096

struct qot_sender
{
	int my_num;
	int other_player;
	unsigned int sender_OTkey[KEY_LENGTH];
};

typedef struct qot_sender OKDOT_SENDER;

void sender_okd (OKDOT_SENDER *); //call OKD service and read the output key
void sender_output (OKDOT_SENDER * , unsigned long long int * , unsigned long long int * , unsigned int * , unsigned int * , unsigned char (*)[OUTPUT_LENGTH/32]); //sample hash functions and set sender output
void deleteLine(FILE *srcFile, FILE *tempFile, const int line);

#ifdef __cplusplus
}
#endif

#endif //ifndef OT_SENDER_H
