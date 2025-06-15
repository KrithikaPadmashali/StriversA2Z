// #include<bits/stdc++.h>
// using namespace std;
//normal queue
// int main() {
//   queue<int> q;
// 	q.push(30);
// 	q.push(20);
// 	q.push(76);

// 	cout << q.front() << endl;
// 	return 0;
// }


//priority queue  (DPQ)
// int main() {
//   priority_queue<int> pq;
//   pq.push(30);
//   pq.push(20);
//   pq.push(76);

//   cout << pq.top() << endl; // prints the largest element
//   pq.pop(); // removes the largest element
//   cout << pq.top() << endl; // prints the next largest element
//   return 0;
// }



// int main() {
//  priority_queue<int, vector<int>, greater<int>> pq; // min-heap
//   pq.push(30);  //[30]
//   pq.push(20);  //[20,30]
//   pq.push(76);  //[20,30,76]

//   cout << pq.top() << endl; // prints the smallest element
//   pq.pop(); // removes the smallest element
//   cout << pq.top() << endl; // prints the next smallest element
//   return 0;
// } 

#include<bits/stdc++.h>
using namespace std;


// int main(){

//   priority_queue<int> pq;
//   //inserting an element
//   pq.push(20);    //[20]
//   pq.push(10);     //[20,10]
//   pq.push(30);    //[30,20,10]
  
//   //deleing
//   pq.pop();   //[20,10]

//   //Peek
//   cout << "Top element is: " << pq.top() << endl; // should print 20

// }




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











  // int findKthLargest(vector<int>& nums, int k) {



  // }

  

  // int main() {
  //   vector<int> nums = {3, 2, 1, 5, 6, 4};
  //   int k = 2;
  //   cout << "The " << k << "th largest element is: " << findKthLargest(nums, k) << endl; // should print 5
  //   return 0;
  // }






 
