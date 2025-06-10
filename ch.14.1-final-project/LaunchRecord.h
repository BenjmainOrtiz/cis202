#ifndef LAUNCH_RECORD_H
#define LAUNCH_RECORD_H

#include <string>
#include <vector>
using namespace std;

class LaunchRecord {
    int flightNo;
    string date;
    string time;
    string versionBooster;
    string launchSite;
    string payload;
    string payloadMass;
    string orbit;
    string customer;
    string launchOutcome;
    string boosterLanding;
public:

    LaunchRecord(const vector<string>& fields);
    void display() const;

    int getFlightNo() const { return flightNo; }
    const string& getDate() const { return date; }
    const string& getTime() const { return time; }
    const string& getVersionBooster() const { return versionBooster; }
    const string& getLaunchSite() const { return launchSite; }
    const string& getPayload() const { return payload; }
    const string& getPayloadMass() const { return payloadMass; }
    const string& getOrbit() const { return orbit; }
    const string& getCustomer() const { return customer; }
    const string& getLaunchOutcome() const { return launchOutcome; }
    const string& getBoosterLanding() const { return boosterLanding; }

    friend ostream& operator<<(ostream& os, const LaunchRecord& record);
    
};



#endif
