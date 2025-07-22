#pragma once

#define __LINUX__
#include "../SDK/include/ida.hpp"
#include "../SDK/include/idp.hpp"

#include "../SDK/include/loader.hpp"
#include "../SDK/include/search.hpp"

// Plugin specific definitions

struct plugin_ctx_t : public plugmod_t {
  ~plugin_ctx_t() {}
  virtual bool idaapi run(size_t) override;
};

static plugmod_t *idaapi init() { return new plugin_ctx_t; }
