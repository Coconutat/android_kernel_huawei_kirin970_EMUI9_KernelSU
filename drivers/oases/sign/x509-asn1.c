/*
 * Automatically generated by asn1_compiler.  Do not edit
 *
 * ASN.1 parser for x509
 */

#include "asn1_ber_bytecode.h"
#include "x509-asn1.h"

enum x509_actions {
	ACT_x509_extract_key_data = 0,
	ACT_x509_extract_name_segment = 1,
	ACT_x509_note_OID = 2,
	ACT_x509_note_issuer = 3,
	ACT_x509_note_not_after = 4,
	ACT_x509_note_not_before = 5,
	ACT_x509_note_pkey_algo = 6,
	ACT_x509_note_signature = 7,
	ACT_x509_note_subject = 8,
	ACT_x509_note_tbs_certificate = 9,
	ACT_x509_process_extension = 10,
	NR__x509_actions = 11
};

static const asn1_action_t x509_action_table[NR__x509_actions] = {
	[   0] = oases_x509_extract_key_data,
	[   1] = oases_x509_extract_name_segment,
	[   2] = oases_x509_note_OID,
	[   3] = oases_x509_note_issuer,
	[   4] = oases_x509_note_not_after,
	[   5] = oases_x509_note_not_before,
	[   6] = oases_x509_note_pkey_algo,
	[   7] = oases_x509_note_signature,
	[   8] = oases_x509_note_subject,
	[   9] = oases_x509_note_tbs_certificate,
	[  10] = oases_x509_process_extension,
};

