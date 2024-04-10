#include <string>

class AuditTrail 
{
public:
	static void logChange(const std::string& action, const std::string& details);
};