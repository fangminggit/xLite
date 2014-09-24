/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "MBMS-PTM-RBInformation-N.h"

static asn_TYPE_member_t asn_MBR_MBMS_PTM_RBInformation_N_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_PTM_RBInformation_N, shortTransmissionID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_ShortTransmissionID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"shortTransmissionID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_PTM_RBInformation_N, logicalChIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_LogicalChIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"logicalChIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_PTM_RBInformation_N, layer1_CombiningStatus),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"layer1-CombiningStatus"
		},
};
static ber_tlv_tag_t asn_DEF_MBMS_PTM_RBInformation_N_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MBMS_PTM_RBInformation_N_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* shortTransmissionID at 22295 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* logicalChIdentity at 22296 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* layer1-CombiningStatus at 22297 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MBMS_PTM_RBInformation_N_specs_1 = {
	sizeof(struct MBMS_PTM_RBInformation_N),
	offsetof(struct MBMS_PTM_RBInformation_N, _asn_ctx),
	asn_MAP_MBMS_PTM_RBInformation_N_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_PTM_RBInformation_N = {
	"MBMS-PTM-RBInformation-N",
	"MBMS-PTM-RBInformation-N",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_MBMS_PTM_RBInformation_N_tags_1,
	sizeof(asn_DEF_MBMS_PTM_RBInformation_N_tags_1)
		/sizeof(asn_DEF_MBMS_PTM_RBInformation_N_tags_1[0]), /* 1 */
	asn_DEF_MBMS_PTM_RBInformation_N_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_PTM_RBInformation_N_tags_1)
		/sizeof(asn_DEF_MBMS_PTM_RBInformation_N_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MBMS_PTM_RBInformation_N_1,
	3,	/* Elements count */
	&asn_SPC_MBMS_PTM_RBInformation_N_specs_1	/* Additional specs */
};
