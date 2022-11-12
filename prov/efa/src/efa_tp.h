#ifndef _EFA_TP_H_
#define _EFA_TP_H_

#include <config.h>

#if HAVE_LTTNG
#include "efa_tp_def.h"
#define efa_tracing(tp_name, ...)  lttng_ust_tracepoint(EFA_TP_PROV, tp_name, __VA_ARGS__)
#else
#define efa_tracing(tp_name, ...)  while (0) {}
#endif

#endif // _EFA_TP_H_