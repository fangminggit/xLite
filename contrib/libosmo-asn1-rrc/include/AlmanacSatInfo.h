/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_AlmanacSatInfo_H_
#define	_AlmanacSatInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "SatID.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AlmanacSatInfo */
typedef struct AlmanacSatInfo {
	long	 dataID;
	SatID_t	 satID;
	BIT_STRING_t	 e;
	BIT_STRING_t	 t_oa;
	BIT_STRING_t	 deltaI;
	BIT_STRING_t	 omegaDot;
	BIT_STRING_t	 satHealth;
	BIT_STRING_t	 a_Sqrt;
	BIT_STRING_t	 omega0;
	BIT_STRING_t	 m0;
	BIT_STRING_t	 omega;
	BIT_STRING_t	 af0;
	BIT_STRING_t	 af1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AlmanacSatInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AlmanacSatInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _AlmanacSatInfo_H_ */
#include <asn_internal.h>
