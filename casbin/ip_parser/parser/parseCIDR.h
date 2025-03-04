#ifndef IP_PARSER_PARSER_PARSE_CIDR
#define IP_PARSER_PARSER_PARSE_CIDR

#include <string>

#include "./CIDR.h"
#include "./IP.h"
#include "./IPMask.h"
#include "./dtoi.h"
#include "./byte.h"
#include "./parseIPv4.h"
#include "./parseIPv6.h"
#include "./CIDRMask.h"
#include "../exception/parser_exception.h"

namespace casbin {

CIDR parseCIDR(std::string s);

} // namespace casbin

#endif