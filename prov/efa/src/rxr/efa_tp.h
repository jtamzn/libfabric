#undef LTTNG_UST_TRACEPOINT_PROVIDER
#define LTTNG_UST_TRACEPOINT_PROVIDER fi_efa_prov

#undef LTTNG_UST_TRACEPOINT_INCLUDE
#define LTTNG_UST_TRACEPOINT_INCLUDE "rxr/efa_tp.h"

#if !defined(_EFA_TP_H) || defined(LTTNG_UST_TRACEPOINT_HEADER_MULTI_READ)
#define _EFA_TP_H

#include <lttng/tracepoint.h>

LTTNG_UST_TRACEPOINT_EVENT(
    fi_efa_prov,
    efa_tp_rxr_msg_send_begin,
    LTTNG_UST_TP_ARGS(
        int, msg_id,
        int, tx_id,
        int, rx_id,
        int, total_len
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, tx_id, tx_id)
        lttng_ust_field_integer(int, rx_id, rx_id)
        lttng_ust_field_integer(int, totel_len, total_len)        
    )
)
LTTNG_UST_TRACEPOINT_LOGLEVEL(fi_efa_prov, efa_tp_rxr_msg_send_begin, LTTNG_UST_TRACEPOINT_LOGLEVEL_INFO)

LTTNG_UST_TRACEPOINT_EVENT(
    fi_efa_prov,
    efa_tp_rxr_msg_send_begin_msg_context,
    LTTNG_UST_TP_ARGS(
        size_t, context,
        size_t, addr
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_integer(size_t, context, context)
        lttng_ust_field_integer(size_t, addr, addr)
    )
)
LTTNG_UST_TRACEPOINT_LOGLEVEL(fi_efa_prov, efa_tp_rxr_msg_send_begin_msg_context, LTTNG_UST_TRACEPOINT_LOGLEVEL_INFO)

LTTNG_UST_TRACEPOINT_EVENT(
    fi_efa_prov,
    efa_tp_rxr_msg_recv_begin,
    LTTNG_UST_TP_ARGS(
        int, msg_id,
        int, tx_id,
        int, rx_id,
        int, total_len
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, tx_id, tx_id)
        lttng_ust_field_integer(int, rx_id, rx_id)
        lttng_ust_field_integer(int, totel_len, total_len)        
    )
)
LTTNG_UST_TRACEPOINT_LOGLEVEL(fi_efa_prov, efa_tp_rxr_msg_recv_begin, LTTNG_UST_TRACEPOINT_LOGLEVEL_INFO)

LTTNG_UST_TRACEPOINT_EVENT(
    fi_efa_prov,
    efa_tp_rxr_msg_recv_begin_msg_context,
    LTTNG_UST_TP_ARGS(
        size_t, context,
        size_t, addr
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_integer(size_t, context, context)
        lttng_ust_field_integer(size_t, addr, addr)
    )
)
LTTNG_UST_TRACEPOINT_LOGLEVEL(fi_efa_prov, efa_tp_rxr_msg_recv_begin_msg_context, LTTNG_UST_TRACEPOINT_LOGLEVEL_INFO)

LTTNG_UST_TRACEPOINT_EVENT(
    fi_efa_prov,
    efa_tp_rxr_msg_send_end,
    LTTNG_UST_TP_ARGS(
        int, msg_id,
        int, tx_id,
        int, rx_id,
        int, tag,
        int, total_len,
        size_t, addr
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, tx_id, tx_id)
        lttng_ust_field_integer(int, rx_id, rx_id)
        lttng_ust_field_integer(int, totel_len, total_len)  
        lttng_ust_field_integer(int, tag, tag)
        lttng_ust_field_integer(int, addr, addr)           
    )
)
LTTNG_UST_TRACEPOINT_LOGLEVEL(fi_efa_prov, efa_tp_rxr_msg_send_end, LTTNG_UST_TRACEPOINT_LOGLEVEL_INFO)

LTTNG_UST_TRACEPOINT_EVENT(
    fi_efa_prov,
    efa_tp_rxr_msg_recv_end,
    LTTNG_UST_TP_ARGS(
        int, msg_id,
        int, tx_id,
        int, rx_id,
        int, tag,
        int, total_len,
        size_t, addr
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, tx_id, tx_id)
        lttng_ust_field_integer(int, rx_id, rx_id)
        lttng_ust_field_integer(int, totel_len, total_len)  
        lttng_ust_field_integer(int, tag, tag)
        lttng_ust_field_integer(int, addr, addr)           
    )
)
LTTNG_UST_TRACEPOINT_LOGLEVEL(fi_efa_prov, efa_tp_rxr_msg_recv_end, LTTNG_UST_TRACEPOINT_LOGLEVEL_INFO)
#endif

#include <lttng/tracepoint-event.h>