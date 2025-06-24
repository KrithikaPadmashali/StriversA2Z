#include<bits/stdc++.h>
using namespace std;

struct Cow {
    int arrival;
    int duration;
    int seniority;
};

bool cmpArrival(const Cow& a, const Cow& b) {
    return a.arrival < b.arrival;
}

int main() {
    int n;
    cin >> n;
    vector<Cow> cows(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> cows[i].arrival >> cows[i].duration;
        cows[i].seniority = i;
    }

    // Sort cows by arrival time
    sort(cows.begin(), cows.end(), cmpArrival);

    // Priority queue for waiting cows: min-seniority (higher priority)  
    auto cmpSeniority = [](const Cow& a, const Cow& b) {
        return a.seniority > b.seniority;
    };
    

    priority_queue<Cow, vector<Cow>, decltype(cmpSeniority)> waitQueue(cmpSeniority);

    long long currentTime = 0;
    int i = 0;
    int maxWait = 0;

    while (i < n || !waitQueue.empty()) {
        // Add all cows who have arrived by currentTime
        while (i < n && cows[i].arrival <= currentTime) {
            waitQueue.push(cows[i]);
            ++i;
        }

        if (!waitQueue.empty()) {
            Cow next = waitQueue.top();
            waitQueue.pop();
            maxWait = max(maxWait, (int)(currentTime - next.arrival));
            currentTime += next.duration;
        } else {
            // No cows waiting → jump to next arrival
            currentTime = cows[i].arrival;
            waitQueue.push(cows[i]);
            ++i;
        }
    }

    cout << maxWait << endl;
    return 0;
}
