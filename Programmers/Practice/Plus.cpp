#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = (a > b) ? a-b+1 : b-a+1;
    answer = answer * (a+b) / 2;
    return answer;
}