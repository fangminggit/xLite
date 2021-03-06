/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PRACH_PreambleForEnhancedUplinkExt_H_
#define	_PRACH_PreambleForEnhancedUplinkExt_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AvailableSignatures.h"
#include "PreambleScramblingCodeWordNumber.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AICH_Info_Compressed;

/* PRACH-PreambleForEnhancedUplinkExt */
typedef struct PRACH_PreambleForEnhancedUplinkExt {
	AvailableSignatures_t	 availableSignatures;
	PreambleScramblingCodeWordNumber_t	 preambleScramblingCodeWordNumber;
	struct AICH_Info_Compressed	*aich_Info	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_PreambleForEnhancedUplinkExt_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_PreambleForEnhancedUplinkExt;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AICH-Info-Compressed.h"

#endif	/* _PRACH_PreambleForEnhancedUplinkExt_H_ */
#include <asn_internal.h>
