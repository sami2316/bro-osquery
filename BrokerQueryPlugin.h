
#pragma once

#include <osquery/logger.h>
#include <osquery/sdk.h>

using namespace osquery;

class BrokerQueryManagerPlugin : public ConfigPlugin {
public:
    //Default Constructor
    BrokerQueryManagerPlugin() {}
    
    /**
     * @brief ConfigPlugin function; set to default
     * @param config Not used but required by function prototype
     * @return osquery::Status set it to "Not used"
     */
    Status genConfig(std::map<std::string,std::string>& config);
    
    //Default Destructor
    ~BrokerQueryManagerPlugin() {}
};



