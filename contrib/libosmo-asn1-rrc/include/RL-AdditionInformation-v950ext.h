/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RL_AdditionInformation_v950ext_H_
#define	_RL_AdditionInformation_v950ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SecondaryCellMIMOparametersFDD_v950ext;

/* RL-AdditionInformation-v950ext */
typedef struct RL_AdditionInformation_v950ext {
	struct SecondaryCellMIMOparametersFDD_v950ext	*targetCellPreconfigInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RL_AdditionInformation_v950ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RL_AdditionInformation_v950ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TargetCellPreconfigInfo-v950ext.h"

#endif	/* _RL_AdditionInformation_v950ext_H_ */
#include <asn_internal.h>
