#ifndef PKCS11_OPENSC_H
#define PKCS11_OPENSC_H

/* OpenSC specific extensions */
/*
 * In PKCS#11 there is no CKA_ attribute dedicated to the NON-REPUDIATION flag.
 * We need this flag in PKCS#15/libopensc to make dinstinction between
 * 'signature' and 'qualified signature' key slots.
 */
#define CKA_OPENSC_NON_REPUDIATION      (CKA_VENDOR_DEFINED | 1UL)

/* GOSTR defines, not in PKCS#11 v2.20, move them here for now */
#define CKA_GOSTR3410_PARAMS            (0x250UL)
#define CKA_GOSTR3411_PARAMS            (0x251UL)
#define CKA_GOST28147_PARAMS            (0x252UL)

#define CKK_GOSTR3410           (0x30UL)

#define CKM_GOSTR3410_KEY_PAIR_GEN      (0x1200UL)
#define CKM_GOSTR3410                   (0x1201UL)
#define CKM_GOSTR3410_WITH_GOSTR3411    (0x1202UL)
#define CKM_GOSTR3411                   (0x1210UL)

#endif
