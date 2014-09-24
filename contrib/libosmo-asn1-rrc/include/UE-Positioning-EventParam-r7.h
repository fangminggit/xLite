/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_Positioning_EventParam_r7_H_
#define	_UE_Positioning_EventParam_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReportingAmount.h"
#include <BOOLEAN.h>
#include "UE-Positioning-MeasurementInterval.h"
#include "UE-Positioning-EventSpecificInfo-r7.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-Positioning-EventParam-r7 */
typedef struct UE_Positioning_EventParam_r7 {
	ReportingAmount_t	 reportingAmount;
	BOOLEAN_t	 reportFirstFix;
	UE_Positioning_MeasurementInterval_t	 measurementInterval;
	UE_Positioning_EventSpecificInfo_r7_t	 eventSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_EventParam_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_EventParam_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_EventParam_r7_H_ */
#include <asn_internal.h>