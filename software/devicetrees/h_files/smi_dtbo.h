#ifndef __smi_dtbo_h__
#define __smi_dtbo_h__

#include <stdio.h>
#include <stdint.h>

uint8_t smi_dtbo[] = {
	0xD0, 0x0D, 0xFE, 0xED, 0x00, 0x00, 0x03, 0x69, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x02, 0xFC, 
	0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x6D, 0x00, 0x00, 0x02, 0xC4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x62, 0x72, 0x63, 0x6D, 
	0x2C, 0x62, 0x63, 0x6D, 0x32, 0x38, 0x33, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x66, 0x72, 0x61, 0x67, 0x6D, 0x65, 0x6E, 0x74, 0x40, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0B, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01, 
	0x5F, 0x5F, 0x6F, 0x76, 0x65, 0x72, 0x6C, 0x61, 0x79, 0x5F, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x12, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6C, 0x74, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x2A, 0x6F, 0x6B, 0x61, 0x79, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 
	0x66, 0x72, 0x61, 0x67, 0x6D, 0x65, 0x6E, 0x74, 0x40, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0B, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01, 
	0x5F, 0x5F, 0x6F, 0x76, 0x65, 0x72, 0x6C, 0x61, 0x79, 0x5F, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x73, 0x6D, 0x69, 0x5F, 0x70, 0x69, 0x6E, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 
	0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0C, 
	0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x18, 
	0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x3B, 
	0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 
	0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 
	0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 
	0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x03, 
	0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x53, 
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 
	0x00, 0x00, 0x00, 0x01, 0x5F, 0x5F, 0x73, 0x79, 0x6D, 0x62, 0x6F, 0x6C, 0x73, 0x5F, 0x5F, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x5B, 0x2F, 0x66, 0x72, 0x61, 
	0x67, 0x6D, 0x65, 0x6E, 0x74, 0x40, 0x31, 0x2F, 0x5F, 0x5F, 0x6F, 0x76, 0x65, 0x72, 0x6C, 0x61, 
	0x79, 0x5F, 0x5F, 0x2F, 0x73, 0x6D, 0x69, 0x5F, 0x70, 0x69, 0x6E, 0x73, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x5F, 0x5F, 0x66, 0x69, 0x78, 0x75, 0x70, 0x73, 
	0x5F, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x64, 
	0x2F, 0x66, 0x72, 0x61, 0x67, 0x6D, 0x65, 0x6E, 0x74, 0x40, 0x30, 0x3A, 0x74, 0x61, 0x72, 0x67, 
	0x65, 0x74, 0x3A, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x15, 
	0x00, 0x00, 0x00, 0x68, 0x2F, 0x66, 0x72, 0x61, 0x67, 0x6D, 0x65, 0x6E, 0x74, 0x40, 0x31, 0x3A, 
	0x74, 0x61, 0x72, 0x67, 0x65, 0x74, 0x3A, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
	0x00, 0x00, 0x00, 0x01, 0x5F, 0x5F, 0x6C, 0x6F, 0x63, 0x61, 0x6C, 0x5F, 0x66, 0x69, 0x78, 0x75, 
	0x70, 0x73, 0x5F, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x66, 0x72, 0x61, 0x67, 
	0x6D, 0x65, 0x6E, 0x74, 0x40, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x5F, 0x5F, 0x6F, 0x76, 
	0x65, 0x72, 0x6C, 0x61, 0x79, 0x5F, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x09, 0x63, 0x6F, 0x6D, 0x70, 
	0x61, 0x74, 0x69, 0x62, 0x6C, 0x65, 0x00, 0x74, 0x61, 0x72, 0x67, 0x65, 0x74, 0x00, 0x70, 0x69, 
	0x6E, 0x63, 0x74, 0x72, 0x6C, 0x2D, 0x6E, 0x61, 0x6D, 0x65, 0x73, 0x00, 0x70, 0x69, 0x6E, 0x63, 
	0x74, 0x72, 0x6C, 0x2D, 0x30, 0x00, 0x73, 0x74, 0x61, 0x74, 0x75, 0x73, 0x00, 0x62, 0x72, 0x63, 
	0x6D, 0x2C, 0x70, 0x69, 0x6E, 0x73, 0x00, 0x62, 0x72, 0x63, 0x6D, 0x2C, 0x66, 0x75, 0x6E, 0x63, 
	0x74, 0x69, 0x6F, 0x6E, 0x00, 0x62, 0x72, 0x63, 0x6D, 0x2C, 0x70, 0x75, 0x6C, 0x6C, 0x00, 0x70, 
	0x68, 0x61, 0x6E, 0x64, 0x6C, 0x65, 0x00, 0x73, 0x6D, 0x69, 0x5F, 0x70, 0x69, 0x6E, 0x73, 0x00, 
	0x73, 0x6D, 0x69, 0x00, 0x67, 0x70, 0x69, 0x6F, 0x00, 
};

#endif // __smi_dtbo_h__
