#include <iostream>
using namespace std;

struct Time{    
    [span_16](start_span)int hour;[span_16](end_span)
    [span_17](start_span)int minute;[span_17](end_span)
};

int main(){    
    [span_18](start_span)Time t = {12, 30};[span_18](end_span)
    [span_19](start_span)cout << t.hour << ":" << t.minute << endl;[span_19](end_span)
    [span_20](start_span)return 0;[span_20](end_span)
}
