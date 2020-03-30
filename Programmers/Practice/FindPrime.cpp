#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> vec;
    for(int i  = 2 ; i <= n ; i++)
        vec.push_back(false);

    for(int i = 2 ; i <= n ; i++)
        if(!vec[i-2]) {
            answer++;
            for(int j = i * 2 ; j <= n ; j += i) {
                vec[j-2] = true;
            }
        }
    return answer;
}