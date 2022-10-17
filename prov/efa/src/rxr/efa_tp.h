#ifndef _EFA_TP_H_
#define _EFA_TP_H_

#include "efa_tp_def.h"
#define efa_tracing(tp_name, ...)  lttng_ust_tracepoint(fi_efa_prov, tp_name, __VA_ARGS__)

#endif // _EFA_TP_H_
