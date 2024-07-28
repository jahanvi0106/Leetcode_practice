class Solution {
public:

    // int minDistance(long long dist[26], bool sptSet[]){

    //     int min = INT_MAX, min_index;

    //     for (int v = 0; v < 26; v++)
    //     if (sptSet[v] == false && dist[v] <= min)
    //             min = dist[v], min_index = v;

    //     return min_index;
    // }

    // long long dijkstra(int graph[26][26], int src, int tag) {
    //     long long dist[26];
    //     bool sptSet[26]; 

    //     for (int i = 0; i < 26; i++)
    //         dist[i] = INT_MAX, sptSet[i] = false;
    //     dist[src] = 0;

    //     for (int count = 0; count < 25; count++) {

    //         int u = minDistance(dist, sptSet);
    //         sptSet[u] = true;
    //         for (int v = 0; v < 26; v++)
    //             if (!sptSet[v] && graph[u][v]
    //                 && dist[u] != INT_MAX
    //                 && dist[u] + graph[u][v] < dist[v])
    //                     dist[v] = dist[u] + graph[u][v];
    //     }
    //     if(dist[tag]==INT_MAX)
    //         return -1;
    //     else
    //         return dist[tag];
    // }

    // long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
    //     int g[26][26];
    //     int n = cost.size();
    //     long long sum=0;
    //     for(int i=0; i<n; i++){
    //         g[original[i]-'a'][changed[i]-'a'] = cost[i];
    //     }
    //     for(int i=0; source[i]!='\0'; i++){
    //         if (source[i] != target[i]){
    //             long long t = dijkstra(g, source[i]-'a', target[i]-'a');
    //             cout<<t<<" ";
    //             if(t==(-1)){
    //                 return -1;
    //                 break;
    //             }
    //             sum += t;
    //         }
    //     }
    //     cout<<endl;
    //     return sum;
    // }

    long long minimumCost(string source, string target, vector<char>& original,
                          vector<char>& changed, vector<int>& cost) {
        // Create a graph representation of character conversions
        vector<vector<pair<int, int>>> adjacencyList(26);

        // Populate the adjacency list with character conversions
        int conversionCount = original.size();
        for (int i = 0; i < conversionCount; i++) {
            adjacencyList[original[i] - 'a'].push_back(
                {changed[i] - 'a', cost[i]});
        }

        // Calculate shortest paths for all possible character conversions
        vector<vector<long long>> minConversionCosts(26, vector<long long>(26));
        for (int i = 0; i < 26; i++) {
            minConversionCosts[i] = dijkstra(i, adjacencyList);
        }

        // Calculate the total cost of converting source to target
        long long totalCost = 0;
        int stringLength = source.length();
        for (int i = 0; i < stringLength; i++) {
            if (source[i] != target[i]) {
                long long charConversionCost =
                    minConversionCosts[source[i] - 'a'][target[i] - 'a'];
                if (charConversionCost == -1) {
                    return -1;  // Conversion not possible
                }
                totalCost += charConversionCost;
            }
        }
        return totalCost;
    }

private:
    // Find minimum conversion costs from a starting character to all other
    // characters
    vector<long long> dijkstra(
        int startChar, const vector<vector<pair<int, int>>>& adjacencyList) {
        // Priority queue to store characters with their conversion cost, sorted
        // by cost
        priority_queue<pair<long long, int>, vector<pair<long long, int>>,
                       greater<pair<long long, int>>>
            priorityQueue;

        // Initialize the starting character with cost 0
        priorityQueue.push({0, startChar});

        // Array to store the minimum conversion cost to each character
        vector<long long> minCosts(26, -1);

        while (!priorityQueue.empty()) {
            auto [currentCost, currentChar] = priorityQueue.top();
            priorityQueue.pop();

            if (minCosts[currentChar] != -1 &&
                minCosts[currentChar] < currentCost)
                continue;

            // Explore all possible conversions from the current character
            for (auto& [targetChar, conversionCost] :
                 adjacencyList[currentChar]) {
                long long newTotalCost = currentCost + conversionCost;

                // If we found a cheaper conversion, update its cost
                if (minCosts[targetChar] == -1 ||
                    newTotalCost < minCosts[targetChar]) {
                    minCosts[targetChar] = newTotalCost;
                    // Add the updated conversion to the queue for further
                    // exploration
                    priorityQueue.push({newTotalCost, targetChar});
                }
            }
        }
        // Return the array of minimum conversion costs from the starting
        // character to all others
        return minCosts;
    }
};

