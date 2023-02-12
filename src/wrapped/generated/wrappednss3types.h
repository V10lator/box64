/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.2.0.16) *
 *******************************************************************/
#ifndef __wrappednss3TYPES_H_
#define __wrappednss3TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef int64_t (*iFpp_t)(void*, void*);
typedef int64_t (*iFpIppp_t)(void*, int64_t, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(PK11_SetPasswordFunc, vFp_t) \
	GO(CERT_RegisterAlternateOCSPAIAInfoCallBack, iFpp_t) \
	GO(CERT_PKIXVerifyCert, iFpIppp_t)

#endif // __wrappednss3TYPES_H_
