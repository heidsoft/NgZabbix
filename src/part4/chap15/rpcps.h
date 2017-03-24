/* rpcps.h
 *
 * Copyright (c) 2000 Sean Walton and Macmillan Publishers.  Use may be in
 * whole or in part in accordance to the General Public License (GPL).
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
*/

/*****************************************************************************/
/*** rpcps.h                                                               ***/
/***                                                                       ***/
/*****************************************************************************/

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _RPCPS_H_RPCGEN
#define _RPCPS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


typedef struct RowStruct *TRow;

typedef struct TableStruct *TTable;

struct RowStruct {
	char *Field;
	TRow Next;
};
typedef struct RowStruct RowStruct;

struct TableStruct {
	TRow Row;
	TTable Next;
};
typedef struct TableStruct TableStruct;

struct TableResult {
	int Err;
	union {
		TTable Table;
	} TableResult_u;
};
typedef struct TableResult TableResult;

#define RPCPS 2000100
#define PSVERSION 1

#if defined(__STDC__) || defined(__cplusplus)
#define GETPS 1
extern  TableResult * getps_1(char **, CLIENT *);
extern  TableResult * getps_1_svc(char **, struct svc_req *);
extern int rpcps_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define GETPS 1
extern  TableResult * getps_1();
extern  TableResult * getps_1_svc();
extern int rpcps_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_TRow (XDR *, TRow*);
extern  bool_t xdr_TTable (XDR *, TTable*);
extern  bool_t xdr_RowStruct (XDR *, RowStruct*);
extern  bool_t xdr_TableStruct (XDR *, TableStruct*);
extern  bool_t xdr_TableResult (XDR *, TableResult*);

#else /* K&R C */
extern bool_t xdr_TRow ();
extern bool_t xdr_TTable ();
extern bool_t xdr_RowStruct ();
extern bool_t xdr_TableStruct ();
extern bool_t xdr_TableResult ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_RPCPS_H_RPCGEN */