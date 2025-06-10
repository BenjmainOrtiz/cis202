#include <iostream>
#include <fstream>
#include <sstream>
#include "LaunchRecord.h"

LaunchRecord::LaunchRecord(const vector<string>& fields) {
    if (fields.size() >= 11) {
        flightNo = stoi(fields[0]);
        date = fields[1];
        time = fields[2];
        versionBooster = fields[3];
        launchSite = fields[4];
        payload = fields[5];
        payloadMass = fields[6];
        orbit = fields[7];
        customer = fields[8];
        launchOutcome = fields[9];
        boosterLanding = fields[10];
    }
}

void LaunchRecord::display() const {
    cout << *this << endl;
}

ostream& operator<<(ostream& os, const LaunchRecord& record) {
    os << "Flight " << record.flightNo << ": " << record.date << " " << record.time << " | Customer: " << record.customer << " | Outcome: " << record.launchOutcome << " | Booster Landing: " << record.boosterLanding << " | Launch Site: " << record.launchSite;
    return os;
}

