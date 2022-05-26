#pragma once
#include <http/connection/connection_type.h>

synapse_http_connection_handle
synapse_http_connection_tcp_initialize_from_v4(synapse_http_connection_addr_v4);

synapse_http_connection_handle
synapse_http_connection_tcp_initialize_from_v6(synapse_http_connection_addr_v6);

synapse_http_connection_handle
synapse_http_connection_tcp_initialize_v4_from_url(synapse_http_connection_addr_url);

synapse_http_connection_handle
synapse_http_connection_tcp_initialize_v6_from_url(synapse_http_connection_addr_url);

void
synapse_http_conneciton_tcp_cleanup(synapse_http_connection_handle);