/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "MCS-PROTOCOL-3"
 * 	found in "mcs.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy -fcompound-names -gen-PER`
 */

#ifndef	_CapabilitiesNotificationRequest_H_
#define	_CapabilitiesNotificationRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SeqOfRequestCapabilities;
struct NonStandardParameter;

/* CapabilitiesNotificationRequest */
typedef struct CapabilitiesNotificationRequest {
	BOOLEAN_t	 v2NodePresent;
	struct SeqOfRequestCapabilities	*addList	/* OPTIONAL */;
	struct SeqOfRequestCapabilities	*removeList	/* OPTIONAL */;
	struct CapabilitiesNotificationRequest__nonStandard {
		A_SEQUENCE_OF(struct NonStandardParameter) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonStandard;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CapabilitiesNotificationRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CapabilitiesNotificationRequest;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SeqOfRequestCapabilities.h"
#include "NonStandardParameter.h"

#endif	/* _CapabilitiesNotificationRequest_H_ */