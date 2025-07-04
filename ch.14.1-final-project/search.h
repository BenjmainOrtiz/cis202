#ifndef SEARCH_H
#define SEARCH_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "LaunchRecord.h"

using namespace std;

void searchByCustomer(const vector<LaunchRecord>& records, const string& customer);
void searchByOutcome(const vector<LaunchRecord>& records, const string& outcome);
void searchByLaunchSite(const vector<LaunchRecord>& records, const string& site);
void searchByBoosterLanding(const vector<LaunchRecord>& records, const string& landing);

#endif // SEARCH_H
