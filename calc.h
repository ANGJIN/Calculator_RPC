/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALC_H_RPCGEN
#define _CALC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct CalcArgs {
	int a;
	int b;
};
typedef struct CalcArgs CalcArgs;

#define CALC_PROG 0x20151528
#define CALC_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define CALC_ADDITION 1
extern  int * calc_addition_1(CalcArgs *, CLIENT *);
extern  int * calc_addition_1_svc(CalcArgs *, struct svc_req *);
#define CALC_SUBSTRACTION 2
extern  int * calc_substraction_1(CalcArgs *, CLIENT *);
extern  int * calc_substraction_1_svc(CalcArgs *, struct svc_req *);
#define CALC_MULITIPLICATION 3
extern  int * calc_mulitiplication_1(CalcArgs *, CLIENT *);
extern  int * calc_mulitiplication_1_svc(CalcArgs *, struct svc_req *);
#define CALC_DIVISION 4
extern  int * calc_division_1(CalcArgs *, CLIENT *);
extern  int * calc_division_1_svc(CalcArgs *, struct svc_req *);
#define CALC_POWER 5
extern  int * calc_power_1(CalcArgs *, CLIENT *);
extern  int * calc_power_1_svc(CalcArgs *, struct svc_req *);
extern int calc_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define CALC_ADDITION 1
extern  int * calc_addition_1();
extern  int * calc_addition_1_svc();
#define CALC_SUBSTRACTION 2
extern  int * calc_substraction_1();
extern  int * calc_substraction_1_svc();
#define CALC_MULITIPLICATION 3
extern  int * calc_mulitiplication_1();
extern  int * calc_mulitiplication_1_svc();
#define CALC_DIVISION 4
extern  int * calc_division_1();
extern  int * calc_division_1_svc();
#define CALC_POWER 5
extern  int * calc_power_1();
extern  int * calc_power_1_svc();
extern int calc_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_CalcArgs (XDR *, CalcArgs*);

#else /* K&R C */
extern bool_t xdr_CalcArgs ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALC_H_RPCGEN */