static const unsigned char x509_machine[] = {
	// Certificate
	[   0] = ASN1_OP_MATCH,
	[   1] = _tag(UNIV, CONS, SEQ),
	// TBSCertificate
	[   2] =  ASN1_OP_MATCH,
	[   3] =  _tag(UNIV, CONS, SEQ),
	[   4] =   ASN1_OP_MATCH_JUMP_OR_SKIP,		// version
	[   5] =   _tagn(CONT, CONS,  0),
	[   6] =   _jump_target(68),
	// CertificateSerialNumber
	[   7] =   ASN1_OP_MATCH,
	[   8] =   _tag(UNIV, PRIM, INT),
	// AlgorithmIdentifier
	[   9] =   ASN1_OP_MATCH_JUMP,
	[  10] =   _tag(UNIV, CONS, SEQ),
	[  11] =   _jump_target(72),		// --> AlgorithmIdentifier
	[  12] =   ASN1_OP_ACT,
	[  13] =   _action(ACT_x509_note_pkey_algo),
	// Name
	[  14] =   ASN1_OP_MATCH_JUMP,
	[  15] =   _tag(UNIV, CONS, SEQ),
	[  16] =   _jump_target(78),		// --> Name
	[  17] =   ASN1_OP_ACT,
	[  18] =   _action(ACT_x509_note_issuer),
	// Validity
	[  19] =   ASN1_OP_MATCH,
	[  20] =   _tag(UNIV, CONS, SEQ),
	// Time
	[  21] =    ASN1_OP_MATCH_OR_SKIP,		// utcTime
	[  22] =    _tag(UNIV, PRIM, UNITIM),
	[  23] =    ASN1_OP_COND_MATCH_OR_SKIP,		// generalTime
	[  24] =    _tag(UNIV, PRIM, GENTIM),
	[  25] =    ASN1_OP_COND_FAIL,
	[  26] =    ASN1_OP_ACT,
	[  27] =    _action(ACT_x509_note_not_before),
	// Time
	[  28] =    ASN1_OP_MATCH_OR_SKIP,		// utcTime
	[  29] =    _tag(UNIV, PRIM, UNITIM),
	[  30] =    ASN1_OP_COND_MATCH_OR_SKIP,		// generalTime
	[  31] =    _tag(UNIV, PRIM, GENTIM),
	[  32] =    ASN1_OP_COND_FAIL,
	[  33] =    ASN1_OP_ACT,
	[  34] =    _action(ACT_x509_note_not_after),
	[  35] =   ASN1_OP_END_SEQ,
	// Name
	[  36] =   ASN1_OP_MATCH_JUMP,
	[  37] =   _tag(UNIV, CONS, SEQ),
	[  38] =   _jump_target(78),		// --> Name
	[  39] =   ASN1_OP_ACT,
	[  40] =   _action(ACT_x509_note_subject),
	// SubjectPublicKeyInfo
	[  41] =   ASN1_OP_MATCH,
	[  42] =   _tag(UNIV, CONS, SEQ),
	// AlgorithmIdentifier
	[  43] =    ASN1_OP_MATCH_JUMP,
	[  44] =    _tag(UNIV, CONS, SEQ),
	[  45] =    _jump_target(72),		// --> AlgorithmIdentifier
	[  46] =    ASN1_OP_MATCH_ACT,		// subjectPublicKey
	[  47] =    _tag(UNIV, PRIM, BTS),
	[  48] =    _action(ACT_x509_extract_key_data),
	[  49] =   ASN1_OP_END_SEQ,
	// UniqueIdentifier
	[  50] =   ASN1_OP_MATCH_OR_SKIP,
	[  51] =   _tagn(CONT, PRIM,  1),
	// UniqueIdentifier
	[  52] =   ASN1_OP_MATCH_OR_SKIP,
	[  53] =   _tagn(CONT, PRIM,  2),
	[  54] =   ASN1_OP_MATCH_JUMP_OR_SKIP,		// extensions
	[  55] =   _tagn(CONT, CONS,  3),
	[  56] =   _jump_target(93),
	[  57] =  ASN1_OP_END_SEQ,
	[  58] =  ASN1_OP_ACT,
	[  59] =  _action(ACT_x509_note_tbs_certificate),
	// AlgorithmIdentifier
	[  60] =  ASN1_OP_MATCH_JUMP,
	[  61] =  _tag(UNIV, CONS, SEQ),
	[  62] =  _jump_target(72),		// --> AlgorithmIdentifier
	[  63] =  ASN1_OP_MATCH_ACT,		// signature
	[  64] =  _tag(UNIV, PRIM, BTS),
	[  65] =  _action(ACT_x509_note_signature),
	[  66] = ASN1_OP_END_SEQ,
	[  67] = ASN1_OP_COMPLETE,

	// Version
	[  68] =  ASN1_OP_MATCH,
	[  69] =  _tag(UNIV, PRIM, INT),
	[  70] = ASN1_OP_END_SEQ,
	[  71] = ASN1_OP_RETURN,

	[  72] =  ASN1_OP_MATCH_ACT,		// algorithm
	[  73] =  _tag(UNIV, PRIM, OID),
	[  74] =  _action(ACT_x509_note_OID),
	[  75] =  ASN1_OP_MATCH_ANY,		// parameters
	[  76] = ASN1_OP_END_SEQ,
	[  77] = ASN1_OP_RETURN,

	// RelativeDistinguishedName
	[  78] =  ASN1_OP_MATCH,
	[  79] =  _tag(UNIV, CONS, SET),
	// AttributeValueAssertion
	[  80] =   ASN1_OP_MATCH,
	[  81] =   _tag(UNIV, CONS, SEQ),
	[  82] =    ASN1_OP_MATCH_ACT,		// attributeType
	[  83] =    _tag(UNIV, PRIM, OID),
	[  84] =    _action(ACT_x509_note_OID),
	[  85] =    ASN1_OP_MATCH_ANY_ACT,		// attributeValue
	[  86] =    _action(ACT_x509_extract_name_segment),
	[  87] =   ASN1_OP_END_SEQ,
	[  88] =  ASN1_OP_END_SET_OF,
	[  89] =  _jump_target(80),
	[  90] = ASN1_OP_END_SEQ_OF,
	[  91] = _jump_target(78),
	[  92] = ASN1_OP_RETURN,

	// Extensions
	[  93] =  ASN1_OP_MATCH,
	[  94] =  _tag(UNIV, CONS, SEQ),
	// Extension
	[  95] =   ASN1_OP_MATCH,
	[  96] =   _tag(UNIV, CONS, SEQ),
	[  97] =    ASN1_OP_MATCH_ACT,		// extnid
	[  98] =    _tag(UNIV, PRIM, OID),
	[  99] =    _action(ACT_x509_note_OID),
	[ 100] =    ASN1_OP_MATCH_OR_SKIP,		// critical
	[ 101] =    _tag(UNIV, PRIM, BOOL),
	[ 102] =    ASN1_OP_MATCH_ACT,		// extnValue
	[ 103] =    _tag(UNIV, PRIM, OTS),
	[ 104] =    _action(ACT_x509_process_extension),
	[ 105] =   ASN1_OP_END_SEQ,
	[ 106] =  ASN1_OP_END_SEQ_OF,
	[ 107] =  _jump_target(95),
	[ 108] = ASN1_OP_END_SEQ,
	[ 109] = ASN1_OP_RETURN,
};

const struct asn1_decoder oases_x509_decoder = {
	.machine = x509_machine,
	.machlen = sizeof(x509_machine),
	.actions = x509_action_table,
};
