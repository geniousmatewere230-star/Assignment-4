#include <iostream>
using namespace std;

int main(){    
    [span_11](start_span)int *ptr = new int;[span_11](end_span)
    *[span_12](start_span)ptr = 50;[span_12](end_span)
    
    [span_13](start_span)cout << *ptr << endl;[span_13](end_span)
    [span_14](start_span)delete ptr;[span_14](end_span)
    [span_15](start_span)return 0;[span_15](end_span)
}
