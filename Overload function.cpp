#include <iostream>
using namespace std;

// Overloaded function taking two integers
int myFunc(int a, int b){    
    [span_2](start_span)return a + b;[span_2](end_span)
}

// Overloaded function taking one integer
int myFunc(int a){    
    [span_3](start_span)return a * 2;[span_3](end_span)
}

int main(){    
    [span_4](start_span)cout << myFunc(5, 3) << endl;[span_4](end_span)
    [span_5](start_span)cout << myFunc(5) << endl;[span_5](end_span)
    [span_6](start_span)return 0;[span_6](end_span)
}
