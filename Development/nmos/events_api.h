#ifndef NMOS_EVENTS_API_H
#define NMOS_EVENTS_API_H

#include "cpprest/api_router.h"

namespace slog
{
    class base_gate;
}

// Events API implementation
// See https://specs.amwa.tv/is-07/releases/v1.0.1/APIs/EventsAPI.html
namespace nmos
{
    struct node_model;

    web::http::experimental::listener::api_router make_events_api(const nmos::node_model& model, slog::base_gate& gate);
}

#endif
