/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PriorityLevelList_r11_H_
#define	_PriorityLevelList_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PriorityLevel_r11;

/* PriorityLevelList-r11 */
typedef struct PriorityLevelList_r11 {
	A_SEQUENCE_OF(struct PriorityLevel_r11) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PriorityLevelList_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PriorityLevelList_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PriorityLevel-r11.h"

#endif	/* _PriorityLevelList_r11_H_ */
#include <asn_internal.h>
