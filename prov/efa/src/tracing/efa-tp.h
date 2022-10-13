#undef LTTNG_UST_TRACEPOINT_PROVIDER
#define LTTNG_UST_TRACEPOINT_PROVIDER fi_efa_prov

#undef LTTNG_UST_TRACEPOINT_INCLUDE
#define LTTNG_UST_TRACEPOINT_INCLUDE "tracing/efa-tp.h"

#if !defined(_EFA_TP_H) || defined(LTTNG_UST_TRACEPOINT_HEADER_MULTI_READ)
#define _EFA_TP_H

#include <lttng/tracepoint.h>

LTTNG_UST_TRACEPOINT_EVENT(
    fi_efa_prov,
    efa_tracepoint,
    LTTNG_UST_TP_ARGS(
        int, msg_id,
        int, tx_id,
        int, rx_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, tx_id, tx_id)
        lttng_ust_field_integer(int, rx_id, rx_id)
    )
)

#endif

#include <lttng/tracepoint-event.h>